/* Ice_DdsConnector.c
 *
 * This file contains the implementation for the generated interface.
 *
 * Don't mess with the begin and end tags, since these will ensure that modified
 * code in interface functions isn't replaced when code is re-generated.
 */

#include "Ice.h"

/* $header() */
#include "ice_types.h"
#include "dds_dcps.h"
#include "CheckStatus.h"


#define on_data_available(TOPIC, CACHE_NAME, TYPE_OBJECT, TYPE_NAME) \
void Ice_DdsConnector_ ## TOPIC ## _delete(Ice_DdsConnector _this, TYPE_NAME obj) {\
    CX_UNUSED(_this);\
    cx_destruct(obj);\
}\
\
 /* -- DDS listener is called when there is new data */ \
void Ice_DdsConnector_ ## TOPIC ## _onDataAvailable(Ice_DdsConnector _this, DDS_DataReader reader) { \
    DDS_sequence_ice_ ## TOPIC sampleSeq = { 0, 0, DDS_OBJECT_NIL, FALSE };\
    DDS_SampleInfoSeq infoSeq = { 0, 0, DDS_OBJECT_NIL, FALSE };\
    DDS_ReturnCode_t status;\
    unsigned int i;\
\
    /* Take all messages. */\
    status = ice_ ## TOPIC ## DataReader_take(\
        reader,\
        &sampleSeq,\
        &infoSeq,\
        DDS_LENGTH_UNLIMITED,\
        DDS_ANY_SAMPLE_STATE,\
        DDS_ANY_VIEW_STATE,\
        DDS_ANY_INSTANCE_STATE);\
    checkStatus(status, "ice_" #TOPIC "DataReader_take");\
\
    for (i = 0; i < sampleSeq._length; i++) {\
        cx_object CACHE_NAME;\
\
        /* Find CACHE_NAME in cortex cache */\
        CACHE_NAME = cx_resolve(_this->CACHE_NAME ## Cache, \
            Ice_DdsConnector_ ## TOPIC ## _key(_this, &sampleSeq._buffer[i]));\
\
        /* If y is not found, declare it */\
        if (!CACHE_NAME) {\
            CACHE_NAME = cx_declare(\
                _this-> CACHE_NAME ## Cache, \
                Ice_DdsConnector_ ## TOPIC ## _key(_this, &sampleSeq._buffer[i]),\
                cx_type(TYPE_OBJECT));\
        } else {\
            /* If CACHE_NAME is found, validate it is of the correct type */\
            if (!cx_instanceof(cx_type(TYPE_OBJECT), CACHE_NAME)) {\
                cx_id id;\
                cx_error("object '%s' already exists in the database with type '%s' (expected '" #TYPE_NAME "')",\
                    cx_nameof(CACHE_NAME),\
                    cx_fullname(cx_typeof(CACHE_NAME), id));\
\
                /* Release refcount obtained by cx_resolve */\
                cx_free(CACHE_NAME);\
                continue;\
            }\
\
            /* Release refcount obtained by cx_resolve */\
            cx_free(CACHE_NAME);\
        }\
\
        /* Synchronize device data with cortex */\
        switch (Ice_DdsToCrudKind(infoSeq._buffer[i].view_state, infoSeq._buffer[i].instance_state)) {\
        case Ice_Create:\
        case Ice_Update:\
            Ice_DdsConnector_ ## TOPIC ## _update(_this, CACHE_NAME, &sampleSeq._buffer[i]);\
            break;\
        case Ice_Delete:\
            Ice_DdsConnector_ ## TOPIC ## _delete(_this, CACHE_NAME);\
            break;\
        }\
    }\
\
    status = ice_ ## TOPIC ## DataReader_return_loan(reader, &sampleSeq, &infoSeq);\
    checkStatus(status, "ice_" #TOPIC "DataReader_return_loan");\
} 

/* Temporary adjustment for UTF-32 assumes no characters
 * outside ISO-8859-1 */ 
char * utf32Hack(ice_LongString *longString) {
    static char buffer[1024];
    for(unsigned int i = 0; i < longString->_length; i++) {
        buffer[i] = longString->_buffer[i].value[0];
    }
    buffer[longString->_length] = '\0';
    return (char*) buffer;
 }

char *Ice_DdsConnector_DeviceIdentity_key(Ice_DdsConnector _this, ice_DeviceIdentity *src) {
    return src->unique_device_identifier;
}

char *Ice_DdsConnector_Numeric_key(Ice_DdsConnector _this, ice_Numeric *src) {
    static char BUFFER[1024];

    snprintf(BUFFER, 1024, "%s-%s-%s-%d-%s",
        src->unique_device_identifier, src->metric_id,
        src->vendor_metric_id, src->instance_id, src->unit_id);


    return BUFFER;
}

/* -- Copy DDS data from DDS to cortex */
void Ice_DdsConnector_DeviceIdentity_update(Ice_DdsConnector _this, Ice_Device dest, ice_DeviceIdentity *src) {
    CX_UNUSED(_this);

    /* If destination is not yet defined, don't begin update. Instead, define object after setting
     * all fields, which will trigger a define event and calls the constructor.
     * While within cx_updateFrom / cx_updateEnd the object is write-locked. */

    if (cx_checkState(dest, CX_DEFINED)) {
        cx_updateBegin(dest);
    }

    if (dest->manufacturer) cx_dealloc(dest->manufacturer);
    dest->manufacturer = cx_strdup(utf32Hack(&src->manufacturer));

    if (dest->model) cx_dealloc(dest->model);
    dest->model = cx_strdup(utf32Hack(&src->model));

    if (dest->serial_number) cx_dealloc(dest->serial_number);
    dest->serial_number = cx_strdup(utf32Hack(&src->serial_number));

    if (dest->icon.content_type) cx_dealloc(dest->icon.content_type);
    dest->icon.content_type = cx_strdup(src->icon.content_type);
    dest->icon.image.length = src->icon.image._length;
    // TODO why does this fail?
    //memcpy(dest->icon.image.buffer, src->icon.image._buffer, dest->icon.image.length);   

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

/* -- Copy DDS data from DDS to cortex */
void Ice_DdsConnector_Numeric_update(Ice_DdsConnector _this, Ice_Numeric dest, ice_Numeric *src) {
    CX_UNUSED(_this);

    /* If destination is not yet defined, don't begin update. Instead, define object after setting
     * all fields, which will trigger a define event and calls the constructor.
     * While within cx_updateFrom / cx_updateEnd the object is write-locked. */

    if (cx_checkState(dest, CX_DEFINED)) {
        cx_updateBegin(dest);
    }

    if (dest->unique_device_identifier) cx_dealloc(dest->unique_device_identifier);
    dest->unique_device_identifier = cx_strdup(src->unique_device_identifier);

    if (dest->metric_id) cx_dealloc(dest->metric_id);
    dest->metric_id = cx_strdup(src->metric_id);    

    if (dest->vendor_metric_id) cx_dealloc(dest->vendor_metric_id);
    dest->vendor_metric_id = cx_strdup(src->vendor_metric_id);

    dest->instance_id = src->instance_id;

    if (dest->unit_id) cx_dealloc(dest->unit_id);
    dest->unit_id = cx_strdup(src->unit_id);  

    dest->value = src->value;

    dest->device_time.sec = src->device_time.sec;
    dest->device_time.nanosec = src->device_time.nanosec;
    dest->presentation_time.sec = src->presentation_time.sec;
    dest->presentation_time.nanosec = src->presentation_time.nanosec;

    if (cx_checkState(dest, CX_DEFINED)) {
        cx_updateEnd(dest);
    } else {
        cx_define(dest);
    }
}

typedef enum Ice_CrudKind {
    Ice_Create,
    Ice_Update,
    Ice_Delete
} Ice_CrudKind;

Ice_CrudKind Ice_DdsToCrudKind(DDS_ViewStateKind vs, DDS_InstanceStateKind is) {
    Ice_CrudKind result;

    if(is == DDS_NOT_ALIVE_DISPOSED_INSTANCE_STATE || 
       is == DDS_NOT_ALIVE_NO_WRITERS_INSTANCE_STATE) {
        result = Ice_Delete;
    }else if(vs == DDS_NEW_VIEW_STATE) {
        result = Ice_Create;
    }else if(is == DDS_ALIVE_INSTANCE_STATE) {
        result = Ice_Update;
    }

    return result;
}

on_data_available(DeviceIdentity, device, Ice_Device_o, Ice_Device)
on_data_available(Numeric, numeric, Ice_Numeric_o, Ice_Numeric)

/* $end */

/* ::Ice::DdsConnector::construct() */
cx_int16 Ice_DdsConnector_construct(Ice_DdsConnector _this) {
/* $begin(::Ice::DdsConnector::construct) */

    /* -- Create DDS entities */
    DDS_DomainParticipant dp;
    DDS_Subscriber sub;
    DDS_Topic deviceIdentityTopic;
    DDS_Topic numericTopic;
    ice_DeviceIdentityTypeSupport deviceIdentityTs;
    ice_NumericTypeSupport numericTs;
    ice_DeviceIdentityDataReader deviceIdentityReader;
    ice_NumericDataReader numericReader;
    struct DDS_DataReaderListener deviceIdentityListener;
    struct DDS_DataReaderListener numericListener;
    char *deviceIdentityTypeName;
    char *numericTypeName;
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

    numericTs = ice_NumericTypeSupport__alloc();
    checkHandle(numericTs, "ice_NumericTypeSupport__alloc");
    numericTypeName = ice_NumericTypeSupport_get_type_name(numericTs);
    status = ice_NumericTypeSupport_register_type(
        numericTs,
        dp,
        numericTypeName);
    checkStatus(status, "ice_NumericTypeSupport_register_type");

    status = DDS_DomainParticipant_get_default_topic_qos(dp, &topicQos);
    checkStatus(status, "DDS_DomainParticipant_get_default_topic_qos");
    topicQos.reliability.kind = DDS_RELIABLE_RELIABILITY_QOS;
    topicQos.durability.kind = DDS_TRANSIENT_LOCAL_DURABILITY_QOS;
    topicQos.ownership.kind = DDS_EXCLUSIVE_OWNERSHIP_QOS;
    topicQos.history.depth = 1;
    topicQos.history.kind = DDS_KEEP_LAST_HISTORY_QOS;

    deviceIdentityTopic = DDS_DomainParticipant_create_topic(
        dp,
        "DeviceIdentity",
        deviceIdentityTypeName,
        &topicQos,
        NULL,
        DDS_STATUS_MASK_NONE);
    checkHandle(deviceIdentityTopic, "DDS_DomainParticipant_create_topic (DeviceIdentity)");

    status = DDS_DomainParticipant_get_default_topic_qos(dp, &topicQos);
    checkStatus(status, "DDS_DomainParticipant_get_default_topic_qos");
    topicQos.reliability.kind = DDS_RELIABLE_RELIABILITY_QOS;
    topicQos.durability.kind = DDS_TRANSIENT_LOCAL_DURABILITY_QOS;
    topicQos.ownership.kind = DDS_EXCLUSIVE_OWNERSHIP_QOS;
    topicQos.history.depth = 1;
    topicQos.history.kind = DDS_KEEP_LAST_HISTORY_QOS;

    numericTopic = DDS_DomainParticipant_create_topic(
        dp,
        "Numeric",
        numericTypeName,
        &topicQos,
        NULL,
        DDS_STATUS_MASK_NONE);
    checkHandle(numericTopic, "DDS_DomainParticipant_create_topic (Numeric)");


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
    deviceIdentityListener.on_data_available = (void (*)(void *, DDS_DataReader)) Ice_DdsConnector_DeviceIdentity_onDataAvailable;
    deviceIdentityListener.on_requested_deadline_missed = NULL;
    deviceIdentityListener.on_requested_incompatible_qos = NULL;
    deviceIdentityListener.on_sample_rejected = NULL;
    deviceIdentityListener.on_liveliness_changed = NULL;
    deviceIdentityListener.on_subscription_matched = NULL;
    deviceIdentityListener.on_sample_lost = NULL;
    deviceIdentityListener.listener_data = _this;

    status = DDS_DataReader_set_listener(deviceIdentityReader, &deviceIdentityListener, DDS_DATA_AVAILABLE_STATUS);
    checkStatus(status, "DDS_DataReader_set_listener");

    numericReader = DDS_Subscriber_create_datareader(
        sub,
        numericTopic,
        DDS_DATAREADER_QOS_USE_TOPIC_QOS,
        NULL,
        DDS_STATUS_MASK_NONE);
    checkHandle(numericReader, "DDS_Subscriber_create_datareader (Numeric)");

    /* -- Setup DDS listener */
    numericListener.on_data_available = (void (*)(void *, DDS_DataReader)) Ice_DdsConnector_Numeric_onDataAvailable;
    numericListener.on_requested_deadline_missed = NULL;
    numericListener.on_requested_incompatible_qos = NULL;
    numericListener.on_sample_rejected = NULL;
    numericListener.on_liveliness_changed = NULL;
    numericListener.on_subscription_matched = NULL;
    numericListener.on_sample_lost = NULL;
    numericListener.listener_data = _this;

    status = DDS_DataReader_set_listener(numericReader, &numericListener, DDS_DATA_AVAILABLE_STATUS);
    checkStatus(status, "DDS_DataReader_set_listener");

    /* -- Assign entities to DdsConnector object */
    _this->dp = (Ice_Participant)dp;
    _this->sub = (Ice_Subscriber)sub;
    _this->topic_deviceIdentity = (Ice_Topic)deviceIdentityTopic;
    _this->dr_deviceIdentity = (Ice_Reader)deviceIdentityReader;
    _this->dr_numeric = (Ice_Reader)numericReader;

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
