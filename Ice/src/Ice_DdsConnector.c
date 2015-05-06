/* Ice_DdsConnector.c
 *
 * This file contains the implementation for the generated interface.
 *
 *    Don't mess with the begin and end tags, since these will ensure that modified
 *    code in interface functions isn't replaced when code is re-generated.
 */

#include "Ice.h"
#include "Ice__meta.h"

/* $header() */
#include "ice_types.h"
#include "dds_dcps.h"
#include "CheckStatus.h"

/* -- Copy DDS data from DDS to cortex */
void Ice_DdsConnector_update(Ice_DdsConnector _this, Ice_Device dest, ice_DeviceIdentity *src) {
    CX_UNUSED(_this);

    /* If destination is not yet defined, don't begin update. Instead, define object after setting
     * all fields, which will trigger a define event and calls the constructor.
     * While within cx_updateFrom / cx_updateEnd the object is write-locked. */

    if (cx_checkState(dest, CX_DEFINED)) {
        cx_updateBegin(dest);
    }

    if (dest->manufacturer) cx_dealloc(dest->manufacturer);
    dest->manufacturer = cx_strdup(src->manufacturer);

    if (dest->model) cx_dealloc(dest->model);
    dest->model = cx_strdup(src->model);

    if (dest->serial_number) cx_dealloc(dest->serial_number);
    dest->serial_number = cx_strdup(src->serial_number);

    if (dest->icon.content_type) cx_dealloc(dest->icon.content_type);
    dest->icon.content_type = cx_strdup(src->icon.content_type);
    dest->icon.image.length = src->icon.image._length;
    memcpy(dest->icon.image.buffer, src->icon.image._buffer, dest->icon.image.length);   

    if (dest->build) cx_dealloc(dest->build);
    dest->build = cx_strdup(src->build);

    if (dest->operating_system) cx_dealloc(dest->operating_system);
    dest->operating_system = cx_strdup(src->operating_system);

    if (cx_checkState(dest, CX_DEFINED)) {
        cx_updateEnd(dest);
    } else {
        cx_define(dest);
    }
}

/* -- Delete object from store */
void Ice_DdsConnector_delete(Ice_DdsConnector _this, Ice_Device obj) {
    CX_UNUSED(_this);
    cx_destruct(obj);
}

typedef enum Ice_CrudKind {
    Ice_Create,
    Ice_Update,
    Ice_Delete
} Ice_CrudKind;

Ice_CrudKind Ice_DdsToCrudKind(DDS_ViewStateKind vs, DDS_InstanceStateKind is) {
    Ice_CrudKind result;

    if(is == DDS_NOT_ALIVE_DISPOSED_INSTANCE_STATE) {
        result = Ice_Delete;
    }else if(vs == DDS_NEW_VIEW_STATE) {
        result = Ice_Create;
    }else if(is == DDS_ALIVE_INSTANCE_STATE) {
        result = Ice_Update;
    }

    return result;
}

/* -- DDS listener is called when there is new data */
void Ice_DdsConnector_onDataAvailable(Ice_DdsConnector _this, DDS_DataReader reader) {
    DDS_sequence_ice_DeviceIdentity sampleSeq = { 0, 0, DDS_OBJECT_NIL, FALSE };
    DDS_SampleInfoSeq infoSeq = { 0, 0, DDS_OBJECT_NIL, FALSE };
    DDS_ReturnCode_t status;
    unsigned int i;

    /* Take all messages. */
    status = ice_DeviceIdentityDataReader_take(
        reader,
        &sampleSeq,
        &infoSeq,
        DDS_LENGTH_UNLIMITED,
        DDS_ANY_SAMPLE_STATE,
        DDS_ANY_VIEW_STATE,
        DDS_ANY_INSTANCE_STATE);
    checkStatus(status, "ice_DeviceIdentityDataReader_take");

    for (i = 0; i < sampleSeq._length; i++) {
        cx_object device;

        /* Find device in cortex cache */
        device = cx_resolve(_this->deviceCache, sampleSeq._buffer[i].unique_device_identifier);

        /* If device is not found, declare it */
        if (!device) {
            device = cx_declare(
                _this->deviceCache, 
                sampleSeq._buffer[i].unique_device_identifier,
                cx_type(Ice_Device_o));
        } else {
            /* If device is found, validate it is of the correct type */
            if (!cx_instanceof(cx_type(Ice_Device_o), device)) {
                cx_id id;
                cx_error("object '%s' already exists in the database with type '%s' (expected 'Ice::Device')",
                    cx_nameof(device),
                    cx_fullname(cx_typeof(device), id));

                /* Release refcount obtained by cx_resolve */
                cx_free(device);
                continue;
            }

            /* Release refcount obtained by cx_resolve */
            cx_free(device);
        }

        /* Synchronize device data with cortex */
        switch (Ice_DdsToCrudKind(infoSeq._buffer[i].view_state, infoSeq._buffer[i].instance_state)) {
        case Ice_Create:
        case Ice_Update:
            Ice_DdsConnector_update(_this, device, &sampleSeq._buffer[i]);
            break;
        case Ice_Delete:
            Ice_DdsConnector_delete(_this, device);
            break;
        }
    }

    status = ice_DeviceIdentityDataReader_return_loan(reader, &sampleSeq, &infoSeq);
    checkStatus(status, "ice_DeviceIdentityDataReader_return_loan");
}
/* $end */

/* ::Ice::DdsConnector::construct() */
cx_int16 Ice_DdsConnector_construct(Ice_DdsConnector _this) {
/* $begin(::Ice::DdsConnector::construct) */

    /* -- Create DDS entities */
    DDS_DomainParticipant dp;
    DDS_Subscriber sub;
    DDS_Topic deviceIdentityTopic;
    ice_DeviceIdentityTypeSupport deviceIdentityTs;
    ice_DeviceIdentityDataReader deviceIdentityReader;
    struct DDS_DataReaderListener listener;
    char *deviceIdentityTypeName;
    DDS_TopicQos topicQos;
    DDS_SubscriberQos subQos;
    DDS_ReturnCode_t status;

    memset(&topicQos, 0, sizeof(topicQos));
    memset(&subQos, 0, sizeof(subQos));

    dp = DDS_DomainParticipantFactory_create_participant (
        DDS_TheParticipantFactory,
        _this->domainId,
        DDS_PARTICIPANT_QOS_DEFAULT,
        NULL,
        DDS_STATUS_MASK_NONE);
    checkHandle(dp, "DDS_DomainParticipantFactory_create_participant");

    deviceIdentityTs = ice_DeviceIdentityTypeSupport__alloc();
    checkHandle(deviceIdentityTs, "ice_DeviceIdentityTypeSupport__alloc");
    deviceIdentityTypeName = ice_DeviceIdentityTypeSupport_get_type_name(deviceIdentityTs);
    status = ice_DeviceIdentityTypeSupport_register_type(
        deviceIdentityTs,
        dp,
        deviceIdentityTypeName);
    checkStatus(status, "ice_DeviceIdentityTypeSupport_register_type");

    status = DDS_DomainParticipant_get_default_topic_qos(dp, &topicQos);
    checkStatus(status, "DDS_DomainParticipant_get_default_topic_qos");
    topicQos.reliability.kind = DDS_RELIABLE_RELIABILITY_QOS;
    topicQos.durability.kind = DDS_TRANSIENT_DURABILITY_QOS;

    deviceIdentityTopic = DDS_DomainParticipant_create_topic(
        dp,
        "ice_DeviceIdentity",
        deviceIdentityTypeName,
        &topicQos,
        NULL,
        DDS_STATUS_MASK_NONE);
    checkHandle(deviceIdentityTopic, "DDS_DomainParticipant_create_topic (DeviceIdentity)");

    status = DDS_DomainParticipant_get_default_subscriber_qos (dp, &subQos);
    checkStatus(status, "DDS_DomainParticipant_get_default_subscriber_qos");
    if (_this->partition) {
        subQos.partition.name._length = 1;
        subQos.partition.name._maximum = 1;
        subQos.partition.name._buffer = DDS_StringSeq_allocbuf (1);
        checkHandle(subQos.partition.name._buffer, "DDS_StringSeq_allocbuf");
        subQos.partition.name._buffer[0] = DDS_string_dup (_this->partition);
        checkHandle(subQos.partition.name._buffer[0], "DDS_string_dup");
    }

    sub = DDS_DomainParticipant_create_subscriber(dp, &subQos, NULL, DDS_STATUS_MASK_NONE);
    checkHandle(sub, "DDS_DomainParticipant_create_subscriber");

    deviceIdentityReader = DDS_Subscriber_create_datareader(
        sub,
        deviceIdentityTopic,
        DDS_DATAREADER_QOS_USE_TOPIC_QOS,
        NULL,
        DDS_STATUS_MASK_NONE);
    checkHandle(deviceIdentityReader, "DDS_Subscriber_create_datareader (DeviceIdentity)");

    /* -- Setup DDS listener */
    listener.on_data_available = (void (*)(void *, DDS_DataReader)) Ice_DdsConnector_onDataAvailable;
    listener.on_requested_deadline_missed = NULL;
    listener.on_requested_incompatible_qos = NULL;
    listener.on_sample_rejected = NULL;
    listener.on_liveliness_changed = NULL;
    listener.on_subscription_matched = NULL;
    listener.on_sample_lost = NULL;
    listener.listener_data = _this;

    status = DDS_DataReader_set_listener(deviceIdentityReader, &listener, DDS_DATA_AVAILABLE_STATUS);
    checkStatus(status, "DDS_DataReader_set_listener");

    /* -- Assign entities to DdsConnector object */
    _this->dp = (Ice_Participant)dp;
    _this->sub = (Ice_Subscriber)sub;
    _this->topic_deviceIdentity = (Ice_Topic)deviceIdentityTopic;
    _this->dr_deviceIdentity = (Ice_Reader)deviceIdentityReader;

    return 0;
/* $end */
}

/* ::Ice::DdsConnector::destruct() */
cx_void Ice_DdsConnector_destruct(Ice_DdsConnector _this) {
/* $begin(::Ice::DdsConnector::destruct) */
    DDS_ReturnCode_t status;
    status = DDS_DomainParticipant_delete_contained_entities((DDS_DomainParticipant)_this->dp);
    checkStatus(status, "DDS_DomainParticipant_delete_contained_entities");
/* $end */
}
