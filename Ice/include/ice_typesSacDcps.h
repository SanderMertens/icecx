#ifndef ICE_TYPESSACDCPS_H
#define ICE_TYPESSACDCPS_H

#include "ice_typesDcps.h"

#ifndef DDS_API
#define DDS_API
#endif


#define ice_HeartBeatTypeSupport DDS_TypeSupport

 ice_HeartBeatTypeSupport
ice_HeartBeatTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
ice_HeartBeatTypeSupport_register_type (
    ice_HeartBeatTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
ice_HeartBeatTypeSupport_get_type_name (
    ice_HeartBeatTypeSupport _this
    );

#ifndef _DDS_sequence_ice_HeartBeat_defined
#define _DDS_sequence_ice_HeartBeat_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    ice_HeartBeat *_buffer;
    DDS_boolean _release;
} DDS_sequence_ice_HeartBeat;

 DDS_sequence_ice_HeartBeat *DDS_sequence_ice_HeartBeat__alloc (void);
 ice_HeartBeat *DDS_sequence_ice_HeartBeat_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_ice_HeartBeat_defined */

#define ice_HeartBeatDataWriter DDS_DataWriter

#define ice_HeartBeatDataWriter_enable DDS_Entity_enable

#define ice_HeartBeatDataWriter_get_status_changes DDS_Entity_get_status_changes

#define ice_HeartBeatDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define ice_HeartBeatDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define ice_HeartBeatDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define ice_HeartBeatDataWriter_get_listener DDS_DataWriter_get_listener

#define ice_HeartBeatDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define ice_HeartBeatDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define ice_HeartBeatDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define ice_HeartBeatDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define ice_HeartBeatDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define ice_HeartBeatDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define ice_HeartBeatDataWriter_get_publisher DDS_DataWriter_get_publisher

#define ice_HeartBeatDataWriter_get_qos DDS_DataWriter_get_qos

#define ice_HeartBeatDataWriter_get_topic DDS_DataWriter_get_topic

#define ice_HeartBeatDataWriter_set_listener DDS_DataWriter_set_listener

#define ice_HeartBeatDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
ice_HeartBeatDataWriter_register_instance (
    ice_HeartBeatDataWriter _this,
    const ice_HeartBeat *instance_data
    );

 DDS_InstanceHandle_t
ice_HeartBeatDataWriter_register_instance_w_timestamp (
    ice_HeartBeatDataWriter _this,
    const ice_HeartBeat *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_HeartBeatDataWriter_unregister_instance (
    ice_HeartBeatDataWriter _this,
    const ice_HeartBeat *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_HeartBeatDataWriter_unregister_instance_w_timestamp (
    ice_HeartBeatDataWriter _this,
    const ice_HeartBeat *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_HeartBeatDataWriter_write (
    ice_HeartBeatDataWriter _this,
    const ice_HeartBeat *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_HeartBeatDataWriter_write_w_timestamp (
    ice_HeartBeatDataWriter _this,
    const ice_HeartBeat *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_HeartBeatDataWriter_dispose (
    ice_HeartBeatDataWriter _this,
    const ice_HeartBeat *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_HeartBeatDataWriter_dispose_w_timestamp (
    ice_HeartBeatDataWriter _this,
    const ice_HeartBeat *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_HeartBeatDataWriter_writedispose (
    ice_HeartBeatDataWriter _this,
    const ice_HeartBeat *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_HeartBeatDataWriter_writedispose_w_timestamp (
    ice_HeartBeatDataWriter _this,
    const ice_HeartBeat *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_HeartBeatDataWriter_get_key_value (
    ice_HeartBeatDataWriter _this,
    ice_HeartBeat *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_HeartBeatDataWriter_lookup_instance (
    ice_HeartBeatDataWriter _this,
    const ice_HeartBeat *key_holder
    );

#define ice_HeartBeatDataReader DDS_DataReader

#define ice_HeartBeatDataReader_enable DDS_Entity_enable

#define ice_HeartBeatDataReader_get_status_changes DDS_Entity_get_status_changes

#define ice_HeartBeatDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define ice_HeartBeatDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define ice_HeartBeatDataReader_create_querycondition DDS_DataReader_create_querycondition

#define ice_HeartBeatDataReader_create_readcondition DDS_DataReader_create_readcondition

#define ice_HeartBeatDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define ice_HeartBeatDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define ice_HeartBeatDataReader_get_listener DDS_DataReader_get_listener

#define ice_HeartBeatDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define ice_HeartBeatDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define ice_HeartBeatDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define ice_HeartBeatDataReader_get_qos DDS_DataReader_get_qos

#define ice_HeartBeatDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define ice_HeartBeatDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define ice_HeartBeatDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define ice_HeartBeatDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define ice_HeartBeatDataReader_get_subscriber DDS_DataReader_get_subscriber

#define ice_HeartBeatDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define ice_HeartBeatDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define ice_HeartBeatDataReader_set_listener DDS_DataReader_set_listener

#define ice_HeartBeatDataReader_set_qos DDS_DataReader_set_qos

#define ice_HeartBeatDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
ice_HeartBeatDataReader_read (
    ice_HeartBeatDataReader _this,
    DDS_sequence_ice_HeartBeat *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_HeartBeatDataReader_take (
    ice_HeartBeatDataReader _this,
    DDS_sequence_ice_HeartBeat *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_HeartBeatDataReader_read_w_condition (
    ice_HeartBeatDataReader _this,
    DDS_sequence_ice_HeartBeat *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_HeartBeatDataReader_take_w_condition (
    ice_HeartBeatDataReader _this,
    DDS_sequence_ice_HeartBeat *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_HeartBeatDataReader_read_next_sample (
    ice_HeartBeatDataReader _this,
    ice_HeartBeat *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_HeartBeatDataReader_take_next_sample (
    ice_HeartBeatDataReader _this,
    ice_HeartBeat *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_HeartBeatDataReader_read_instance (
    ice_HeartBeatDataReader _this,
    DDS_sequence_ice_HeartBeat *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_HeartBeatDataReader_take_instance (
    ice_HeartBeatDataReader _this,
    DDS_sequence_ice_HeartBeat *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_HeartBeatDataReader_read_next_instance (
    ice_HeartBeatDataReader _this,
    DDS_sequence_ice_HeartBeat *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_HeartBeatDataReader_take_next_instance (
    ice_HeartBeatDataReader _this,
    DDS_sequence_ice_HeartBeat *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_HeartBeatDataReader_read_next_instance_w_condition (
    ice_HeartBeatDataReader _this,
    DDS_sequence_ice_HeartBeat *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_HeartBeatDataReader_take_next_instance_w_condition (
    ice_HeartBeatDataReader _this,
    DDS_sequence_ice_HeartBeat *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_HeartBeatDataReader_return_loan (
    ice_HeartBeatDataReader _this,
    DDS_sequence_ice_HeartBeat *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_HeartBeatDataReader_get_key_value (
    ice_HeartBeatDataReader _this,
    ice_HeartBeat *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_HeartBeatDataReader_lookup_instance (
    ice_HeartBeatDataReader _this,
    const ice_HeartBeat *key_holder
    );

#define ice_HeartBeatDataReaderView DDS_DataReaderView

#define ice_HeartBeatDataReaderView_enable DDS_Entity_enable

#define ice_HeartBeatDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define ice_HeartBeatDataReaderView_get_qos DDS_DataReaderView_get_qos

#define ice_HeartBeatDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define ice_HeartBeatDataReaderView_set_qos DDS_DataReaderView_set_qos

#define ice_HeartBeatDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define ice_HeartBeatDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define ice_HeartBeatDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define ice_HeartBeatDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
ice_HeartBeatDataReaderView_read (
    ice_HeartBeatDataReaderView _this,
    DDS_sequence_ice_HeartBeat *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_HeartBeatDataReaderView_take (
    ice_HeartBeatDataReaderView _this,
    DDS_sequence_ice_HeartBeat *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_HeartBeatDataReaderView_read_next_sample (
    ice_HeartBeatDataReaderView _this,
    ice_HeartBeat *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_HeartBeatDataReaderView_take_next_sample (
    ice_HeartBeatDataReaderView _this,
    ice_HeartBeat *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_HeartBeatDataReaderView_read_instance (
    ice_HeartBeatDataReaderView _this,
    DDS_sequence_ice_HeartBeat *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_HeartBeatDataReaderView_take_instance (
    ice_HeartBeatDataReaderView _this,
    DDS_sequence_ice_HeartBeat *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_HeartBeatDataReaderView_read_next_instance (
    ice_HeartBeatDataReaderView _this,
    DDS_sequence_ice_HeartBeat *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_HeartBeatDataReaderView_take_next_instance (
    ice_HeartBeatDataReaderView _this,
    DDS_sequence_ice_HeartBeat *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_HeartBeatDataReaderView_return_loan (
    ice_HeartBeatDataReaderView _this,
    DDS_sequence_ice_HeartBeat *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_HeartBeatDataReaderView_read_w_condition (
    ice_HeartBeatDataReaderView _this,
    DDS_sequence_ice_HeartBeat *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_HeartBeatDataReaderView_take_w_condition (
    ice_HeartBeatDataReaderView _this,
    DDS_sequence_ice_HeartBeat *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_HeartBeatDataReaderView_read_next_instance_w_condition (
    ice_HeartBeatDataReaderView _this,
    DDS_sequence_ice_HeartBeat *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_HeartBeatDataReaderView_take_next_instance_w_condition (
    ice_HeartBeatDataReaderView _this,
    DDS_sequence_ice_HeartBeat *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_HeartBeatDataReaderView_get_key_value (
    ice_HeartBeatDataReaderView _this,
    ice_HeartBeat *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_HeartBeatDataReaderView_lookup_instance (
    ice_HeartBeatDataReaderView _this,
    ice_HeartBeat *key_holder
    );


#define ice_TimeSyncTypeSupport DDS_TypeSupport

 ice_TimeSyncTypeSupport
ice_TimeSyncTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
ice_TimeSyncTypeSupport_register_type (
    ice_TimeSyncTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
ice_TimeSyncTypeSupport_get_type_name (
    ice_TimeSyncTypeSupport _this
    );

#ifndef _DDS_sequence_ice_TimeSync_defined
#define _DDS_sequence_ice_TimeSync_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    ice_TimeSync *_buffer;
    DDS_boolean _release;
} DDS_sequence_ice_TimeSync;

 DDS_sequence_ice_TimeSync *DDS_sequence_ice_TimeSync__alloc (void);
 ice_TimeSync *DDS_sequence_ice_TimeSync_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_ice_TimeSync_defined */

#define ice_TimeSyncDataWriter DDS_DataWriter

#define ice_TimeSyncDataWriter_enable DDS_Entity_enable

#define ice_TimeSyncDataWriter_get_status_changes DDS_Entity_get_status_changes

#define ice_TimeSyncDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define ice_TimeSyncDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define ice_TimeSyncDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define ice_TimeSyncDataWriter_get_listener DDS_DataWriter_get_listener

#define ice_TimeSyncDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define ice_TimeSyncDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define ice_TimeSyncDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define ice_TimeSyncDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define ice_TimeSyncDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define ice_TimeSyncDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define ice_TimeSyncDataWriter_get_publisher DDS_DataWriter_get_publisher

#define ice_TimeSyncDataWriter_get_qos DDS_DataWriter_get_qos

#define ice_TimeSyncDataWriter_get_topic DDS_DataWriter_get_topic

#define ice_TimeSyncDataWriter_set_listener DDS_DataWriter_set_listener

#define ice_TimeSyncDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
ice_TimeSyncDataWriter_register_instance (
    ice_TimeSyncDataWriter _this,
    const ice_TimeSync *instance_data
    );

 DDS_InstanceHandle_t
ice_TimeSyncDataWriter_register_instance_w_timestamp (
    ice_TimeSyncDataWriter _this,
    const ice_TimeSync *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_TimeSyncDataWriter_unregister_instance (
    ice_TimeSyncDataWriter _this,
    const ice_TimeSync *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_TimeSyncDataWriter_unregister_instance_w_timestamp (
    ice_TimeSyncDataWriter _this,
    const ice_TimeSync *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_TimeSyncDataWriter_write (
    ice_TimeSyncDataWriter _this,
    const ice_TimeSync *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_TimeSyncDataWriter_write_w_timestamp (
    ice_TimeSyncDataWriter _this,
    const ice_TimeSync *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_TimeSyncDataWriter_dispose (
    ice_TimeSyncDataWriter _this,
    const ice_TimeSync *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_TimeSyncDataWriter_dispose_w_timestamp (
    ice_TimeSyncDataWriter _this,
    const ice_TimeSync *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_TimeSyncDataWriter_writedispose (
    ice_TimeSyncDataWriter _this,
    const ice_TimeSync *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_TimeSyncDataWriter_writedispose_w_timestamp (
    ice_TimeSyncDataWriter _this,
    const ice_TimeSync *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_TimeSyncDataWriter_get_key_value (
    ice_TimeSyncDataWriter _this,
    ice_TimeSync *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_TimeSyncDataWriter_lookup_instance (
    ice_TimeSyncDataWriter _this,
    const ice_TimeSync *key_holder
    );

#define ice_TimeSyncDataReader DDS_DataReader

#define ice_TimeSyncDataReader_enable DDS_Entity_enable

#define ice_TimeSyncDataReader_get_status_changes DDS_Entity_get_status_changes

#define ice_TimeSyncDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define ice_TimeSyncDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define ice_TimeSyncDataReader_create_querycondition DDS_DataReader_create_querycondition

#define ice_TimeSyncDataReader_create_readcondition DDS_DataReader_create_readcondition

#define ice_TimeSyncDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define ice_TimeSyncDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define ice_TimeSyncDataReader_get_listener DDS_DataReader_get_listener

#define ice_TimeSyncDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define ice_TimeSyncDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define ice_TimeSyncDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define ice_TimeSyncDataReader_get_qos DDS_DataReader_get_qos

#define ice_TimeSyncDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define ice_TimeSyncDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define ice_TimeSyncDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define ice_TimeSyncDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define ice_TimeSyncDataReader_get_subscriber DDS_DataReader_get_subscriber

#define ice_TimeSyncDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define ice_TimeSyncDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define ice_TimeSyncDataReader_set_listener DDS_DataReader_set_listener

#define ice_TimeSyncDataReader_set_qos DDS_DataReader_set_qos

#define ice_TimeSyncDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
ice_TimeSyncDataReader_read (
    ice_TimeSyncDataReader _this,
    DDS_sequence_ice_TimeSync *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_TimeSyncDataReader_take (
    ice_TimeSyncDataReader _this,
    DDS_sequence_ice_TimeSync *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_TimeSyncDataReader_read_w_condition (
    ice_TimeSyncDataReader _this,
    DDS_sequence_ice_TimeSync *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_TimeSyncDataReader_take_w_condition (
    ice_TimeSyncDataReader _this,
    DDS_sequence_ice_TimeSync *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_TimeSyncDataReader_read_next_sample (
    ice_TimeSyncDataReader _this,
    ice_TimeSync *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_TimeSyncDataReader_take_next_sample (
    ice_TimeSyncDataReader _this,
    ice_TimeSync *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_TimeSyncDataReader_read_instance (
    ice_TimeSyncDataReader _this,
    DDS_sequence_ice_TimeSync *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_TimeSyncDataReader_take_instance (
    ice_TimeSyncDataReader _this,
    DDS_sequence_ice_TimeSync *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_TimeSyncDataReader_read_next_instance (
    ice_TimeSyncDataReader _this,
    DDS_sequence_ice_TimeSync *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_TimeSyncDataReader_take_next_instance (
    ice_TimeSyncDataReader _this,
    DDS_sequence_ice_TimeSync *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_TimeSyncDataReader_read_next_instance_w_condition (
    ice_TimeSyncDataReader _this,
    DDS_sequence_ice_TimeSync *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_TimeSyncDataReader_take_next_instance_w_condition (
    ice_TimeSyncDataReader _this,
    DDS_sequence_ice_TimeSync *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_TimeSyncDataReader_return_loan (
    ice_TimeSyncDataReader _this,
    DDS_sequence_ice_TimeSync *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_TimeSyncDataReader_get_key_value (
    ice_TimeSyncDataReader _this,
    ice_TimeSync *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_TimeSyncDataReader_lookup_instance (
    ice_TimeSyncDataReader _this,
    const ice_TimeSync *key_holder
    );

#define ice_TimeSyncDataReaderView DDS_DataReaderView

#define ice_TimeSyncDataReaderView_enable DDS_Entity_enable

#define ice_TimeSyncDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define ice_TimeSyncDataReaderView_get_qos DDS_DataReaderView_get_qos

#define ice_TimeSyncDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define ice_TimeSyncDataReaderView_set_qos DDS_DataReaderView_set_qos

#define ice_TimeSyncDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define ice_TimeSyncDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define ice_TimeSyncDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define ice_TimeSyncDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
ice_TimeSyncDataReaderView_read (
    ice_TimeSyncDataReaderView _this,
    DDS_sequence_ice_TimeSync *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_TimeSyncDataReaderView_take (
    ice_TimeSyncDataReaderView _this,
    DDS_sequence_ice_TimeSync *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_TimeSyncDataReaderView_read_next_sample (
    ice_TimeSyncDataReaderView _this,
    ice_TimeSync *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_TimeSyncDataReaderView_take_next_sample (
    ice_TimeSyncDataReaderView _this,
    ice_TimeSync *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_TimeSyncDataReaderView_read_instance (
    ice_TimeSyncDataReaderView _this,
    DDS_sequence_ice_TimeSync *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_TimeSyncDataReaderView_take_instance (
    ice_TimeSyncDataReaderView _this,
    DDS_sequence_ice_TimeSync *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_TimeSyncDataReaderView_read_next_instance (
    ice_TimeSyncDataReaderView _this,
    DDS_sequence_ice_TimeSync *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_TimeSyncDataReaderView_take_next_instance (
    ice_TimeSyncDataReaderView _this,
    DDS_sequence_ice_TimeSync *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_TimeSyncDataReaderView_return_loan (
    ice_TimeSyncDataReaderView _this,
    DDS_sequence_ice_TimeSync *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_TimeSyncDataReaderView_read_w_condition (
    ice_TimeSyncDataReaderView _this,
    DDS_sequence_ice_TimeSync *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_TimeSyncDataReaderView_take_w_condition (
    ice_TimeSyncDataReaderView _this,
    DDS_sequence_ice_TimeSync *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_TimeSyncDataReaderView_read_next_instance_w_condition (
    ice_TimeSyncDataReaderView _this,
    DDS_sequence_ice_TimeSync *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_TimeSyncDataReaderView_take_next_instance_w_condition (
    ice_TimeSyncDataReaderView _this,
    DDS_sequence_ice_TimeSync *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_TimeSyncDataReaderView_get_key_value (
    ice_TimeSyncDataReaderView _this,
    ice_TimeSync *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_TimeSyncDataReaderView_lookup_instance (
    ice_TimeSyncDataReaderView _this,
    ice_TimeSync *key_holder
    );


#define ice_DeviceIdentityTypeSupport DDS_TypeSupport

 ice_DeviceIdentityTypeSupport
ice_DeviceIdentityTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
ice_DeviceIdentityTypeSupport_register_type (
    ice_DeviceIdentityTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
ice_DeviceIdentityTypeSupport_get_type_name (
    ice_DeviceIdentityTypeSupport _this
    );

#ifndef _DDS_sequence_ice_DeviceIdentity_defined
#define _DDS_sequence_ice_DeviceIdentity_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    ice_DeviceIdentity *_buffer;
    DDS_boolean _release;
} DDS_sequence_ice_DeviceIdentity;

 DDS_sequence_ice_DeviceIdentity *DDS_sequence_ice_DeviceIdentity__alloc (void);
 ice_DeviceIdentity *DDS_sequence_ice_DeviceIdentity_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_ice_DeviceIdentity_defined */

#define ice_DeviceIdentityDataWriter DDS_DataWriter

#define ice_DeviceIdentityDataWriter_enable DDS_Entity_enable

#define ice_DeviceIdentityDataWriter_get_status_changes DDS_Entity_get_status_changes

#define ice_DeviceIdentityDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define ice_DeviceIdentityDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define ice_DeviceIdentityDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define ice_DeviceIdentityDataWriter_get_listener DDS_DataWriter_get_listener

#define ice_DeviceIdentityDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define ice_DeviceIdentityDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define ice_DeviceIdentityDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define ice_DeviceIdentityDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define ice_DeviceIdentityDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define ice_DeviceIdentityDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define ice_DeviceIdentityDataWriter_get_publisher DDS_DataWriter_get_publisher

#define ice_DeviceIdentityDataWriter_get_qos DDS_DataWriter_get_qos

#define ice_DeviceIdentityDataWriter_get_topic DDS_DataWriter_get_topic

#define ice_DeviceIdentityDataWriter_set_listener DDS_DataWriter_set_listener

#define ice_DeviceIdentityDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
ice_DeviceIdentityDataWriter_register_instance (
    ice_DeviceIdentityDataWriter _this,
    const ice_DeviceIdentity *instance_data
    );

 DDS_InstanceHandle_t
ice_DeviceIdentityDataWriter_register_instance_w_timestamp (
    ice_DeviceIdentityDataWriter _this,
    const ice_DeviceIdentity *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataWriter_unregister_instance (
    ice_DeviceIdentityDataWriter _this,
    const ice_DeviceIdentity *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataWriter_unregister_instance_w_timestamp (
    ice_DeviceIdentityDataWriter _this,
    const ice_DeviceIdentity *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataWriter_write (
    ice_DeviceIdentityDataWriter _this,
    const ice_DeviceIdentity *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataWriter_write_w_timestamp (
    ice_DeviceIdentityDataWriter _this,
    const ice_DeviceIdentity *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataWriter_dispose (
    ice_DeviceIdentityDataWriter _this,
    const ice_DeviceIdentity *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataWriter_dispose_w_timestamp (
    ice_DeviceIdentityDataWriter _this,
    const ice_DeviceIdentity *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataWriter_writedispose (
    ice_DeviceIdentityDataWriter _this,
    const ice_DeviceIdentity *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataWriter_writedispose_w_timestamp (
    ice_DeviceIdentityDataWriter _this,
    const ice_DeviceIdentity *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataWriter_get_key_value (
    ice_DeviceIdentityDataWriter _this,
    ice_DeviceIdentity *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_DeviceIdentityDataWriter_lookup_instance (
    ice_DeviceIdentityDataWriter _this,
    const ice_DeviceIdentity *key_holder
    );

#define ice_DeviceIdentityDataReader DDS_DataReader

#define ice_DeviceIdentityDataReader_enable DDS_Entity_enable

#define ice_DeviceIdentityDataReader_get_status_changes DDS_Entity_get_status_changes

#define ice_DeviceIdentityDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define ice_DeviceIdentityDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define ice_DeviceIdentityDataReader_create_querycondition DDS_DataReader_create_querycondition

#define ice_DeviceIdentityDataReader_create_readcondition DDS_DataReader_create_readcondition

#define ice_DeviceIdentityDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define ice_DeviceIdentityDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define ice_DeviceIdentityDataReader_get_listener DDS_DataReader_get_listener

#define ice_DeviceIdentityDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define ice_DeviceIdentityDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define ice_DeviceIdentityDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define ice_DeviceIdentityDataReader_get_qos DDS_DataReader_get_qos

#define ice_DeviceIdentityDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define ice_DeviceIdentityDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define ice_DeviceIdentityDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define ice_DeviceIdentityDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define ice_DeviceIdentityDataReader_get_subscriber DDS_DataReader_get_subscriber

#define ice_DeviceIdentityDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define ice_DeviceIdentityDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define ice_DeviceIdentityDataReader_set_listener DDS_DataReader_set_listener

#define ice_DeviceIdentityDataReader_set_qos DDS_DataReader_set_qos

#define ice_DeviceIdentityDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
ice_DeviceIdentityDataReader_read (
    ice_DeviceIdentityDataReader _this,
    DDS_sequence_ice_DeviceIdentity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataReader_take (
    ice_DeviceIdentityDataReader _this,
    DDS_sequence_ice_DeviceIdentity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataReader_read_w_condition (
    ice_DeviceIdentityDataReader _this,
    DDS_sequence_ice_DeviceIdentity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataReader_take_w_condition (
    ice_DeviceIdentityDataReader _this,
    DDS_sequence_ice_DeviceIdentity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataReader_read_next_sample (
    ice_DeviceIdentityDataReader _this,
    ice_DeviceIdentity *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataReader_take_next_sample (
    ice_DeviceIdentityDataReader _this,
    ice_DeviceIdentity *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataReader_read_instance (
    ice_DeviceIdentityDataReader _this,
    DDS_sequence_ice_DeviceIdentity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataReader_take_instance (
    ice_DeviceIdentityDataReader _this,
    DDS_sequence_ice_DeviceIdentity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataReader_read_next_instance (
    ice_DeviceIdentityDataReader _this,
    DDS_sequence_ice_DeviceIdentity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataReader_take_next_instance (
    ice_DeviceIdentityDataReader _this,
    DDS_sequence_ice_DeviceIdentity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataReader_read_next_instance_w_condition (
    ice_DeviceIdentityDataReader _this,
    DDS_sequence_ice_DeviceIdentity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataReader_take_next_instance_w_condition (
    ice_DeviceIdentityDataReader _this,
    DDS_sequence_ice_DeviceIdentity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataReader_return_loan (
    ice_DeviceIdentityDataReader _this,
    DDS_sequence_ice_DeviceIdentity *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataReader_get_key_value (
    ice_DeviceIdentityDataReader _this,
    ice_DeviceIdentity *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_DeviceIdentityDataReader_lookup_instance (
    ice_DeviceIdentityDataReader _this,
    const ice_DeviceIdentity *key_holder
    );

#define ice_DeviceIdentityDataReaderView DDS_DataReaderView

#define ice_DeviceIdentityDataReaderView_enable DDS_Entity_enable

#define ice_DeviceIdentityDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define ice_DeviceIdentityDataReaderView_get_qos DDS_DataReaderView_get_qos

#define ice_DeviceIdentityDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define ice_DeviceIdentityDataReaderView_set_qos DDS_DataReaderView_set_qos

#define ice_DeviceIdentityDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define ice_DeviceIdentityDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define ice_DeviceIdentityDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define ice_DeviceIdentityDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
ice_DeviceIdentityDataReaderView_read (
    ice_DeviceIdentityDataReaderView _this,
    DDS_sequence_ice_DeviceIdentity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataReaderView_take (
    ice_DeviceIdentityDataReaderView _this,
    DDS_sequence_ice_DeviceIdentity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataReaderView_read_next_sample (
    ice_DeviceIdentityDataReaderView _this,
    ice_DeviceIdentity *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataReaderView_take_next_sample (
    ice_DeviceIdentityDataReaderView _this,
    ice_DeviceIdentity *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataReaderView_read_instance (
    ice_DeviceIdentityDataReaderView _this,
    DDS_sequence_ice_DeviceIdentity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataReaderView_take_instance (
    ice_DeviceIdentityDataReaderView _this,
    DDS_sequence_ice_DeviceIdentity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataReaderView_read_next_instance (
    ice_DeviceIdentityDataReaderView _this,
    DDS_sequence_ice_DeviceIdentity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataReaderView_take_next_instance (
    ice_DeviceIdentityDataReaderView _this,
    DDS_sequence_ice_DeviceIdentity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataReaderView_return_loan (
    ice_DeviceIdentityDataReaderView _this,
    DDS_sequence_ice_DeviceIdentity *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataReaderView_read_w_condition (
    ice_DeviceIdentityDataReaderView _this,
    DDS_sequence_ice_DeviceIdentity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataReaderView_take_w_condition (
    ice_DeviceIdentityDataReaderView _this,
    DDS_sequence_ice_DeviceIdentity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataReaderView_read_next_instance_w_condition (
    ice_DeviceIdentityDataReaderView _this,
    DDS_sequence_ice_DeviceIdentity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataReaderView_take_next_instance_w_condition (
    ice_DeviceIdentityDataReaderView _this,
    DDS_sequence_ice_DeviceIdentity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_DeviceIdentityDataReaderView_get_key_value (
    ice_DeviceIdentityDataReaderView _this,
    ice_DeviceIdentity *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_DeviceIdentityDataReaderView_lookup_instance (
    ice_DeviceIdentityDataReaderView _this,
    ice_DeviceIdentity *key_holder
    );


#define ice_DeviceConnectivityTypeSupport DDS_TypeSupport

 ice_DeviceConnectivityTypeSupport
ice_DeviceConnectivityTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityTypeSupport_register_type (
    ice_DeviceConnectivityTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
ice_DeviceConnectivityTypeSupport_get_type_name (
    ice_DeviceConnectivityTypeSupport _this
    );

#ifndef _DDS_sequence_ice_DeviceConnectivity_defined
#define _DDS_sequence_ice_DeviceConnectivity_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    ice_DeviceConnectivity *_buffer;
    DDS_boolean _release;
} DDS_sequence_ice_DeviceConnectivity;

 DDS_sequence_ice_DeviceConnectivity *DDS_sequence_ice_DeviceConnectivity__alloc (void);
 ice_DeviceConnectivity *DDS_sequence_ice_DeviceConnectivity_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_ice_DeviceConnectivity_defined */

#define ice_DeviceConnectivityDataWriter DDS_DataWriter

#define ice_DeviceConnectivityDataWriter_enable DDS_Entity_enable

#define ice_DeviceConnectivityDataWriter_get_status_changes DDS_Entity_get_status_changes

#define ice_DeviceConnectivityDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define ice_DeviceConnectivityDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define ice_DeviceConnectivityDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define ice_DeviceConnectivityDataWriter_get_listener DDS_DataWriter_get_listener

#define ice_DeviceConnectivityDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define ice_DeviceConnectivityDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define ice_DeviceConnectivityDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define ice_DeviceConnectivityDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define ice_DeviceConnectivityDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define ice_DeviceConnectivityDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define ice_DeviceConnectivityDataWriter_get_publisher DDS_DataWriter_get_publisher

#define ice_DeviceConnectivityDataWriter_get_qos DDS_DataWriter_get_qos

#define ice_DeviceConnectivityDataWriter_get_topic DDS_DataWriter_get_topic

#define ice_DeviceConnectivityDataWriter_set_listener DDS_DataWriter_set_listener

#define ice_DeviceConnectivityDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
ice_DeviceConnectivityDataWriter_register_instance (
    ice_DeviceConnectivityDataWriter _this,
    const ice_DeviceConnectivity *instance_data
    );

 DDS_InstanceHandle_t
ice_DeviceConnectivityDataWriter_register_instance_w_timestamp (
    ice_DeviceConnectivityDataWriter _this,
    const ice_DeviceConnectivity *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataWriter_unregister_instance (
    ice_DeviceConnectivityDataWriter _this,
    const ice_DeviceConnectivity *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataWriter_unregister_instance_w_timestamp (
    ice_DeviceConnectivityDataWriter _this,
    const ice_DeviceConnectivity *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataWriter_write (
    ice_DeviceConnectivityDataWriter _this,
    const ice_DeviceConnectivity *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataWriter_write_w_timestamp (
    ice_DeviceConnectivityDataWriter _this,
    const ice_DeviceConnectivity *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataWriter_dispose (
    ice_DeviceConnectivityDataWriter _this,
    const ice_DeviceConnectivity *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataWriter_dispose_w_timestamp (
    ice_DeviceConnectivityDataWriter _this,
    const ice_DeviceConnectivity *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataWriter_writedispose (
    ice_DeviceConnectivityDataWriter _this,
    const ice_DeviceConnectivity *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataWriter_writedispose_w_timestamp (
    ice_DeviceConnectivityDataWriter _this,
    const ice_DeviceConnectivity *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataWriter_get_key_value (
    ice_DeviceConnectivityDataWriter _this,
    ice_DeviceConnectivity *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_DeviceConnectivityDataWriter_lookup_instance (
    ice_DeviceConnectivityDataWriter _this,
    const ice_DeviceConnectivity *key_holder
    );

#define ice_DeviceConnectivityDataReader DDS_DataReader

#define ice_DeviceConnectivityDataReader_enable DDS_Entity_enable

#define ice_DeviceConnectivityDataReader_get_status_changes DDS_Entity_get_status_changes

#define ice_DeviceConnectivityDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define ice_DeviceConnectivityDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define ice_DeviceConnectivityDataReader_create_querycondition DDS_DataReader_create_querycondition

#define ice_DeviceConnectivityDataReader_create_readcondition DDS_DataReader_create_readcondition

#define ice_DeviceConnectivityDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define ice_DeviceConnectivityDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define ice_DeviceConnectivityDataReader_get_listener DDS_DataReader_get_listener

#define ice_DeviceConnectivityDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define ice_DeviceConnectivityDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define ice_DeviceConnectivityDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define ice_DeviceConnectivityDataReader_get_qos DDS_DataReader_get_qos

#define ice_DeviceConnectivityDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define ice_DeviceConnectivityDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define ice_DeviceConnectivityDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define ice_DeviceConnectivityDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define ice_DeviceConnectivityDataReader_get_subscriber DDS_DataReader_get_subscriber

#define ice_DeviceConnectivityDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define ice_DeviceConnectivityDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define ice_DeviceConnectivityDataReader_set_listener DDS_DataReader_set_listener

#define ice_DeviceConnectivityDataReader_set_qos DDS_DataReader_set_qos

#define ice_DeviceConnectivityDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReader_read (
    ice_DeviceConnectivityDataReader _this,
    DDS_sequence_ice_DeviceConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReader_take (
    ice_DeviceConnectivityDataReader _this,
    DDS_sequence_ice_DeviceConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReader_read_w_condition (
    ice_DeviceConnectivityDataReader _this,
    DDS_sequence_ice_DeviceConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReader_take_w_condition (
    ice_DeviceConnectivityDataReader _this,
    DDS_sequence_ice_DeviceConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReader_read_next_sample (
    ice_DeviceConnectivityDataReader _this,
    ice_DeviceConnectivity *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReader_take_next_sample (
    ice_DeviceConnectivityDataReader _this,
    ice_DeviceConnectivity *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReader_read_instance (
    ice_DeviceConnectivityDataReader _this,
    DDS_sequence_ice_DeviceConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReader_take_instance (
    ice_DeviceConnectivityDataReader _this,
    DDS_sequence_ice_DeviceConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReader_read_next_instance (
    ice_DeviceConnectivityDataReader _this,
    DDS_sequence_ice_DeviceConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReader_take_next_instance (
    ice_DeviceConnectivityDataReader _this,
    DDS_sequence_ice_DeviceConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReader_read_next_instance_w_condition (
    ice_DeviceConnectivityDataReader _this,
    DDS_sequence_ice_DeviceConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReader_take_next_instance_w_condition (
    ice_DeviceConnectivityDataReader _this,
    DDS_sequence_ice_DeviceConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReader_return_loan (
    ice_DeviceConnectivityDataReader _this,
    DDS_sequence_ice_DeviceConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReader_get_key_value (
    ice_DeviceConnectivityDataReader _this,
    ice_DeviceConnectivity *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_DeviceConnectivityDataReader_lookup_instance (
    ice_DeviceConnectivityDataReader _this,
    const ice_DeviceConnectivity *key_holder
    );

#define ice_DeviceConnectivityDataReaderView DDS_DataReaderView

#define ice_DeviceConnectivityDataReaderView_enable DDS_Entity_enable

#define ice_DeviceConnectivityDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define ice_DeviceConnectivityDataReaderView_get_qos DDS_DataReaderView_get_qos

#define ice_DeviceConnectivityDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define ice_DeviceConnectivityDataReaderView_set_qos DDS_DataReaderView_set_qos

#define ice_DeviceConnectivityDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define ice_DeviceConnectivityDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define ice_DeviceConnectivityDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define ice_DeviceConnectivityDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReaderView_read (
    ice_DeviceConnectivityDataReaderView _this,
    DDS_sequence_ice_DeviceConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReaderView_take (
    ice_DeviceConnectivityDataReaderView _this,
    DDS_sequence_ice_DeviceConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReaderView_read_next_sample (
    ice_DeviceConnectivityDataReaderView _this,
    ice_DeviceConnectivity *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReaderView_take_next_sample (
    ice_DeviceConnectivityDataReaderView _this,
    ice_DeviceConnectivity *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReaderView_read_instance (
    ice_DeviceConnectivityDataReaderView _this,
    DDS_sequence_ice_DeviceConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReaderView_take_instance (
    ice_DeviceConnectivityDataReaderView _this,
    DDS_sequence_ice_DeviceConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReaderView_read_next_instance (
    ice_DeviceConnectivityDataReaderView _this,
    DDS_sequence_ice_DeviceConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReaderView_take_next_instance (
    ice_DeviceConnectivityDataReaderView _this,
    DDS_sequence_ice_DeviceConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReaderView_return_loan (
    ice_DeviceConnectivityDataReaderView _this,
    DDS_sequence_ice_DeviceConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReaderView_read_w_condition (
    ice_DeviceConnectivityDataReaderView _this,
    DDS_sequence_ice_DeviceConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReaderView_take_w_condition (
    ice_DeviceConnectivityDataReaderView _this,
    DDS_sequence_ice_DeviceConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReaderView_read_next_instance_w_condition (
    ice_DeviceConnectivityDataReaderView _this,
    DDS_sequence_ice_DeviceConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReaderView_take_next_instance_w_condition (
    ice_DeviceConnectivityDataReaderView _this,
    DDS_sequence_ice_DeviceConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_DeviceConnectivityDataReaderView_get_key_value (
    ice_DeviceConnectivityDataReaderView _this,
    ice_DeviceConnectivity *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_DeviceConnectivityDataReaderView_lookup_instance (
    ice_DeviceConnectivityDataReaderView _this,
    ice_DeviceConnectivity *key_holder
    );


#define ice_MDSConnectivityTypeSupport DDS_TypeSupport

 ice_MDSConnectivityTypeSupport
ice_MDSConnectivityTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
ice_MDSConnectivityTypeSupport_register_type (
    ice_MDSConnectivityTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
ice_MDSConnectivityTypeSupport_get_type_name (
    ice_MDSConnectivityTypeSupport _this
    );

#ifndef _DDS_sequence_ice_MDSConnectivity_defined
#define _DDS_sequence_ice_MDSConnectivity_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    ice_MDSConnectivity *_buffer;
    DDS_boolean _release;
} DDS_sequence_ice_MDSConnectivity;

 DDS_sequence_ice_MDSConnectivity *DDS_sequence_ice_MDSConnectivity__alloc (void);
 ice_MDSConnectivity *DDS_sequence_ice_MDSConnectivity_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_ice_MDSConnectivity_defined */

#define ice_MDSConnectivityDataWriter DDS_DataWriter

#define ice_MDSConnectivityDataWriter_enable DDS_Entity_enable

#define ice_MDSConnectivityDataWriter_get_status_changes DDS_Entity_get_status_changes

#define ice_MDSConnectivityDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define ice_MDSConnectivityDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define ice_MDSConnectivityDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define ice_MDSConnectivityDataWriter_get_listener DDS_DataWriter_get_listener

#define ice_MDSConnectivityDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define ice_MDSConnectivityDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define ice_MDSConnectivityDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define ice_MDSConnectivityDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define ice_MDSConnectivityDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define ice_MDSConnectivityDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define ice_MDSConnectivityDataWriter_get_publisher DDS_DataWriter_get_publisher

#define ice_MDSConnectivityDataWriter_get_qos DDS_DataWriter_get_qos

#define ice_MDSConnectivityDataWriter_get_topic DDS_DataWriter_get_topic

#define ice_MDSConnectivityDataWriter_set_listener DDS_DataWriter_set_listener

#define ice_MDSConnectivityDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
ice_MDSConnectivityDataWriter_register_instance (
    ice_MDSConnectivityDataWriter _this,
    const ice_MDSConnectivity *instance_data
    );

 DDS_InstanceHandle_t
ice_MDSConnectivityDataWriter_register_instance_w_timestamp (
    ice_MDSConnectivityDataWriter _this,
    const ice_MDSConnectivity *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataWriter_unregister_instance (
    ice_MDSConnectivityDataWriter _this,
    const ice_MDSConnectivity *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataWriter_unregister_instance_w_timestamp (
    ice_MDSConnectivityDataWriter _this,
    const ice_MDSConnectivity *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataWriter_write (
    ice_MDSConnectivityDataWriter _this,
    const ice_MDSConnectivity *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataWriter_write_w_timestamp (
    ice_MDSConnectivityDataWriter _this,
    const ice_MDSConnectivity *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataWriter_dispose (
    ice_MDSConnectivityDataWriter _this,
    const ice_MDSConnectivity *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataWriter_dispose_w_timestamp (
    ice_MDSConnectivityDataWriter _this,
    const ice_MDSConnectivity *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataWriter_writedispose (
    ice_MDSConnectivityDataWriter _this,
    const ice_MDSConnectivity *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataWriter_writedispose_w_timestamp (
    ice_MDSConnectivityDataWriter _this,
    const ice_MDSConnectivity *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataWriter_get_key_value (
    ice_MDSConnectivityDataWriter _this,
    ice_MDSConnectivity *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_MDSConnectivityDataWriter_lookup_instance (
    ice_MDSConnectivityDataWriter _this,
    const ice_MDSConnectivity *key_holder
    );

#define ice_MDSConnectivityDataReader DDS_DataReader

#define ice_MDSConnectivityDataReader_enable DDS_Entity_enable

#define ice_MDSConnectivityDataReader_get_status_changes DDS_Entity_get_status_changes

#define ice_MDSConnectivityDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define ice_MDSConnectivityDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define ice_MDSConnectivityDataReader_create_querycondition DDS_DataReader_create_querycondition

#define ice_MDSConnectivityDataReader_create_readcondition DDS_DataReader_create_readcondition

#define ice_MDSConnectivityDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define ice_MDSConnectivityDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define ice_MDSConnectivityDataReader_get_listener DDS_DataReader_get_listener

#define ice_MDSConnectivityDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define ice_MDSConnectivityDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define ice_MDSConnectivityDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define ice_MDSConnectivityDataReader_get_qos DDS_DataReader_get_qos

#define ice_MDSConnectivityDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define ice_MDSConnectivityDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define ice_MDSConnectivityDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define ice_MDSConnectivityDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define ice_MDSConnectivityDataReader_get_subscriber DDS_DataReader_get_subscriber

#define ice_MDSConnectivityDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define ice_MDSConnectivityDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define ice_MDSConnectivityDataReader_set_listener DDS_DataReader_set_listener

#define ice_MDSConnectivityDataReader_set_qos DDS_DataReader_set_qos

#define ice_MDSConnectivityDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
ice_MDSConnectivityDataReader_read (
    ice_MDSConnectivityDataReader _this,
    DDS_sequence_ice_MDSConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataReader_take (
    ice_MDSConnectivityDataReader _this,
    DDS_sequence_ice_MDSConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataReader_read_w_condition (
    ice_MDSConnectivityDataReader _this,
    DDS_sequence_ice_MDSConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataReader_take_w_condition (
    ice_MDSConnectivityDataReader _this,
    DDS_sequence_ice_MDSConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataReader_read_next_sample (
    ice_MDSConnectivityDataReader _this,
    ice_MDSConnectivity *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataReader_take_next_sample (
    ice_MDSConnectivityDataReader _this,
    ice_MDSConnectivity *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataReader_read_instance (
    ice_MDSConnectivityDataReader _this,
    DDS_sequence_ice_MDSConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataReader_take_instance (
    ice_MDSConnectivityDataReader _this,
    DDS_sequence_ice_MDSConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataReader_read_next_instance (
    ice_MDSConnectivityDataReader _this,
    DDS_sequence_ice_MDSConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataReader_take_next_instance (
    ice_MDSConnectivityDataReader _this,
    DDS_sequence_ice_MDSConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataReader_read_next_instance_w_condition (
    ice_MDSConnectivityDataReader _this,
    DDS_sequence_ice_MDSConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataReader_take_next_instance_w_condition (
    ice_MDSConnectivityDataReader _this,
    DDS_sequence_ice_MDSConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataReader_return_loan (
    ice_MDSConnectivityDataReader _this,
    DDS_sequence_ice_MDSConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataReader_get_key_value (
    ice_MDSConnectivityDataReader _this,
    ice_MDSConnectivity *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_MDSConnectivityDataReader_lookup_instance (
    ice_MDSConnectivityDataReader _this,
    const ice_MDSConnectivity *key_holder
    );

#define ice_MDSConnectivityDataReaderView DDS_DataReaderView

#define ice_MDSConnectivityDataReaderView_enable DDS_Entity_enable

#define ice_MDSConnectivityDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define ice_MDSConnectivityDataReaderView_get_qos DDS_DataReaderView_get_qos

#define ice_MDSConnectivityDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define ice_MDSConnectivityDataReaderView_set_qos DDS_DataReaderView_set_qos

#define ice_MDSConnectivityDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define ice_MDSConnectivityDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define ice_MDSConnectivityDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define ice_MDSConnectivityDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
ice_MDSConnectivityDataReaderView_read (
    ice_MDSConnectivityDataReaderView _this,
    DDS_sequence_ice_MDSConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataReaderView_take (
    ice_MDSConnectivityDataReaderView _this,
    DDS_sequence_ice_MDSConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataReaderView_read_next_sample (
    ice_MDSConnectivityDataReaderView _this,
    ice_MDSConnectivity *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataReaderView_take_next_sample (
    ice_MDSConnectivityDataReaderView _this,
    ice_MDSConnectivity *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataReaderView_read_instance (
    ice_MDSConnectivityDataReaderView _this,
    DDS_sequence_ice_MDSConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataReaderView_take_instance (
    ice_MDSConnectivityDataReaderView _this,
    DDS_sequence_ice_MDSConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataReaderView_read_next_instance (
    ice_MDSConnectivityDataReaderView _this,
    DDS_sequence_ice_MDSConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataReaderView_take_next_instance (
    ice_MDSConnectivityDataReaderView _this,
    DDS_sequence_ice_MDSConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataReaderView_return_loan (
    ice_MDSConnectivityDataReaderView _this,
    DDS_sequence_ice_MDSConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataReaderView_read_w_condition (
    ice_MDSConnectivityDataReaderView _this,
    DDS_sequence_ice_MDSConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataReaderView_take_w_condition (
    ice_MDSConnectivityDataReaderView _this,
    DDS_sequence_ice_MDSConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataReaderView_read_next_instance_w_condition (
    ice_MDSConnectivityDataReaderView _this,
    DDS_sequence_ice_MDSConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataReaderView_take_next_instance_w_condition (
    ice_MDSConnectivityDataReaderView _this,
    DDS_sequence_ice_MDSConnectivity *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_MDSConnectivityDataReaderView_get_key_value (
    ice_MDSConnectivityDataReaderView _this,
    ice_MDSConnectivity *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_MDSConnectivityDataReaderView_lookup_instance (
    ice_MDSConnectivityDataReaderView _this,
    ice_MDSConnectivity *key_holder
    );


#define ice_MDSConnectivityObjectiveTypeSupport DDS_TypeSupport

 ice_MDSConnectivityObjectiveTypeSupport
ice_MDSConnectivityObjectiveTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveTypeSupport_register_type (
    ice_MDSConnectivityObjectiveTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
ice_MDSConnectivityObjectiveTypeSupport_get_type_name (
    ice_MDSConnectivityObjectiveTypeSupport _this
    );

#ifndef _DDS_sequence_ice_MDSConnectivityObjective_defined
#define _DDS_sequence_ice_MDSConnectivityObjective_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    ice_MDSConnectivityObjective *_buffer;
    DDS_boolean _release;
} DDS_sequence_ice_MDSConnectivityObjective;

 DDS_sequence_ice_MDSConnectivityObjective *DDS_sequence_ice_MDSConnectivityObjective__alloc (void);
 ice_MDSConnectivityObjective *DDS_sequence_ice_MDSConnectivityObjective_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_ice_MDSConnectivityObjective_defined */

#define ice_MDSConnectivityObjectiveDataWriter DDS_DataWriter

#define ice_MDSConnectivityObjectiveDataWriter_enable DDS_Entity_enable

#define ice_MDSConnectivityObjectiveDataWriter_get_status_changes DDS_Entity_get_status_changes

#define ice_MDSConnectivityObjectiveDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define ice_MDSConnectivityObjectiveDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define ice_MDSConnectivityObjectiveDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define ice_MDSConnectivityObjectiveDataWriter_get_listener DDS_DataWriter_get_listener

#define ice_MDSConnectivityObjectiveDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define ice_MDSConnectivityObjectiveDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define ice_MDSConnectivityObjectiveDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define ice_MDSConnectivityObjectiveDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define ice_MDSConnectivityObjectiveDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define ice_MDSConnectivityObjectiveDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define ice_MDSConnectivityObjectiveDataWriter_get_publisher DDS_DataWriter_get_publisher

#define ice_MDSConnectivityObjectiveDataWriter_get_qos DDS_DataWriter_get_qos

#define ice_MDSConnectivityObjectiveDataWriter_get_topic DDS_DataWriter_get_topic

#define ice_MDSConnectivityObjectiveDataWriter_set_listener DDS_DataWriter_set_listener

#define ice_MDSConnectivityObjectiveDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
ice_MDSConnectivityObjectiveDataWriter_register_instance (
    ice_MDSConnectivityObjectiveDataWriter _this,
    const ice_MDSConnectivityObjective *instance_data
    );

 DDS_InstanceHandle_t
ice_MDSConnectivityObjectiveDataWriter_register_instance_w_timestamp (
    ice_MDSConnectivityObjectiveDataWriter _this,
    const ice_MDSConnectivityObjective *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataWriter_unregister_instance (
    ice_MDSConnectivityObjectiveDataWriter _this,
    const ice_MDSConnectivityObjective *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataWriter_unregister_instance_w_timestamp (
    ice_MDSConnectivityObjectiveDataWriter _this,
    const ice_MDSConnectivityObjective *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataWriter_write (
    ice_MDSConnectivityObjectiveDataWriter _this,
    const ice_MDSConnectivityObjective *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataWriter_write_w_timestamp (
    ice_MDSConnectivityObjectiveDataWriter _this,
    const ice_MDSConnectivityObjective *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataWriter_dispose (
    ice_MDSConnectivityObjectiveDataWriter _this,
    const ice_MDSConnectivityObjective *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataWriter_dispose_w_timestamp (
    ice_MDSConnectivityObjectiveDataWriter _this,
    const ice_MDSConnectivityObjective *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataWriter_writedispose (
    ice_MDSConnectivityObjectiveDataWriter _this,
    const ice_MDSConnectivityObjective *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataWriter_writedispose_w_timestamp (
    ice_MDSConnectivityObjectiveDataWriter _this,
    const ice_MDSConnectivityObjective *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataWriter_get_key_value (
    ice_MDSConnectivityObjectiveDataWriter _this,
    ice_MDSConnectivityObjective *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_MDSConnectivityObjectiveDataWriter_lookup_instance (
    ice_MDSConnectivityObjectiveDataWriter _this,
    const ice_MDSConnectivityObjective *key_holder
    );

#define ice_MDSConnectivityObjectiveDataReader DDS_DataReader

#define ice_MDSConnectivityObjectiveDataReader_enable DDS_Entity_enable

#define ice_MDSConnectivityObjectiveDataReader_get_status_changes DDS_Entity_get_status_changes

#define ice_MDSConnectivityObjectiveDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define ice_MDSConnectivityObjectiveDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define ice_MDSConnectivityObjectiveDataReader_create_querycondition DDS_DataReader_create_querycondition

#define ice_MDSConnectivityObjectiveDataReader_create_readcondition DDS_DataReader_create_readcondition

#define ice_MDSConnectivityObjectiveDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define ice_MDSConnectivityObjectiveDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define ice_MDSConnectivityObjectiveDataReader_get_listener DDS_DataReader_get_listener

#define ice_MDSConnectivityObjectiveDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define ice_MDSConnectivityObjectiveDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define ice_MDSConnectivityObjectiveDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define ice_MDSConnectivityObjectiveDataReader_get_qos DDS_DataReader_get_qos

#define ice_MDSConnectivityObjectiveDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define ice_MDSConnectivityObjectiveDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define ice_MDSConnectivityObjectiveDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define ice_MDSConnectivityObjectiveDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define ice_MDSConnectivityObjectiveDataReader_get_subscriber DDS_DataReader_get_subscriber

#define ice_MDSConnectivityObjectiveDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define ice_MDSConnectivityObjectiveDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define ice_MDSConnectivityObjectiveDataReader_set_listener DDS_DataReader_set_listener

#define ice_MDSConnectivityObjectiveDataReader_set_qos DDS_DataReader_set_qos

#define ice_MDSConnectivityObjectiveDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReader_read (
    ice_MDSConnectivityObjectiveDataReader _this,
    DDS_sequence_ice_MDSConnectivityObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReader_take (
    ice_MDSConnectivityObjectiveDataReader _this,
    DDS_sequence_ice_MDSConnectivityObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReader_read_w_condition (
    ice_MDSConnectivityObjectiveDataReader _this,
    DDS_sequence_ice_MDSConnectivityObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReader_take_w_condition (
    ice_MDSConnectivityObjectiveDataReader _this,
    DDS_sequence_ice_MDSConnectivityObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReader_read_next_sample (
    ice_MDSConnectivityObjectiveDataReader _this,
    ice_MDSConnectivityObjective *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReader_take_next_sample (
    ice_MDSConnectivityObjectiveDataReader _this,
    ice_MDSConnectivityObjective *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReader_read_instance (
    ice_MDSConnectivityObjectiveDataReader _this,
    DDS_sequence_ice_MDSConnectivityObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReader_take_instance (
    ice_MDSConnectivityObjectiveDataReader _this,
    DDS_sequence_ice_MDSConnectivityObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReader_read_next_instance (
    ice_MDSConnectivityObjectiveDataReader _this,
    DDS_sequence_ice_MDSConnectivityObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReader_take_next_instance (
    ice_MDSConnectivityObjectiveDataReader _this,
    DDS_sequence_ice_MDSConnectivityObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReader_read_next_instance_w_condition (
    ice_MDSConnectivityObjectiveDataReader _this,
    DDS_sequence_ice_MDSConnectivityObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReader_take_next_instance_w_condition (
    ice_MDSConnectivityObjectiveDataReader _this,
    DDS_sequence_ice_MDSConnectivityObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReader_return_loan (
    ice_MDSConnectivityObjectiveDataReader _this,
    DDS_sequence_ice_MDSConnectivityObjective *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReader_get_key_value (
    ice_MDSConnectivityObjectiveDataReader _this,
    ice_MDSConnectivityObjective *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_MDSConnectivityObjectiveDataReader_lookup_instance (
    ice_MDSConnectivityObjectiveDataReader _this,
    const ice_MDSConnectivityObjective *key_holder
    );

#define ice_MDSConnectivityObjectiveDataReaderView DDS_DataReaderView

#define ice_MDSConnectivityObjectiveDataReaderView_enable DDS_Entity_enable

#define ice_MDSConnectivityObjectiveDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define ice_MDSConnectivityObjectiveDataReaderView_get_qos DDS_DataReaderView_get_qos

#define ice_MDSConnectivityObjectiveDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define ice_MDSConnectivityObjectiveDataReaderView_set_qos DDS_DataReaderView_set_qos

#define ice_MDSConnectivityObjectiveDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define ice_MDSConnectivityObjectiveDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define ice_MDSConnectivityObjectiveDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define ice_MDSConnectivityObjectiveDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReaderView_read (
    ice_MDSConnectivityObjectiveDataReaderView _this,
    DDS_sequence_ice_MDSConnectivityObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReaderView_take (
    ice_MDSConnectivityObjectiveDataReaderView _this,
    DDS_sequence_ice_MDSConnectivityObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReaderView_read_next_sample (
    ice_MDSConnectivityObjectiveDataReaderView _this,
    ice_MDSConnectivityObjective *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReaderView_take_next_sample (
    ice_MDSConnectivityObjectiveDataReaderView _this,
    ice_MDSConnectivityObjective *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReaderView_read_instance (
    ice_MDSConnectivityObjectiveDataReaderView _this,
    DDS_sequence_ice_MDSConnectivityObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReaderView_take_instance (
    ice_MDSConnectivityObjectiveDataReaderView _this,
    DDS_sequence_ice_MDSConnectivityObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReaderView_read_next_instance (
    ice_MDSConnectivityObjectiveDataReaderView _this,
    DDS_sequence_ice_MDSConnectivityObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReaderView_take_next_instance (
    ice_MDSConnectivityObjectiveDataReaderView _this,
    DDS_sequence_ice_MDSConnectivityObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReaderView_return_loan (
    ice_MDSConnectivityObjectiveDataReaderView _this,
    DDS_sequence_ice_MDSConnectivityObjective *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReaderView_read_w_condition (
    ice_MDSConnectivityObjectiveDataReaderView _this,
    DDS_sequence_ice_MDSConnectivityObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReaderView_take_w_condition (
    ice_MDSConnectivityObjectiveDataReaderView _this,
    DDS_sequence_ice_MDSConnectivityObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReaderView_read_next_instance_w_condition (
    ice_MDSConnectivityObjectiveDataReaderView _this,
    DDS_sequence_ice_MDSConnectivityObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReaderView_take_next_instance_w_condition (
    ice_MDSConnectivityObjectiveDataReaderView _this,
    DDS_sequence_ice_MDSConnectivityObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_MDSConnectivityObjectiveDataReaderView_get_key_value (
    ice_MDSConnectivityObjectiveDataReaderView _this,
    ice_MDSConnectivityObjective *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_MDSConnectivityObjectiveDataReaderView_lookup_instance (
    ice_MDSConnectivityObjectiveDataReaderView _this,
    ice_MDSConnectivityObjective *key_holder
    );


#define ice_NumericTypeSupport DDS_TypeSupport

 ice_NumericTypeSupport
ice_NumericTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
ice_NumericTypeSupport_register_type (
    ice_NumericTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
ice_NumericTypeSupport_get_type_name (
    ice_NumericTypeSupport _this
    );

#ifndef _DDS_sequence_ice_Numeric_defined
#define _DDS_sequence_ice_Numeric_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    ice_Numeric *_buffer;
    DDS_boolean _release;
} DDS_sequence_ice_Numeric;

 DDS_sequence_ice_Numeric *DDS_sequence_ice_Numeric__alloc (void);
 ice_Numeric *DDS_sequence_ice_Numeric_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_ice_Numeric_defined */

#define ice_NumericDataWriter DDS_DataWriter

#define ice_NumericDataWriter_enable DDS_Entity_enable

#define ice_NumericDataWriter_get_status_changes DDS_Entity_get_status_changes

#define ice_NumericDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define ice_NumericDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define ice_NumericDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define ice_NumericDataWriter_get_listener DDS_DataWriter_get_listener

#define ice_NumericDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define ice_NumericDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define ice_NumericDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define ice_NumericDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define ice_NumericDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define ice_NumericDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define ice_NumericDataWriter_get_publisher DDS_DataWriter_get_publisher

#define ice_NumericDataWriter_get_qos DDS_DataWriter_get_qos

#define ice_NumericDataWriter_get_topic DDS_DataWriter_get_topic

#define ice_NumericDataWriter_set_listener DDS_DataWriter_set_listener

#define ice_NumericDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
ice_NumericDataWriter_register_instance (
    ice_NumericDataWriter _this,
    const ice_Numeric *instance_data
    );

 DDS_InstanceHandle_t
ice_NumericDataWriter_register_instance_w_timestamp (
    ice_NumericDataWriter _this,
    const ice_Numeric *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_NumericDataWriter_unregister_instance (
    ice_NumericDataWriter _this,
    const ice_Numeric *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_NumericDataWriter_unregister_instance_w_timestamp (
    ice_NumericDataWriter _this,
    const ice_Numeric *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_NumericDataWriter_write (
    ice_NumericDataWriter _this,
    const ice_Numeric *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_NumericDataWriter_write_w_timestamp (
    ice_NumericDataWriter _this,
    const ice_Numeric *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_NumericDataWriter_dispose (
    ice_NumericDataWriter _this,
    const ice_Numeric *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_NumericDataWriter_dispose_w_timestamp (
    ice_NumericDataWriter _this,
    const ice_Numeric *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_NumericDataWriter_writedispose (
    ice_NumericDataWriter _this,
    const ice_Numeric *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_NumericDataWriter_writedispose_w_timestamp (
    ice_NumericDataWriter _this,
    const ice_Numeric *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_NumericDataWriter_get_key_value (
    ice_NumericDataWriter _this,
    ice_Numeric *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_NumericDataWriter_lookup_instance (
    ice_NumericDataWriter _this,
    const ice_Numeric *key_holder
    );

#define ice_NumericDataReader DDS_DataReader

#define ice_NumericDataReader_enable DDS_Entity_enable

#define ice_NumericDataReader_get_status_changes DDS_Entity_get_status_changes

#define ice_NumericDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define ice_NumericDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define ice_NumericDataReader_create_querycondition DDS_DataReader_create_querycondition

#define ice_NumericDataReader_create_readcondition DDS_DataReader_create_readcondition

#define ice_NumericDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define ice_NumericDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define ice_NumericDataReader_get_listener DDS_DataReader_get_listener

#define ice_NumericDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define ice_NumericDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define ice_NumericDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define ice_NumericDataReader_get_qos DDS_DataReader_get_qos

#define ice_NumericDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define ice_NumericDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define ice_NumericDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define ice_NumericDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define ice_NumericDataReader_get_subscriber DDS_DataReader_get_subscriber

#define ice_NumericDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define ice_NumericDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define ice_NumericDataReader_set_listener DDS_DataReader_set_listener

#define ice_NumericDataReader_set_qos DDS_DataReader_set_qos

#define ice_NumericDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
ice_NumericDataReader_read (
    ice_NumericDataReader _this,
    DDS_sequence_ice_Numeric *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_NumericDataReader_take (
    ice_NumericDataReader _this,
    DDS_sequence_ice_Numeric *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_NumericDataReader_read_w_condition (
    ice_NumericDataReader _this,
    DDS_sequence_ice_Numeric *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_NumericDataReader_take_w_condition (
    ice_NumericDataReader _this,
    DDS_sequence_ice_Numeric *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_NumericDataReader_read_next_sample (
    ice_NumericDataReader _this,
    ice_Numeric *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_NumericDataReader_take_next_sample (
    ice_NumericDataReader _this,
    ice_Numeric *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_NumericDataReader_read_instance (
    ice_NumericDataReader _this,
    DDS_sequence_ice_Numeric *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_NumericDataReader_take_instance (
    ice_NumericDataReader _this,
    DDS_sequence_ice_Numeric *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_NumericDataReader_read_next_instance (
    ice_NumericDataReader _this,
    DDS_sequence_ice_Numeric *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_NumericDataReader_take_next_instance (
    ice_NumericDataReader _this,
    DDS_sequence_ice_Numeric *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_NumericDataReader_read_next_instance_w_condition (
    ice_NumericDataReader _this,
    DDS_sequence_ice_Numeric *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_NumericDataReader_take_next_instance_w_condition (
    ice_NumericDataReader _this,
    DDS_sequence_ice_Numeric *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_NumericDataReader_return_loan (
    ice_NumericDataReader _this,
    DDS_sequence_ice_Numeric *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_NumericDataReader_get_key_value (
    ice_NumericDataReader _this,
    ice_Numeric *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_NumericDataReader_lookup_instance (
    ice_NumericDataReader _this,
    const ice_Numeric *key_holder
    );

#define ice_NumericDataReaderView DDS_DataReaderView

#define ice_NumericDataReaderView_enable DDS_Entity_enable

#define ice_NumericDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define ice_NumericDataReaderView_get_qos DDS_DataReaderView_get_qos

#define ice_NumericDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define ice_NumericDataReaderView_set_qos DDS_DataReaderView_set_qos

#define ice_NumericDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define ice_NumericDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define ice_NumericDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define ice_NumericDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
ice_NumericDataReaderView_read (
    ice_NumericDataReaderView _this,
    DDS_sequence_ice_Numeric *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_NumericDataReaderView_take (
    ice_NumericDataReaderView _this,
    DDS_sequence_ice_Numeric *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_NumericDataReaderView_read_next_sample (
    ice_NumericDataReaderView _this,
    ice_Numeric *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_NumericDataReaderView_take_next_sample (
    ice_NumericDataReaderView _this,
    ice_Numeric *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_NumericDataReaderView_read_instance (
    ice_NumericDataReaderView _this,
    DDS_sequence_ice_Numeric *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_NumericDataReaderView_take_instance (
    ice_NumericDataReaderView _this,
    DDS_sequence_ice_Numeric *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_NumericDataReaderView_read_next_instance (
    ice_NumericDataReaderView _this,
    DDS_sequence_ice_Numeric *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_NumericDataReaderView_take_next_instance (
    ice_NumericDataReaderView _this,
    DDS_sequence_ice_Numeric *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_NumericDataReaderView_return_loan (
    ice_NumericDataReaderView _this,
    DDS_sequence_ice_Numeric *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_NumericDataReaderView_read_w_condition (
    ice_NumericDataReaderView _this,
    DDS_sequence_ice_Numeric *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_NumericDataReaderView_take_w_condition (
    ice_NumericDataReaderView _this,
    DDS_sequence_ice_Numeric *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_NumericDataReaderView_read_next_instance_w_condition (
    ice_NumericDataReaderView _this,
    DDS_sequence_ice_Numeric *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_NumericDataReaderView_take_next_instance_w_condition (
    ice_NumericDataReaderView _this,
    DDS_sequence_ice_Numeric *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_NumericDataReaderView_get_key_value (
    ice_NumericDataReaderView _this,
    ice_Numeric *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_NumericDataReaderView_lookup_instance (
    ice_NumericDataReaderView _this,
    ice_Numeric *key_holder
    );


#define ice_SampleArrayTypeSupport DDS_TypeSupport

 ice_SampleArrayTypeSupport
ice_SampleArrayTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
ice_SampleArrayTypeSupport_register_type (
    ice_SampleArrayTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
ice_SampleArrayTypeSupport_get_type_name (
    ice_SampleArrayTypeSupport _this
    );

#ifndef _DDS_sequence_ice_SampleArray_defined
#define _DDS_sequence_ice_SampleArray_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    ice_SampleArray *_buffer;
    DDS_boolean _release;
} DDS_sequence_ice_SampleArray;

 DDS_sequence_ice_SampleArray *DDS_sequence_ice_SampleArray__alloc (void);
 ice_SampleArray *DDS_sequence_ice_SampleArray_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_ice_SampleArray_defined */

#define ice_SampleArrayDataWriter DDS_DataWriter

#define ice_SampleArrayDataWriter_enable DDS_Entity_enable

#define ice_SampleArrayDataWriter_get_status_changes DDS_Entity_get_status_changes

#define ice_SampleArrayDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define ice_SampleArrayDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define ice_SampleArrayDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define ice_SampleArrayDataWriter_get_listener DDS_DataWriter_get_listener

#define ice_SampleArrayDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define ice_SampleArrayDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define ice_SampleArrayDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define ice_SampleArrayDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define ice_SampleArrayDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define ice_SampleArrayDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define ice_SampleArrayDataWriter_get_publisher DDS_DataWriter_get_publisher

#define ice_SampleArrayDataWriter_get_qos DDS_DataWriter_get_qos

#define ice_SampleArrayDataWriter_get_topic DDS_DataWriter_get_topic

#define ice_SampleArrayDataWriter_set_listener DDS_DataWriter_set_listener

#define ice_SampleArrayDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
ice_SampleArrayDataWriter_register_instance (
    ice_SampleArrayDataWriter _this,
    const ice_SampleArray *instance_data
    );

 DDS_InstanceHandle_t
ice_SampleArrayDataWriter_register_instance_w_timestamp (
    ice_SampleArrayDataWriter _this,
    const ice_SampleArray *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_SampleArrayDataWriter_unregister_instance (
    ice_SampleArrayDataWriter _this,
    const ice_SampleArray *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_SampleArrayDataWriter_unregister_instance_w_timestamp (
    ice_SampleArrayDataWriter _this,
    const ice_SampleArray *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_SampleArrayDataWriter_write (
    ice_SampleArrayDataWriter _this,
    const ice_SampleArray *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_SampleArrayDataWriter_write_w_timestamp (
    ice_SampleArrayDataWriter _this,
    const ice_SampleArray *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_SampleArrayDataWriter_dispose (
    ice_SampleArrayDataWriter _this,
    const ice_SampleArray *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_SampleArrayDataWriter_dispose_w_timestamp (
    ice_SampleArrayDataWriter _this,
    const ice_SampleArray *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_SampleArrayDataWriter_writedispose (
    ice_SampleArrayDataWriter _this,
    const ice_SampleArray *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_SampleArrayDataWriter_writedispose_w_timestamp (
    ice_SampleArrayDataWriter _this,
    const ice_SampleArray *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_SampleArrayDataWriter_get_key_value (
    ice_SampleArrayDataWriter _this,
    ice_SampleArray *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_SampleArrayDataWriter_lookup_instance (
    ice_SampleArrayDataWriter _this,
    const ice_SampleArray *key_holder
    );

#define ice_SampleArrayDataReader DDS_DataReader

#define ice_SampleArrayDataReader_enable DDS_Entity_enable

#define ice_SampleArrayDataReader_get_status_changes DDS_Entity_get_status_changes

#define ice_SampleArrayDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define ice_SampleArrayDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define ice_SampleArrayDataReader_create_querycondition DDS_DataReader_create_querycondition

#define ice_SampleArrayDataReader_create_readcondition DDS_DataReader_create_readcondition

#define ice_SampleArrayDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define ice_SampleArrayDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define ice_SampleArrayDataReader_get_listener DDS_DataReader_get_listener

#define ice_SampleArrayDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define ice_SampleArrayDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define ice_SampleArrayDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define ice_SampleArrayDataReader_get_qos DDS_DataReader_get_qos

#define ice_SampleArrayDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define ice_SampleArrayDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define ice_SampleArrayDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define ice_SampleArrayDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define ice_SampleArrayDataReader_get_subscriber DDS_DataReader_get_subscriber

#define ice_SampleArrayDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define ice_SampleArrayDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define ice_SampleArrayDataReader_set_listener DDS_DataReader_set_listener

#define ice_SampleArrayDataReader_set_qos DDS_DataReader_set_qos

#define ice_SampleArrayDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
ice_SampleArrayDataReader_read (
    ice_SampleArrayDataReader _this,
    DDS_sequence_ice_SampleArray *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_SampleArrayDataReader_take (
    ice_SampleArrayDataReader _this,
    DDS_sequence_ice_SampleArray *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_SampleArrayDataReader_read_w_condition (
    ice_SampleArrayDataReader _this,
    DDS_sequence_ice_SampleArray *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_SampleArrayDataReader_take_w_condition (
    ice_SampleArrayDataReader _this,
    DDS_sequence_ice_SampleArray *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_SampleArrayDataReader_read_next_sample (
    ice_SampleArrayDataReader _this,
    ice_SampleArray *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_SampleArrayDataReader_take_next_sample (
    ice_SampleArrayDataReader _this,
    ice_SampleArray *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_SampleArrayDataReader_read_instance (
    ice_SampleArrayDataReader _this,
    DDS_sequence_ice_SampleArray *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_SampleArrayDataReader_take_instance (
    ice_SampleArrayDataReader _this,
    DDS_sequence_ice_SampleArray *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_SampleArrayDataReader_read_next_instance (
    ice_SampleArrayDataReader _this,
    DDS_sequence_ice_SampleArray *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_SampleArrayDataReader_take_next_instance (
    ice_SampleArrayDataReader _this,
    DDS_sequence_ice_SampleArray *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_SampleArrayDataReader_read_next_instance_w_condition (
    ice_SampleArrayDataReader _this,
    DDS_sequence_ice_SampleArray *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_SampleArrayDataReader_take_next_instance_w_condition (
    ice_SampleArrayDataReader _this,
    DDS_sequence_ice_SampleArray *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_SampleArrayDataReader_return_loan (
    ice_SampleArrayDataReader _this,
    DDS_sequence_ice_SampleArray *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_SampleArrayDataReader_get_key_value (
    ice_SampleArrayDataReader _this,
    ice_SampleArray *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_SampleArrayDataReader_lookup_instance (
    ice_SampleArrayDataReader _this,
    const ice_SampleArray *key_holder
    );

#define ice_SampleArrayDataReaderView DDS_DataReaderView

#define ice_SampleArrayDataReaderView_enable DDS_Entity_enable

#define ice_SampleArrayDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define ice_SampleArrayDataReaderView_get_qos DDS_DataReaderView_get_qos

#define ice_SampleArrayDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define ice_SampleArrayDataReaderView_set_qos DDS_DataReaderView_set_qos

#define ice_SampleArrayDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define ice_SampleArrayDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define ice_SampleArrayDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define ice_SampleArrayDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
ice_SampleArrayDataReaderView_read (
    ice_SampleArrayDataReaderView _this,
    DDS_sequence_ice_SampleArray *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_SampleArrayDataReaderView_take (
    ice_SampleArrayDataReaderView _this,
    DDS_sequence_ice_SampleArray *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_SampleArrayDataReaderView_read_next_sample (
    ice_SampleArrayDataReaderView _this,
    ice_SampleArray *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_SampleArrayDataReaderView_take_next_sample (
    ice_SampleArrayDataReaderView _this,
    ice_SampleArray *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_SampleArrayDataReaderView_read_instance (
    ice_SampleArrayDataReaderView _this,
    DDS_sequence_ice_SampleArray *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_SampleArrayDataReaderView_take_instance (
    ice_SampleArrayDataReaderView _this,
    DDS_sequence_ice_SampleArray *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_SampleArrayDataReaderView_read_next_instance (
    ice_SampleArrayDataReaderView _this,
    DDS_sequence_ice_SampleArray *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_SampleArrayDataReaderView_take_next_instance (
    ice_SampleArrayDataReaderView _this,
    DDS_sequence_ice_SampleArray *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_SampleArrayDataReaderView_return_loan (
    ice_SampleArrayDataReaderView _this,
    DDS_sequence_ice_SampleArray *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_SampleArrayDataReaderView_read_w_condition (
    ice_SampleArrayDataReaderView _this,
    DDS_sequence_ice_SampleArray *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_SampleArrayDataReaderView_take_w_condition (
    ice_SampleArrayDataReaderView _this,
    DDS_sequence_ice_SampleArray *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_SampleArrayDataReaderView_read_next_instance_w_condition (
    ice_SampleArrayDataReaderView _this,
    DDS_sequence_ice_SampleArray *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_SampleArrayDataReaderView_take_next_instance_w_condition (
    ice_SampleArrayDataReaderView _this,
    DDS_sequence_ice_SampleArray *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_SampleArrayDataReaderView_get_key_value (
    ice_SampleArrayDataReaderView _this,
    ice_SampleArray *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_SampleArrayDataReaderView_lookup_instance (
    ice_SampleArrayDataReaderView _this,
    ice_SampleArray *key_holder
    );


#define ice_InfusionObjectiveTypeSupport DDS_TypeSupport

 ice_InfusionObjectiveTypeSupport
ice_InfusionObjectiveTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveTypeSupport_register_type (
    ice_InfusionObjectiveTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
ice_InfusionObjectiveTypeSupport_get_type_name (
    ice_InfusionObjectiveTypeSupport _this
    );

#ifndef _DDS_sequence_ice_InfusionObjective_defined
#define _DDS_sequence_ice_InfusionObjective_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    ice_InfusionObjective *_buffer;
    DDS_boolean _release;
} DDS_sequence_ice_InfusionObjective;

 DDS_sequence_ice_InfusionObjective *DDS_sequence_ice_InfusionObjective__alloc (void);
 ice_InfusionObjective *DDS_sequence_ice_InfusionObjective_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_ice_InfusionObjective_defined */

#define ice_InfusionObjectiveDataWriter DDS_DataWriter

#define ice_InfusionObjectiveDataWriter_enable DDS_Entity_enable

#define ice_InfusionObjectiveDataWriter_get_status_changes DDS_Entity_get_status_changes

#define ice_InfusionObjectiveDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define ice_InfusionObjectiveDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define ice_InfusionObjectiveDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define ice_InfusionObjectiveDataWriter_get_listener DDS_DataWriter_get_listener

#define ice_InfusionObjectiveDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define ice_InfusionObjectiveDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define ice_InfusionObjectiveDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define ice_InfusionObjectiveDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define ice_InfusionObjectiveDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define ice_InfusionObjectiveDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define ice_InfusionObjectiveDataWriter_get_publisher DDS_DataWriter_get_publisher

#define ice_InfusionObjectiveDataWriter_get_qos DDS_DataWriter_get_qos

#define ice_InfusionObjectiveDataWriter_get_topic DDS_DataWriter_get_topic

#define ice_InfusionObjectiveDataWriter_set_listener DDS_DataWriter_set_listener

#define ice_InfusionObjectiveDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
ice_InfusionObjectiveDataWriter_register_instance (
    ice_InfusionObjectiveDataWriter _this,
    const ice_InfusionObjective *instance_data
    );

 DDS_InstanceHandle_t
ice_InfusionObjectiveDataWriter_register_instance_w_timestamp (
    ice_InfusionObjectiveDataWriter _this,
    const ice_InfusionObjective *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataWriter_unregister_instance (
    ice_InfusionObjectiveDataWriter _this,
    const ice_InfusionObjective *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataWriter_unregister_instance_w_timestamp (
    ice_InfusionObjectiveDataWriter _this,
    const ice_InfusionObjective *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataWriter_write (
    ice_InfusionObjectiveDataWriter _this,
    const ice_InfusionObjective *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataWriter_write_w_timestamp (
    ice_InfusionObjectiveDataWriter _this,
    const ice_InfusionObjective *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataWriter_dispose (
    ice_InfusionObjectiveDataWriter _this,
    const ice_InfusionObjective *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataWriter_dispose_w_timestamp (
    ice_InfusionObjectiveDataWriter _this,
    const ice_InfusionObjective *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataWriter_writedispose (
    ice_InfusionObjectiveDataWriter _this,
    const ice_InfusionObjective *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataWriter_writedispose_w_timestamp (
    ice_InfusionObjectiveDataWriter _this,
    const ice_InfusionObjective *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataWriter_get_key_value (
    ice_InfusionObjectiveDataWriter _this,
    ice_InfusionObjective *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_InfusionObjectiveDataWriter_lookup_instance (
    ice_InfusionObjectiveDataWriter _this,
    const ice_InfusionObjective *key_holder
    );

#define ice_InfusionObjectiveDataReader DDS_DataReader

#define ice_InfusionObjectiveDataReader_enable DDS_Entity_enable

#define ice_InfusionObjectiveDataReader_get_status_changes DDS_Entity_get_status_changes

#define ice_InfusionObjectiveDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define ice_InfusionObjectiveDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define ice_InfusionObjectiveDataReader_create_querycondition DDS_DataReader_create_querycondition

#define ice_InfusionObjectiveDataReader_create_readcondition DDS_DataReader_create_readcondition

#define ice_InfusionObjectiveDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define ice_InfusionObjectiveDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define ice_InfusionObjectiveDataReader_get_listener DDS_DataReader_get_listener

#define ice_InfusionObjectiveDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define ice_InfusionObjectiveDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define ice_InfusionObjectiveDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define ice_InfusionObjectiveDataReader_get_qos DDS_DataReader_get_qos

#define ice_InfusionObjectiveDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define ice_InfusionObjectiveDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define ice_InfusionObjectiveDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define ice_InfusionObjectiveDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define ice_InfusionObjectiveDataReader_get_subscriber DDS_DataReader_get_subscriber

#define ice_InfusionObjectiveDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define ice_InfusionObjectiveDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define ice_InfusionObjectiveDataReader_set_listener DDS_DataReader_set_listener

#define ice_InfusionObjectiveDataReader_set_qos DDS_DataReader_set_qos

#define ice_InfusionObjectiveDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReader_read (
    ice_InfusionObjectiveDataReader _this,
    DDS_sequence_ice_InfusionObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReader_take (
    ice_InfusionObjectiveDataReader _this,
    DDS_sequence_ice_InfusionObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReader_read_w_condition (
    ice_InfusionObjectiveDataReader _this,
    DDS_sequence_ice_InfusionObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReader_take_w_condition (
    ice_InfusionObjectiveDataReader _this,
    DDS_sequence_ice_InfusionObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReader_read_next_sample (
    ice_InfusionObjectiveDataReader _this,
    ice_InfusionObjective *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReader_take_next_sample (
    ice_InfusionObjectiveDataReader _this,
    ice_InfusionObjective *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReader_read_instance (
    ice_InfusionObjectiveDataReader _this,
    DDS_sequence_ice_InfusionObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReader_take_instance (
    ice_InfusionObjectiveDataReader _this,
    DDS_sequence_ice_InfusionObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReader_read_next_instance (
    ice_InfusionObjectiveDataReader _this,
    DDS_sequence_ice_InfusionObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReader_take_next_instance (
    ice_InfusionObjectiveDataReader _this,
    DDS_sequence_ice_InfusionObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReader_read_next_instance_w_condition (
    ice_InfusionObjectiveDataReader _this,
    DDS_sequence_ice_InfusionObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReader_take_next_instance_w_condition (
    ice_InfusionObjectiveDataReader _this,
    DDS_sequence_ice_InfusionObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReader_return_loan (
    ice_InfusionObjectiveDataReader _this,
    DDS_sequence_ice_InfusionObjective *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReader_get_key_value (
    ice_InfusionObjectiveDataReader _this,
    ice_InfusionObjective *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_InfusionObjectiveDataReader_lookup_instance (
    ice_InfusionObjectiveDataReader _this,
    const ice_InfusionObjective *key_holder
    );

#define ice_InfusionObjectiveDataReaderView DDS_DataReaderView

#define ice_InfusionObjectiveDataReaderView_enable DDS_Entity_enable

#define ice_InfusionObjectiveDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define ice_InfusionObjectiveDataReaderView_get_qos DDS_DataReaderView_get_qos

#define ice_InfusionObjectiveDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define ice_InfusionObjectiveDataReaderView_set_qos DDS_DataReaderView_set_qos

#define ice_InfusionObjectiveDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define ice_InfusionObjectiveDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define ice_InfusionObjectiveDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define ice_InfusionObjectiveDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReaderView_read (
    ice_InfusionObjectiveDataReaderView _this,
    DDS_sequence_ice_InfusionObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReaderView_take (
    ice_InfusionObjectiveDataReaderView _this,
    DDS_sequence_ice_InfusionObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReaderView_read_next_sample (
    ice_InfusionObjectiveDataReaderView _this,
    ice_InfusionObjective *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReaderView_take_next_sample (
    ice_InfusionObjectiveDataReaderView _this,
    ice_InfusionObjective *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReaderView_read_instance (
    ice_InfusionObjectiveDataReaderView _this,
    DDS_sequence_ice_InfusionObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReaderView_take_instance (
    ice_InfusionObjectiveDataReaderView _this,
    DDS_sequence_ice_InfusionObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReaderView_read_next_instance (
    ice_InfusionObjectiveDataReaderView _this,
    DDS_sequence_ice_InfusionObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReaderView_take_next_instance (
    ice_InfusionObjectiveDataReaderView _this,
    DDS_sequence_ice_InfusionObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReaderView_return_loan (
    ice_InfusionObjectiveDataReaderView _this,
    DDS_sequence_ice_InfusionObjective *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReaderView_read_w_condition (
    ice_InfusionObjectiveDataReaderView _this,
    DDS_sequence_ice_InfusionObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReaderView_take_w_condition (
    ice_InfusionObjectiveDataReaderView _this,
    DDS_sequence_ice_InfusionObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReaderView_read_next_instance_w_condition (
    ice_InfusionObjectiveDataReaderView _this,
    DDS_sequence_ice_InfusionObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReaderView_take_next_instance_w_condition (
    ice_InfusionObjectiveDataReaderView _this,
    DDS_sequence_ice_InfusionObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_InfusionObjectiveDataReaderView_get_key_value (
    ice_InfusionObjectiveDataReaderView _this,
    ice_InfusionObjective *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_InfusionObjectiveDataReaderView_lookup_instance (
    ice_InfusionObjectiveDataReaderView _this,
    ice_InfusionObjective *key_holder
    );


#define ice_InfusionStatusTypeSupport DDS_TypeSupport

 ice_InfusionStatusTypeSupport
ice_InfusionStatusTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
ice_InfusionStatusTypeSupport_register_type (
    ice_InfusionStatusTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
ice_InfusionStatusTypeSupport_get_type_name (
    ice_InfusionStatusTypeSupport _this
    );

#ifndef _DDS_sequence_ice_InfusionStatus_defined
#define _DDS_sequence_ice_InfusionStatus_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    ice_InfusionStatus *_buffer;
    DDS_boolean _release;
} DDS_sequence_ice_InfusionStatus;

 DDS_sequence_ice_InfusionStatus *DDS_sequence_ice_InfusionStatus__alloc (void);
 ice_InfusionStatus *DDS_sequence_ice_InfusionStatus_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_ice_InfusionStatus_defined */

#define ice_InfusionStatusDataWriter DDS_DataWriter

#define ice_InfusionStatusDataWriter_enable DDS_Entity_enable

#define ice_InfusionStatusDataWriter_get_status_changes DDS_Entity_get_status_changes

#define ice_InfusionStatusDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define ice_InfusionStatusDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define ice_InfusionStatusDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define ice_InfusionStatusDataWriter_get_listener DDS_DataWriter_get_listener

#define ice_InfusionStatusDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define ice_InfusionStatusDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define ice_InfusionStatusDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define ice_InfusionStatusDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define ice_InfusionStatusDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define ice_InfusionStatusDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define ice_InfusionStatusDataWriter_get_publisher DDS_DataWriter_get_publisher

#define ice_InfusionStatusDataWriter_get_qos DDS_DataWriter_get_qos

#define ice_InfusionStatusDataWriter_get_topic DDS_DataWriter_get_topic

#define ice_InfusionStatusDataWriter_set_listener DDS_DataWriter_set_listener

#define ice_InfusionStatusDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
ice_InfusionStatusDataWriter_register_instance (
    ice_InfusionStatusDataWriter _this,
    const ice_InfusionStatus *instance_data
    );

 DDS_InstanceHandle_t
ice_InfusionStatusDataWriter_register_instance_w_timestamp (
    ice_InfusionStatusDataWriter _this,
    const ice_InfusionStatus *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataWriter_unregister_instance (
    ice_InfusionStatusDataWriter _this,
    const ice_InfusionStatus *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataWriter_unregister_instance_w_timestamp (
    ice_InfusionStatusDataWriter _this,
    const ice_InfusionStatus *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataWriter_write (
    ice_InfusionStatusDataWriter _this,
    const ice_InfusionStatus *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataWriter_write_w_timestamp (
    ice_InfusionStatusDataWriter _this,
    const ice_InfusionStatus *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataWriter_dispose (
    ice_InfusionStatusDataWriter _this,
    const ice_InfusionStatus *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataWriter_dispose_w_timestamp (
    ice_InfusionStatusDataWriter _this,
    const ice_InfusionStatus *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataWriter_writedispose (
    ice_InfusionStatusDataWriter _this,
    const ice_InfusionStatus *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataWriter_writedispose_w_timestamp (
    ice_InfusionStatusDataWriter _this,
    const ice_InfusionStatus *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataWriter_get_key_value (
    ice_InfusionStatusDataWriter _this,
    ice_InfusionStatus *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_InfusionStatusDataWriter_lookup_instance (
    ice_InfusionStatusDataWriter _this,
    const ice_InfusionStatus *key_holder
    );

#define ice_InfusionStatusDataReader DDS_DataReader

#define ice_InfusionStatusDataReader_enable DDS_Entity_enable

#define ice_InfusionStatusDataReader_get_status_changes DDS_Entity_get_status_changes

#define ice_InfusionStatusDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define ice_InfusionStatusDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define ice_InfusionStatusDataReader_create_querycondition DDS_DataReader_create_querycondition

#define ice_InfusionStatusDataReader_create_readcondition DDS_DataReader_create_readcondition

#define ice_InfusionStatusDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define ice_InfusionStatusDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define ice_InfusionStatusDataReader_get_listener DDS_DataReader_get_listener

#define ice_InfusionStatusDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define ice_InfusionStatusDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define ice_InfusionStatusDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define ice_InfusionStatusDataReader_get_qos DDS_DataReader_get_qos

#define ice_InfusionStatusDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define ice_InfusionStatusDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define ice_InfusionStatusDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define ice_InfusionStatusDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define ice_InfusionStatusDataReader_get_subscriber DDS_DataReader_get_subscriber

#define ice_InfusionStatusDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define ice_InfusionStatusDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define ice_InfusionStatusDataReader_set_listener DDS_DataReader_set_listener

#define ice_InfusionStatusDataReader_set_qos DDS_DataReader_set_qos

#define ice_InfusionStatusDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
ice_InfusionStatusDataReader_read (
    ice_InfusionStatusDataReader _this,
    DDS_sequence_ice_InfusionStatus *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataReader_take (
    ice_InfusionStatusDataReader _this,
    DDS_sequence_ice_InfusionStatus *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataReader_read_w_condition (
    ice_InfusionStatusDataReader _this,
    DDS_sequence_ice_InfusionStatus *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataReader_take_w_condition (
    ice_InfusionStatusDataReader _this,
    DDS_sequence_ice_InfusionStatus *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataReader_read_next_sample (
    ice_InfusionStatusDataReader _this,
    ice_InfusionStatus *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataReader_take_next_sample (
    ice_InfusionStatusDataReader _this,
    ice_InfusionStatus *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataReader_read_instance (
    ice_InfusionStatusDataReader _this,
    DDS_sequence_ice_InfusionStatus *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataReader_take_instance (
    ice_InfusionStatusDataReader _this,
    DDS_sequence_ice_InfusionStatus *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataReader_read_next_instance (
    ice_InfusionStatusDataReader _this,
    DDS_sequence_ice_InfusionStatus *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataReader_take_next_instance (
    ice_InfusionStatusDataReader _this,
    DDS_sequence_ice_InfusionStatus *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataReader_read_next_instance_w_condition (
    ice_InfusionStatusDataReader _this,
    DDS_sequence_ice_InfusionStatus *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataReader_take_next_instance_w_condition (
    ice_InfusionStatusDataReader _this,
    DDS_sequence_ice_InfusionStatus *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataReader_return_loan (
    ice_InfusionStatusDataReader _this,
    DDS_sequence_ice_InfusionStatus *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataReader_get_key_value (
    ice_InfusionStatusDataReader _this,
    ice_InfusionStatus *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_InfusionStatusDataReader_lookup_instance (
    ice_InfusionStatusDataReader _this,
    const ice_InfusionStatus *key_holder
    );

#define ice_InfusionStatusDataReaderView DDS_DataReaderView

#define ice_InfusionStatusDataReaderView_enable DDS_Entity_enable

#define ice_InfusionStatusDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define ice_InfusionStatusDataReaderView_get_qos DDS_DataReaderView_get_qos

#define ice_InfusionStatusDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define ice_InfusionStatusDataReaderView_set_qos DDS_DataReaderView_set_qos

#define ice_InfusionStatusDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define ice_InfusionStatusDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define ice_InfusionStatusDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define ice_InfusionStatusDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
ice_InfusionStatusDataReaderView_read (
    ice_InfusionStatusDataReaderView _this,
    DDS_sequence_ice_InfusionStatus *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataReaderView_take (
    ice_InfusionStatusDataReaderView _this,
    DDS_sequence_ice_InfusionStatus *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataReaderView_read_next_sample (
    ice_InfusionStatusDataReaderView _this,
    ice_InfusionStatus *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataReaderView_take_next_sample (
    ice_InfusionStatusDataReaderView _this,
    ice_InfusionStatus *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataReaderView_read_instance (
    ice_InfusionStatusDataReaderView _this,
    DDS_sequence_ice_InfusionStatus *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataReaderView_take_instance (
    ice_InfusionStatusDataReaderView _this,
    DDS_sequence_ice_InfusionStatus *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataReaderView_read_next_instance (
    ice_InfusionStatusDataReaderView _this,
    DDS_sequence_ice_InfusionStatus *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataReaderView_take_next_instance (
    ice_InfusionStatusDataReaderView _this,
    DDS_sequence_ice_InfusionStatus *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataReaderView_return_loan (
    ice_InfusionStatusDataReaderView _this,
    DDS_sequence_ice_InfusionStatus *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataReaderView_read_w_condition (
    ice_InfusionStatusDataReaderView _this,
    DDS_sequence_ice_InfusionStatus *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataReaderView_take_w_condition (
    ice_InfusionStatusDataReaderView _this,
    DDS_sequence_ice_InfusionStatus *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataReaderView_read_next_instance_w_condition (
    ice_InfusionStatusDataReaderView _this,
    DDS_sequence_ice_InfusionStatus *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataReaderView_take_next_instance_w_condition (
    ice_InfusionStatusDataReaderView _this,
    DDS_sequence_ice_InfusionStatus *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_InfusionStatusDataReaderView_get_key_value (
    ice_InfusionStatusDataReaderView _this,
    ice_InfusionStatus *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_InfusionStatusDataReaderView_lookup_instance (
    ice_InfusionStatusDataReaderView _this,
    ice_InfusionStatus *key_holder
    );


#define ice_AlarmLimitTypeSupport DDS_TypeSupport

 ice_AlarmLimitTypeSupport
ice_AlarmLimitTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
ice_AlarmLimitTypeSupport_register_type (
    ice_AlarmLimitTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
ice_AlarmLimitTypeSupport_get_type_name (
    ice_AlarmLimitTypeSupport _this
    );

#ifndef _DDS_sequence_ice_AlarmLimit_defined
#define _DDS_sequence_ice_AlarmLimit_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    ice_AlarmLimit *_buffer;
    DDS_boolean _release;
} DDS_sequence_ice_AlarmLimit;

 DDS_sequence_ice_AlarmLimit *DDS_sequence_ice_AlarmLimit__alloc (void);
 ice_AlarmLimit *DDS_sequence_ice_AlarmLimit_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_ice_AlarmLimit_defined */

#define ice_AlarmLimitDataWriter DDS_DataWriter

#define ice_AlarmLimitDataWriter_enable DDS_Entity_enable

#define ice_AlarmLimitDataWriter_get_status_changes DDS_Entity_get_status_changes

#define ice_AlarmLimitDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define ice_AlarmLimitDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define ice_AlarmLimitDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define ice_AlarmLimitDataWriter_get_listener DDS_DataWriter_get_listener

#define ice_AlarmLimitDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define ice_AlarmLimitDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define ice_AlarmLimitDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define ice_AlarmLimitDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define ice_AlarmLimitDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define ice_AlarmLimitDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define ice_AlarmLimitDataWriter_get_publisher DDS_DataWriter_get_publisher

#define ice_AlarmLimitDataWriter_get_qos DDS_DataWriter_get_qos

#define ice_AlarmLimitDataWriter_get_topic DDS_DataWriter_get_topic

#define ice_AlarmLimitDataWriter_set_listener DDS_DataWriter_set_listener

#define ice_AlarmLimitDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
ice_AlarmLimitDataWriter_register_instance (
    ice_AlarmLimitDataWriter _this,
    const ice_AlarmLimit *instance_data
    );

 DDS_InstanceHandle_t
ice_AlarmLimitDataWriter_register_instance_w_timestamp (
    ice_AlarmLimitDataWriter _this,
    const ice_AlarmLimit *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataWriter_unregister_instance (
    ice_AlarmLimitDataWriter _this,
    const ice_AlarmLimit *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataWriter_unregister_instance_w_timestamp (
    ice_AlarmLimitDataWriter _this,
    const ice_AlarmLimit *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataWriter_write (
    ice_AlarmLimitDataWriter _this,
    const ice_AlarmLimit *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataWriter_write_w_timestamp (
    ice_AlarmLimitDataWriter _this,
    const ice_AlarmLimit *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataWriter_dispose (
    ice_AlarmLimitDataWriter _this,
    const ice_AlarmLimit *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataWriter_dispose_w_timestamp (
    ice_AlarmLimitDataWriter _this,
    const ice_AlarmLimit *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataWriter_writedispose (
    ice_AlarmLimitDataWriter _this,
    const ice_AlarmLimit *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataWriter_writedispose_w_timestamp (
    ice_AlarmLimitDataWriter _this,
    const ice_AlarmLimit *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataWriter_get_key_value (
    ice_AlarmLimitDataWriter _this,
    ice_AlarmLimit *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_AlarmLimitDataWriter_lookup_instance (
    ice_AlarmLimitDataWriter _this,
    const ice_AlarmLimit *key_holder
    );

#define ice_AlarmLimitDataReader DDS_DataReader

#define ice_AlarmLimitDataReader_enable DDS_Entity_enable

#define ice_AlarmLimitDataReader_get_status_changes DDS_Entity_get_status_changes

#define ice_AlarmLimitDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define ice_AlarmLimitDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define ice_AlarmLimitDataReader_create_querycondition DDS_DataReader_create_querycondition

#define ice_AlarmLimitDataReader_create_readcondition DDS_DataReader_create_readcondition

#define ice_AlarmLimitDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define ice_AlarmLimitDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define ice_AlarmLimitDataReader_get_listener DDS_DataReader_get_listener

#define ice_AlarmLimitDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define ice_AlarmLimitDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define ice_AlarmLimitDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define ice_AlarmLimitDataReader_get_qos DDS_DataReader_get_qos

#define ice_AlarmLimitDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define ice_AlarmLimitDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define ice_AlarmLimitDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define ice_AlarmLimitDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define ice_AlarmLimitDataReader_get_subscriber DDS_DataReader_get_subscriber

#define ice_AlarmLimitDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define ice_AlarmLimitDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define ice_AlarmLimitDataReader_set_listener DDS_DataReader_set_listener

#define ice_AlarmLimitDataReader_set_qos DDS_DataReader_set_qos

#define ice_AlarmLimitDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
ice_AlarmLimitDataReader_read (
    ice_AlarmLimitDataReader _this,
    DDS_sequence_ice_AlarmLimit *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataReader_take (
    ice_AlarmLimitDataReader _this,
    DDS_sequence_ice_AlarmLimit *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataReader_read_w_condition (
    ice_AlarmLimitDataReader _this,
    DDS_sequence_ice_AlarmLimit *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataReader_take_w_condition (
    ice_AlarmLimitDataReader _this,
    DDS_sequence_ice_AlarmLimit *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataReader_read_next_sample (
    ice_AlarmLimitDataReader _this,
    ice_AlarmLimit *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataReader_take_next_sample (
    ice_AlarmLimitDataReader _this,
    ice_AlarmLimit *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataReader_read_instance (
    ice_AlarmLimitDataReader _this,
    DDS_sequence_ice_AlarmLimit *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataReader_take_instance (
    ice_AlarmLimitDataReader _this,
    DDS_sequence_ice_AlarmLimit *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataReader_read_next_instance (
    ice_AlarmLimitDataReader _this,
    DDS_sequence_ice_AlarmLimit *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataReader_take_next_instance (
    ice_AlarmLimitDataReader _this,
    DDS_sequence_ice_AlarmLimit *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataReader_read_next_instance_w_condition (
    ice_AlarmLimitDataReader _this,
    DDS_sequence_ice_AlarmLimit *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataReader_take_next_instance_w_condition (
    ice_AlarmLimitDataReader _this,
    DDS_sequence_ice_AlarmLimit *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataReader_return_loan (
    ice_AlarmLimitDataReader _this,
    DDS_sequence_ice_AlarmLimit *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataReader_get_key_value (
    ice_AlarmLimitDataReader _this,
    ice_AlarmLimit *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_AlarmLimitDataReader_lookup_instance (
    ice_AlarmLimitDataReader _this,
    const ice_AlarmLimit *key_holder
    );

#define ice_AlarmLimitDataReaderView DDS_DataReaderView

#define ice_AlarmLimitDataReaderView_enable DDS_Entity_enable

#define ice_AlarmLimitDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define ice_AlarmLimitDataReaderView_get_qos DDS_DataReaderView_get_qos

#define ice_AlarmLimitDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define ice_AlarmLimitDataReaderView_set_qos DDS_DataReaderView_set_qos

#define ice_AlarmLimitDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define ice_AlarmLimitDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define ice_AlarmLimitDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define ice_AlarmLimitDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
ice_AlarmLimitDataReaderView_read (
    ice_AlarmLimitDataReaderView _this,
    DDS_sequence_ice_AlarmLimit *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataReaderView_take (
    ice_AlarmLimitDataReaderView _this,
    DDS_sequence_ice_AlarmLimit *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataReaderView_read_next_sample (
    ice_AlarmLimitDataReaderView _this,
    ice_AlarmLimit *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataReaderView_take_next_sample (
    ice_AlarmLimitDataReaderView _this,
    ice_AlarmLimit *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataReaderView_read_instance (
    ice_AlarmLimitDataReaderView _this,
    DDS_sequence_ice_AlarmLimit *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataReaderView_take_instance (
    ice_AlarmLimitDataReaderView _this,
    DDS_sequence_ice_AlarmLimit *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataReaderView_read_next_instance (
    ice_AlarmLimitDataReaderView _this,
    DDS_sequence_ice_AlarmLimit *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataReaderView_take_next_instance (
    ice_AlarmLimitDataReaderView _this,
    DDS_sequence_ice_AlarmLimit *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataReaderView_return_loan (
    ice_AlarmLimitDataReaderView _this,
    DDS_sequence_ice_AlarmLimit *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataReaderView_read_w_condition (
    ice_AlarmLimitDataReaderView _this,
    DDS_sequence_ice_AlarmLimit *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataReaderView_take_w_condition (
    ice_AlarmLimitDataReaderView _this,
    DDS_sequence_ice_AlarmLimit *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataReaderView_read_next_instance_w_condition (
    ice_AlarmLimitDataReaderView _this,
    DDS_sequence_ice_AlarmLimit *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataReaderView_take_next_instance_w_condition (
    ice_AlarmLimitDataReaderView _this,
    DDS_sequence_ice_AlarmLimit *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_AlarmLimitDataReaderView_get_key_value (
    ice_AlarmLimitDataReaderView _this,
    ice_AlarmLimit *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_AlarmLimitDataReaderView_lookup_instance (
    ice_AlarmLimitDataReaderView _this,
    ice_AlarmLimit *key_holder
    );


#define ice_GlobalAlarmLimitObjectiveTypeSupport DDS_TypeSupport

 ice_GlobalAlarmLimitObjectiveTypeSupport
ice_GlobalAlarmLimitObjectiveTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveTypeSupport_register_type (
    ice_GlobalAlarmLimitObjectiveTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
ice_GlobalAlarmLimitObjectiveTypeSupport_get_type_name (
    ice_GlobalAlarmLimitObjectiveTypeSupport _this
    );

#ifndef _DDS_sequence_ice_GlobalAlarmLimitObjective_defined
#define _DDS_sequence_ice_GlobalAlarmLimitObjective_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    ice_GlobalAlarmLimitObjective *_buffer;
    DDS_boolean _release;
} DDS_sequence_ice_GlobalAlarmLimitObjective;

 DDS_sequence_ice_GlobalAlarmLimitObjective *DDS_sequence_ice_GlobalAlarmLimitObjective__alloc (void);
 ice_GlobalAlarmLimitObjective *DDS_sequence_ice_GlobalAlarmLimitObjective_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_ice_GlobalAlarmLimitObjective_defined */

#define ice_GlobalAlarmLimitObjectiveDataWriter DDS_DataWriter

#define ice_GlobalAlarmLimitObjectiveDataWriter_enable DDS_Entity_enable

#define ice_GlobalAlarmLimitObjectiveDataWriter_get_status_changes DDS_Entity_get_status_changes

#define ice_GlobalAlarmLimitObjectiveDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define ice_GlobalAlarmLimitObjectiveDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define ice_GlobalAlarmLimitObjectiveDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define ice_GlobalAlarmLimitObjectiveDataWriter_get_listener DDS_DataWriter_get_listener

#define ice_GlobalAlarmLimitObjectiveDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define ice_GlobalAlarmLimitObjectiveDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define ice_GlobalAlarmLimitObjectiveDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define ice_GlobalAlarmLimitObjectiveDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define ice_GlobalAlarmLimitObjectiveDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define ice_GlobalAlarmLimitObjectiveDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define ice_GlobalAlarmLimitObjectiveDataWriter_get_publisher DDS_DataWriter_get_publisher

#define ice_GlobalAlarmLimitObjectiveDataWriter_get_qos DDS_DataWriter_get_qos

#define ice_GlobalAlarmLimitObjectiveDataWriter_get_topic DDS_DataWriter_get_topic

#define ice_GlobalAlarmLimitObjectiveDataWriter_set_listener DDS_DataWriter_set_listener

#define ice_GlobalAlarmLimitObjectiveDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
ice_GlobalAlarmLimitObjectiveDataWriter_register_instance (
    ice_GlobalAlarmLimitObjectiveDataWriter _this,
    const ice_GlobalAlarmLimitObjective *instance_data
    );

 DDS_InstanceHandle_t
ice_GlobalAlarmLimitObjectiveDataWriter_register_instance_w_timestamp (
    ice_GlobalAlarmLimitObjectiveDataWriter _this,
    const ice_GlobalAlarmLimitObjective *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataWriter_unregister_instance (
    ice_GlobalAlarmLimitObjectiveDataWriter _this,
    const ice_GlobalAlarmLimitObjective *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataWriter_unregister_instance_w_timestamp (
    ice_GlobalAlarmLimitObjectiveDataWriter _this,
    const ice_GlobalAlarmLimitObjective *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataWriter_write (
    ice_GlobalAlarmLimitObjectiveDataWriter _this,
    const ice_GlobalAlarmLimitObjective *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataWriter_write_w_timestamp (
    ice_GlobalAlarmLimitObjectiveDataWriter _this,
    const ice_GlobalAlarmLimitObjective *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataWriter_dispose (
    ice_GlobalAlarmLimitObjectiveDataWriter _this,
    const ice_GlobalAlarmLimitObjective *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataWriter_dispose_w_timestamp (
    ice_GlobalAlarmLimitObjectiveDataWriter _this,
    const ice_GlobalAlarmLimitObjective *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataWriter_writedispose (
    ice_GlobalAlarmLimitObjectiveDataWriter _this,
    const ice_GlobalAlarmLimitObjective *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataWriter_writedispose_w_timestamp (
    ice_GlobalAlarmLimitObjectiveDataWriter _this,
    const ice_GlobalAlarmLimitObjective *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataWriter_get_key_value (
    ice_GlobalAlarmLimitObjectiveDataWriter _this,
    ice_GlobalAlarmLimitObjective *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_GlobalAlarmLimitObjectiveDataWriter_lookup_instance (
    ice_GlobalAlarmLimitObjectiveDataWriter _this,
    const ice_GlobalAlarmLimitObjective *key_holder
    );

#define ice_GlobalAlarmLimitObjectiveDataReader DDS_DataReader

#define ice_GlobalAlarmLimitObjectiveDataReader_enable DDS_Entity_enable

#define ice_GlobalAlarmLimitObjectiveDataReader_get_status_changes DDS_Entity_get_status_changes

#define ice_GlobalAlarmLimitObjectiveDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define ice_GlobalAlarmLimitObjectiveDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define ice_GlobalAlarmLimitObjectiveDataReader_create_querycondition DDS_DataReader_create_querycondition

#define ice_GlobalAlarmLimitObjectiveDataReader_create_readcondition DDS_DataReader_create_readcondition

#define ice_GlobalAlarmLimitObjectiveDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define ice_GlobalAlarmLimitObjectiveDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define ice_GlobalAlarmLimitObjectiveDataReader_get_listener DDS_DataReader_get_listener

#define ice_GlobalAlarmLimitObjectiveDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define ice_GlobalAlarmLimitObjectiveDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define ice_GlobalAlarmLimitObjectiveDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define ice_GlobalAlarmLimitObjectiveDataReader_get_qos DDS_DataReader_get_qos

#define ice_GlobalAlarmLimitObjectiveDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define ice_GlobalAlarmLimitObjectiveDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define ice_GlobalAlarmLimitObjectiveDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define ice_GlobalAlarmLimitObjectiveDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define ice_GlobalAlarmLimitObjectiveDataReader_get_subscriber DDS_DataReader_get_subscriber

#define ice_GlobalAlarmLimitObjectiveDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define ice_GlobalAlarmLimitObjectiveDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define ice_GlobalAlarmLimitObjectiveDataReader_set_listener DDS_DataReader_set_listener

#define ice_GlobalAlarmLimitObjectiveDataReader_set_qos DDS_DataReader_set_qos

#define ice_GlobalAlarmLimitObjectiveDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReader_read (
    ice_GlobalAlarmLimitObjectiveDataReader _this,
    DDS_sequence_ice_GlobalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReader_take (
    ice_GlobalAlarmLimitObjectiveDataReader _this,
    DDS_sequence_ice_GlobalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReader_read_w_condition (
    ice_GlobalAlarmLimitObjectiveDataReader _this,
    DDS_sequence_ice_GlobalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReader_take_w_condition (
    ice_GlobalAlarmLimitObjectiveDataReader _this,
    DDS_sequence_ice_GlobalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReader_read_next_sample (
    ice_GlobalAlarmLimitObjectiveDataReader _this,
    ice_GlobalAlarmLimitObjective *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReader_take_next_sample (
    ice_GlobalAlarmLimitObjectiveDataReader _this,
    ice_GlobalAlarmLimitObjective *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReader_read_instance (
    ice_GlobalAlarmLimitObjectiveDataReader _this,
    DDS_sequence_ice_GlobalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReader_take_instance (
    ice_GlobalAlarmLimitObjectiveDataReader _this,
    DDS_sequence_ice_GlobalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReader_read_next_instance (
    ice_GlobalAlarmLimitObjectiveDataReader _this,
    DDS_sequence_ice_GlobalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReader_take_next_instance (
    ice_GlobalAlarmLimitObjectiveDataReader _this,
    DDS_sequence_ice_GlobalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReader_read_next_instance_w_condition (
    ice_GlobalAlarmLimitObjectiveDataReader _this,
    DDS_sequence_ice_GlobalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReader_take_next_instance_w_condition (
    ice_GlobalAlarmLimitObjectiveDataReader _this,
    DDS_sequence_ice_GlobalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReader_return_loan (
    ice_GlobalAlarmLimitObjectiveDataReader _this,
    DDS_sequence_ice_GlobalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReader_get_key_value (
    ice_GlobalAlarmLimitObjectiveDataReader _this,
    ice_GlobalAlarmLimitObjective *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_GlobalAlarmLimitObjectiveDataReader_lookup_instance (
    ice_GlobalAlarmLimitObjectiveDataReader _this,
    const ice_GlobalAlarmLimitObjective *key_holder
    );

#define ice_GlobalAlarmLimitObjectiveDataReaderView DDS_DataReaderView

#define ice_GlobalAlarmLimitObjectiveDataReaderView_enable DDS_Entity_enable

#define ice_GlobalAlarmLimitObjectiveDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define ice_GlobalAlarmLimitObjectiveDataReaderView_get_qos DDS_DataReaderView_get_qos

#define ice_GlobalAlarmLimitObjectiveDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define ice_GlobalAlarmLimitObjectiveDataReaderView_set_qos DDS_DataReaderView_set_qos

#define ice_GlobalAlarmLimitObjectiveDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define ice_GlobalAlarmLimitObjectiveDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define ice_GlobalAlarmLimitObjectiveDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define ice_GlobalAlarmLimitObjectiveDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReaderView_read (
    ice_GlobalAlarmLimitObjectiveDataReaderView _this,
    DDS_sequence_ice_GlobalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReaderView_take (
    ice_GlobalAlarmLimitObjectiveDataReaderView _this,
    DDS_sequence_ice_GlobalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReaderView_read_next_sample (
    ice_GlobalAlarmLimitObjectiveDataReaderView _this,
    ice_GlobalAlarmLimitObjective *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReaderView_take_next_sample (
    ice_GlobalAlarmLimitObjectiveDataReaderView _this,
    ice_GlobalAlarmLimitObjective *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReaderView_read_instance (
    ice_GlobalAlarmLimitObjectiveDataReaderView _this,
    DDS_sequence_ice_GlobalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReaderView_take_instance (
    ice_GlobalAlarmLimitObjectiveDataReaderView _this,
    DDS_sequence_ice_GlobalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReaderView_read_next_instance (
    ice_GlobalAlarmLimitObjectiveDataReaderView _this,
    DDS_sequence_ice_GlobalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReaderView_take_next_instance (
    ice_GlobalAlarmLimitObjectiveDataReaderView _this,
    DDS_sequence_ice_GlobalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReaderView_return_loan (
    ice_GlobalAlarmLimitObjectiveDataReaderView _this,
    DDS_sequence_ice_GlobalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReaderView_read_w_condition (
    ice_GlobalAlarmLimitObjectiveDataReaderView _this,
    DDS_sequence_ice_GlobalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReaderView_take_w_condition (
    ice_GlobalAlarmLimitObjectiveDataReaderView _this,
    DDS_sequence_ice_GlobalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReaderView_read_next_instance_w_condition (
    ice_GlobalAlarmLimitObjectiveDataReaderView _this,
    DDS_sequence_ice_GlobalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReaderView_take_next_instance_w_condition (
    ice_GlobalAlarmLimitObjectiveDataReaderView _this,
    DDS_sequence_ice_GlobalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_GlobalAlarmLimitObjectiveDataReaderView_get_key_value (
    ice_GlobalAlarmLimitObjectiveDataReaderView _this,
    ice_GlobalAlarmLimitObjective *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_GlobalAlarmLimitObjectiveDataReaderView_lookup_instance (
    ice_GlobalAlarmLimitObjectiveDataReaderView _this,
    ice_GlobalAlarmLimitObjective *key_holder
    );


#define ice_LocalAlarmLimitObjectiveTypeSupport DDS_TypeSupport

 ice_LocalAlarmLimitObjectiveTypeSupport
ice_LocalAlarmLimitObjectiveTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveTypeSupport_register_type (
    ice_LocalAlarmLimitObjectiveTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
ice_LocalAlarmLimitObjectiveTypeSupport_get_type_name (
    ice_LocalAlarmLimitObjectiveTypeSupport _this
    );

#ifndef _DDS_sequence_ice_LocalAlarmLimitObjective_defined
#define _DDS_sequence_ice_LocalAlarmLimitObjective_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    ice_LocalAlarmLimitObjective *_buffer;
    DDS_boolean _release;
} DDS_sequence_ice_LocalAlarmLimitObjective;

 DDS_sequence_ice_LocalAlarmLimitObjective *DDS_sequence_ice_LocalAlarmLimitObjective__alloc (void);
 ice_LocalAlarmLimitObjective *DDS_sequence_ice_LocalAlarmLimitObjective_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_ice_LocalAlarmLimitObjective_defined */

#define ice_LocalAlarmLimitObjectiveDataWriter DDS_DataWriter

#define ice_LocalAlarmLimitObjectiveDataWriter_enable DDS_Entity_enable

#define ice_LocalAlarmLimitObjectiveDataWriter_get_status_changes DDS_Entity_get_status_changes

#define ice_LocalAlarmLimitObjectiveDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define ice_LocalAlarmLimitObjectiveDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define ice_LocalAlarmLimitObjectiveDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define ice_LocalAlarmLimitObjectiveDataWriter_get_listener DDS_DataWriter_get_listener

#define ice_LocalAlarmLimitObjectiveDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define ice_LocalAlarmLimitObjectiveDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define ice_LocalAlarmLimitObjectiveDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define ice_LocalAlarmLimitObjectiveDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define ice_LocalAlarmLimitObjectiveDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define ice_LocalAlarmLimitObjectiveDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define ice_LocalAlarmLimitObjectiveDataWriter_get_publisher DDS_DataWriter_get_publisher

#define ice_LocalAlarmLimitObjectiveDataWriter_get_qos DDS_DataWriter_get_qos

#define ice_LocalAlarmLimitObjectiveDataWriter_get_topic DDS_DataWriter_get_topic

#define ice_LocalAlarmLimitObjectiveDataWriter_set_listener DDS_DataWriter_set_listener

#define ice_LocalAlarmLimitObjectiveDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
ice_LocalAlarmLimitObjectiveDataWriter_register_instance (
    ice_LocalAlarmLimitObjectiveDataWriter _this,
    const ice_LocalAlarmLimitObjective *instance_data
    );

 DDS_InstanceHandle_t
ice_LocalAlarmLimitObjectiveDataWriter_register_instance_w_timestamp (
    ice_LocalAlarmLimitObjectiveDataWriter _this,
    const ice_LocalAlarmLimitObjective *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataWriter_unregister_instance (
    ice_LocalAlarmLimitObjectiveDataWriter _this,
    const ice_LocalAlarmLimitObjective *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataWriter_unregister_instance_w_timestamp (
    ice_LocalAlarmLimitObjectiveDataWriter _this,
    const ice_LocalAlarmLimitObjective *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataWriter_write (
    ice_LocalAlarmLimitObjectiveDataWriter _this,
    const ice_LocalAlarmLimitObjective *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataWriter_write_w_timestamp (
    ice_LocalAlarmLimitObjectiveDataWriter _this,
    const ice_LocalAlarmLimitObjective *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataWriter_dispose (
    ice_LocalAlarmLimitObjectiveDataWriter _this,
    const ice_LocalAlarmLimitObjective *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataWriter_dispose_w_timestamp (
    ice_LocalAlarmLimitObjectiveDataWriter _this,
    const ice_LocalAlarmLimitObjective *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataWriter_writedispose (
    ice_LocalAlarmLimitObjectiveDataWriter _this,
    const ice_LocalAlarmLimitObjective *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataWriter_writedispose_w_timestamp (
    ice_LocalAlarmLimitObjectiveDataWriter _this,
    const ice_LocalAlarmLimitObjective *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataWriter_get_key_value (
    ice_LocalAlarmLimitObjectiveDataWriter _this,
    ice_LocalAlarmLimitObjective *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_LocalAlarmLimitObjectiveDataWriter_lookup_instance (
    ice_LocalAlarmLimitObjectiveDataWriter _this,
    const ice_LocalAlarmLimitObjective *key_holder
    );

#define ice_LocalAlarmLimitObjectiveDataReader DDS_DataReader

#define ice_LocalAlarmLimitObjectiveDataReader_enable DDS_Entity_enable

#define ice_LocalAlarmLimitObjectiveDataReader_get_status_changes DDS_Entity_get_status_changes

#define ice_LocalAlarmLimitObjectiveDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define ice_LocalAlarmLimitObjectiveDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define ice_LocalAlarmLimitObjectiveDataReader_create_querycondition DDS_DataReader_create_querycondition

#define ice_LocalAlarmLimitObjectiveDataReader_create_readcondition DDS_DataReader_create_readcondition

#define ice_LocalAlarmLimitObjectiveDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define ice_LocalAlarmLimitObjectiveDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define ice_LocalAlarmLimitObjectiveDataReader_get_listener DDS_DataReader_get_listener

#define ice_LocalAlarmLimitObjectiveDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define ice_LocalAlarmLimitObjectiveDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define ice_LocalAlarmLimitObjectiveDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define ice_LocalAlarmLimitObjectiveDataReader_get_qos DDS_DataReader_get_qos

#define ice_LocalAlarmLimitObjectiveDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define ice_LocalAlarmLimitObjectiveDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define ice_LocalAlarmLimitObjectiveDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define ice_LocalAlarmLimitObjectiveDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define ice_LocalAlarmLimitObjectiveDataReader_get_subscriber DDS_DataReader_get_subscriber

#define ice_LocalAlarmLimitObjectiveDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define ice_LocalAlarmLimitObjectiveDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define ice_LocalAlarmLimitObjectiveDataReader_set_listener DDS_DataReader_set_listener

#define ice_LocalAlarmLimitObjectiveDataReader_set_qos DDS_DataReader_set_qos

#define ice_LocalAlarmLimitObjectiveDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReader_read (
    ice_LocalAlarmLimitObjectiveDataReader _this,
    DDS_sequence_ice_LocalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReader_take (
    ice_LocalAlarmLimitObjectiveDataReader _this,
    DDS_sequence_ice_LocalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReader_read_w_condition (
    ice_LocalAlarmLimitObjectiveDataReader _this,
    DDS_sequence_ice_LocalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReader_take_w_condition (
    ice_LocalAlarmLimitObjectiveDataReader _this,
    DDS_sequence_ice_LocalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReader_read_next_sample (
    ice_LocalAlarmLimitObjectiveDataReader _this,
    ice_LocalAlarmLimitObjective *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReader_take_next_sample (
    ice_LocalAlarmLimitObjectiveDataReader _this,
    ice_LocalAlarmLimitObjective *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReader_read_instance (
    ice_LocalAlarmLimitObjectiveDataReader _this,
    DDS_sequence_ice_LocalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReader_take_instance (
    ice_LocalAlarmLimitObjectiveDataReader _this,
    DDS_sequence_ice_LocalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReader_read_next_instance (
    ice_LocalAlarmLimitObjectiveDataReader _this,
    DDS_sequence_ice_LocalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReader_take_next_instance (
    ice_LocalAlarmLimitObjectiveDataReader _this,
    DDS_sequence_ice_LocalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReader_read_next_instance_w_condition (
    ice_LocalAlarmLimitObjectiveDataReader _this,
    DDS_sequence_ice_LocalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReader_take_next_instance_w_condition (
    ice_LocalAlarmLimitObjectiveDataReader _this,
    DDS_sequence_ice_LocalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReader_return_loan (
    ice_LocalAlarmLimitObjectiveDataReader _this,
    DDS_sequence_ice_LocalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReader_get_key_value (
    ice_LocalAlarmLimitObjectiveDataReader _this,
    ice_LocalAlarmLimitObjective *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_LocalAlarmLimitObjectiveDataReader_lookup_instance (
    ice_LocalAlarmLimitObjectiveDataReader _this,
    const ice_LocalAlarmLimitObjective *key_holder
    );

#define ice_LocalAlarmLimitObjectiveDataReaderView DDS_DataReaderView

#define ice_LocalAlarmLimitObjectiveDataReaderView_enable DDS_Entity_enable

#define ice_LocalAlarmLimitObjectiveDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define ice_LocalAlarmLimitObjectiveDataReaderView_get_qos DDS_DataReaderView_get_qos

#define ice_LocalAlarmLimitObjectiveDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define ice_LocalAlarmLimitObjectiveDataReaderView_set_qos DDS_DataReaderView_set_qos

#define ice_LocalAlarmLimitObjectiveDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define ice_LocalAlarmLimitObjectiveDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define ice_LocalAlarmLimitObjectiveDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define ice_LocalAlarmLimitObjectiveDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReaderView_read (
    ice_LocalAlarmLimitObjectiveDataReaderView _this,
    DDS_sequence_ice_LocalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReaderView_take (
    ice_LocalAlarmLimitObjectiveDataReaderView _this,
    DDS_sequence_ice_LocalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReaderView_read_next_sample (
    ice_LocalAlarmLimitObjectiveDataReaderView _this,
    ice_LocalAlarmLimitObjective *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReaderView_take_next_sample (
    ice_LocalAlarmLimitObjectiveDataReaderView _this,
    ice_LocalAlarmLimitObjective *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReaderView_read_instance (
    ice_LocalAlarmLimitObjectiveDataReaderView _this,
    DDS_sequence_ice_LocalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReaderView_take_instance (
    ice_LocalAlarmLimitObjectiveDataReaderView _this,
    DDS_sequence_ice_LocalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReaderView_read_next_instance (
    ice_LocalAlarmLimitObjectiveDataReaderView _this,
    DDS_sequence_ice_LocalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReaderView_take_next_instance (
    ice_LocalAlarmLimitObjectiveDataReaderView _this,
    DDS_sequence_ice_LocalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReaderView_return_loan (
    ice_LocalAlarmLimitObjectiveDataReaderView _this,
    DDS_sequence_ice_LocalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReaderView_read_w_condition (
    ice_LocalAlarmLimitObjectiveDataReaderView _this,
    DDS_sequence_ice_LocalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReaderView_take_w_condition (
    ice_LocalAlarmLimitObjectiveDataReaderView _this,
    DDS_sequence_ice_LocalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReaderView_read_next_instance_w_condition (
    ice_LocalAlarmLimitObjectiveDataReaderView _this,
    DDS_sequence_ice_LocalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReaderView_take_next_instance_w_condition (
    ice_LocalAlarmLimitObjectiveDataReaderView _this,
    DDS_sequence_ice_LocalAlarmLimitObjective *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_LocalAlarmLimitObjectiveDataReaderView_get_key_value (
    ice_LocalAlarmLimitObjectiveDataReaderView _this,
    ice_LocalAlarmLimitObjective *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_LocalAlarmLimitObjectiveDataReaderView_lookup_instance (
    ice_LocalAlarmLimitObjectiveDataReaderView _this,
    ice_LocalAlarmLimitObjective *key_holder
    );


#define ice_DeviceAlertConditionTypeSupport DDS_TypeSupport

 ice_DeviceAlertConditionTypeSupport
ice_DeviceAlertConditionTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionTypeSupport_register_type (
    ice_DeviceAlertConditionTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
ice_DeviceAlertConditionTypeSupport_get_type_name (
    ice_DeviceAlertConditionTypeSupport _this
    );

#ifndef _DDS_sequence_ice_DeviceAlertCondition_defined
#define _DDS_sequence_ice_DeviceAlertCondition_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    ice_DeviceAlertCondition *_buffer;
    DDS_boolean _release;
} DDS_sequence_ice_DeviceAlertCondition;

 DDS_sequence_ice_DeviceAlertCondition *DDS_sequence_ice_DeviceAlertCondition__alloc (void);
 ice_DeviceAlertCondition *DDS_sequence_ice_DeviceAlertCondition_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_ice_DeviceAlertCondition_defined */

#define ice_DeviceAlertConditionDataWriter DDS_DataWriter

#define ice_DeviceAlertConditionDataWriter_enable DDS_Entity_enable

#define ice_DeviceAlertConditionDataWriter_get_status_changes DDS_Entity_get_status_changes

#define ice_DeviceAlertConditionDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define ice_DeviceAlertConditionDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define ice_DeviceAlertConditionDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define ice_DeviceAlertConditionDataWriter_get_listener DDS_DataWriter_get_listener

#define ice_DeviceAlertConditionDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define ice_DeviceAlertConditionDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define ice_DeviceAlertConditionDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define ice_DeviceAlertConditionDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define ice_DeviceAlertConditionDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define ice_DeviceAlertConditionDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define ice_DeviceAlertConditionDataWriter_get_publisher DDS_DataWriter_get_publisher

#define ice_DeviceAlertConditionDataWriter_get_qos DDS_DataWriter_get_qos

#define ice_DeviceAlertConditionDataWriter_get_topic DDS_DataWriter_get_topic

#define ice_DeviceAlertConditionDataWriter_set_listener DDS_DataWriter_set_listener

#define ice_DeviceAlertConditionDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
ice_DeviceAlertConditionDataWriter_register_instance (
    ice_DeviceAlertConditionDataWriter _this,
    const ice_DeviceAlertCondition *instance_data
    );

 DDS_InstanceHandle_t
ice_DeviceAlertConditionDataWriter_register_instance_w_timestamp (
    ice_DeviceAlertConditionDataWriter _this,
    const ice_DeviceAlertCondition *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataWriter_unregister_instance (
    ice_DeviceAlertConditionDataWriter _this,
    const ice_DeviceAlertCondition *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataWriter_unregister_instance_w_timestamp (
    ice_DeviceAlertConditionDataWriter _this,
    const ice_DeviceAlertCondition *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataWriter_write (
    ice_DeviceAlertConditionDataWriter _this,
    const ice_DeviceAlertCondition *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataWriter_write_w_timestamp (
    ice_DeviceAlertConditionDataWriter _this,
    const ice_DeviceAlertCondition *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataWriter_dispose (
    ice_DeviceAlertConditionDataWriter _this,
    const ice_DeviceAlertCondition *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataWriter_dispose_w_timestamp (
    ice_DeviceAlertConditionDataWriter _this,
    const ice_DeviceAlertCondition *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataWriter_writedispose (
    ice_DeviceAlertConditionDataWriter _this,
    const ice_DeviceAlertCondition *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataWriter_writedispose_w_timestamp (
    ice_DeviceAlertConditionDataWriter _this,
    const ice_DeviceAlertCondition *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataWriter_get_key_value (
    ice_DeviceAlertConditionDataWriter _this,
    ice_DeviceAlertCondition *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_DeviceAlertConditionDataWriter_lookup_instance (
    ice_DeviceAlertConditionDataWriter _this,
    const ice_DeviceAlertCondition *key_holder
    );

#define ice_DeviceAlertConditionDataReader DDS_DataReader

#define ice_DeviceAlertConditionDataReader_enable DDS_Entity_enable

#define ice_DeviceAlertConditionDataReader_get_status_changes DDS_Entity_get_status_changes

#define ice_DeviceAlertConditionDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define ice_DeviceAlertConditionDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define ice_DeviceAlertConditionDataReader_create_querycondition DDS_DataReader_create_querycondition

#define ice_DeviceAlertConditionDataReader_create_readcondition DDS_DataReader_create_readcondition

#define ice_DeviceAlertConditionDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define ice_DeviceAlertConditionDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define ice_DeviceAlertConditionDataReader_get_listener DDS_DataReader_get_listener

#define ice_DeviceAlertConditionDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define ice_DeviceAlertConditionDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define ice_DeviceAlertConditionDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define ice_DeviceAlertConditionDataReader_get_qos DDS_DataReader_get_qos

#define ice_DeviceAlertConditionDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define ice_DeviceAlertConditionDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define ice_DeviceAlertConditionDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define ice_DeviceAlertConditionDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define ice_DeviceAlertConditionDataReader_get_subscriber DDS_DataReader_get_subscriber

#define ice_DeviceAlertConditionDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define ice_DeviceAlertConditionDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define ice_DeviceAlertConditionDataReader_set_listener DDS_DataReader_set_listener

#define ice_DeviceAlertConditionDataReader_set_qos DDS_DataReader_set_qos

#define ice_DeviceAlertConditionDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReader_read (
    ice_DeviceAlertConditionDataReader _this,
    DDS_sequence_ice_DeviceAlertCondition *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReader_take (
    ice_DeviceAlertConditionDataReader _this,
    DDS_sequence_ice_DeviceAlertCondition *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReader_read_w_condition (
    ice_DeviceAlertConditionDataReader _this,
    DDS_sequence_ice_DeviceAlertCondition *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReader_take_w_condition (
    ice_DeviceAlertConditionDataReader _this,
    DDS_sequence_ice_DeviceAlertCondition *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReader_read_next_sample (
    ice_DeviceAlertConditionDataReader _this,
    ice_DeviceAlertCondition *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReader_take_next_sample (
    ice_DeviceAlertConditionDataReader _this,
    ice_DeviceAlertCondition *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReader_read_instance (
    ice_DeviceAlertConditionDataReader _this,
    DDS_sequence_ice_DeviceAlertCondition *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReader_take_instance (
    ice_DeviceAlertConditionDataReader _this,
    DDS_sequence_ice_DeviceAlertCondition *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReader_read_next_instance (
    ice_DeviceAlertConditionDataReader _this,
    DDS_sequence_ice_DeviceAlertCondition *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReader_take_next_instance (
    ice_DeviceAlertConditionDataReader _this,
    DDS_sequence_ice_DeviceAlertCondition *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReader_read_next_instance_w_condition (
    ice_DeviceAlertConditionDataReader _this,
    DDS_sequence_ice_DeviceAlertCondition *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReader_take_next_instance_w_condition (
    ice_DeviceAlertConditionDataReader _this,
    DDS_sequence_ice_DeviceAlertCondition *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReader_return_loan (
    ice_DeviceAlertConditionDataReader _this,
    DDS_sequence_ice_DeviceAlertCondition *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReader_get_key_value (
    ice_DeviceAlertConditionDataReader _this,
    ice_DeviceAlertCondition *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_DeviceAlertConditionDataReader_lookup_instance (
    ice_DeviceAlertConditionDataReader _this,
    const ice_DeviceAlertCondition *key_holder
    );

#define ice_DeviceAlertConditionDataReaderView DDS_DataReaderView

#define ice_DeviceAlertConditionDataReaderView_enable DDS_Entity_enable

#define ice_DeviceAlertConditionDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define ice_DeviceAlertConditionDataReaderView_get_qos DDS_DataReaderView_get_qos

#define ice_DeviceAlertConditionDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define ice_DeviceAlertConditionDataReaderView_set_qos DDS_DataReaderView_set_qos

#define ice_DeviceAlertConditionDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define ice_DeviceAlertConditionDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define ice_DeviceAlertConditionDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define ice_DeviceAlertConditionDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReaderView_read (
    ice_DeviceAlertConditionDataReaderView _this,
    DDS_sequence_ice_DeviceAlertCondition *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReaderView_take (
    ice_DeviceAlertConditionDataReaderView _this,
    DDS_sequence_ice_DeviceAlertCondition *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReaderView_read_next_sample (
    ice_DeviceAlertConditionDataReaderView _this,
    ice_DeviceAlertCondition *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReaderView_take_next_sample (
    ice_DeviceAlertConditionDataReaderView _this,
    ice_DeviceAlertCondition *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReaderView_read_instance (
    ice_DeviceAlertConditionDataReaderView _this,
    DDS_sequence_ice_DeviceAlertCondition *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReaderView_take_instance (
    ice_DeviceAlertConditionDataReaderView _this,
    DDS_sequence_ice_DeviceAlertCondition *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReaderView_read_next_instance (
    ice_DeviceAlertConditionDataReaderView _this,
    DDS_sequence_ice_DeviceAlertCondition *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReaderView_take_next_instance (
    ice_DeviceAlertConditionDataReaderView _this,
    DDS_sequence_ice_DeviceAlertCondition *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReaderView_return_loan (
    ice_DeviceAlertConditionDataReaderView _this,
    DDS_sequence_ice_DeviceAlertCondition *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReaderView_read_w_condition (
    ice_DeviceAlertConditionDataReaderView _this,
    DDS_sequence_ice_DeviceAlertCondition *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReaderView_take_w_condition (
    ice_DeviceAlertConditionDataReaderView _this,
    DDS_sequence_ice_DeviceAlertCondition *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReaderView_read_next_instance_w_condition (
    ice_DeviceAlertConditionDataReaderView _this,
    DDS_sequence_ice_DeviceAlertCondition *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReaderView_take_next_instance_w_condition (
    ice_DeviceAlertConditionDataReaderView _this,
    DDS_sequence_ice_DeviceAlertCondition *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_DeviceAlertConditionDataReaderView_get_key_value (
    ice_DeviceAlertConditionDataReaderView _this,
    ice_DeviceAlertCondition *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_DeviceAlertConditionDataReaderView_lookup_instance (
    ice_DeviceAlertConditionDataReaderView _this,
    ice_DeviceAlertCondition *key_holder
    );


#define ice_AlertTypeSupport DDS_TypeSupport

 ice_AlertTypeSupport
ice_AlertTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
ice_AlertTypeSupport_register_type (
    ice_AlertTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
ice_AlertTypeSupport_get_type_name (
    ice_AlertTypeSupport _this
    );

#ifndef _DDS_sequence_ice_Alert_defined
#define _DDS_sequence_ice_Alert_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    ice_Alert *_buffer;
    DDS_boolean _release;
} DDS_sequence_ice_Alert;

 DDS_sequence_ice_Alert *DDS_sequence_ice_Alert__alloc (void);
 ice_Alert *DDS_sequence_ice_Alert_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_ice_Alert_defined */

#define ice_AlertDataWriter DDS_DataWriter

#define ice_AlertDataWriter_enable DDS_Entity_enable

#define ice_AlertDataWriter_get_status_changes DDS_Entity_get_status_changes

#define ice_AlertDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define ice_AlertDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define ice_AlertDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define ice_AlertDataWriter_get_listener DDS_DataWriter_get_listener

#define ice_AlertDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define ice_AlertDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define ice_AlertDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define ice_AlertDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define ice_AlertDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define ice_AlertDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define ice_AlertDataWriter_get_publisher DDS_DataWriter_get_publisher

#define ice_AlertDataWriter_get_qos DDS_DataWriter_get_qos

#define ice_AlertDataWriter_get_topic DDS_DataWriter_get_topic

#define ice_AlertDataWriter_set_listener DDS_DataWriter_set_listener

#define ice_AlertDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
ice_AlertDataWriter_register_instance (
    ice_AlertDataWriter _this,
    const ice_Alert *instance_data
    );

 DDS_InstanceHandle_t
ice_AlertDataWriter_register_instance_w_timestamp (
    ice_AlertDataWriter _this,
    const ice_Alert *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_AlertDataWriter_unregister_instance (
    ice_AlertDataWriter _this,
    const ice_Alert *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_AlertDataWriter_unregister_instance_w_timestamp (
    ice_AlertDataWriter _this,
    const ice_Alert *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_AlertDataWriter_write (
    ice_AlertDataWriter _this,
    const ice_Alert *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_AlertDataWriter_write_w_timestamp (
    ice_AlertDataWriter _this,
    const ice_Alert *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_AlertDataWriter_dispose (
    ice_AlertDataWriter _this,
    const ice_Alert *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_AlertDataWriter_dispose_w_timestamp (
    ice_AlertDataWriter _this,
    const ice_Alert *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_AlertDataWriter_writedispose (
    ice_AlertDataWriter _this,
    const ice_Alert *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_AlertDataWriter_writedispose_w_timestamp (
    ice_AlertDataWriter _this,
    const ice_Alert *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_AlertDataWriter_get_key_value (
    ice_AlertDataWriter _this,
    ice_Alert *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_AlertDataWriter_lookup_instance (
    ice_AlertDataWriter _this,
    const ice_Alert *key_holder
    );

#define ice_AlertDataReader DDS_DataReader

#define ice_AlertDataReader_enable DDS_Entity_enable

#define ice_AlertDataReader_get_status_changes DDS_Entity_get_status_changes

#define ice_AlertDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define ice_AlertDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define ice_AlertDataReader_create_querycondition DDS_DataReader_create_querycondition

#define ice_AlertDataReader_create_readcondition DDS_DataReader_create_readcondition

#define ice_AlertDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define ice_AlertDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define ice_AlertDataReader_get_listener DDS_DataReader_get_listener

#define ice_AlertDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define ice_AlertDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define ice_AlertDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define ice_AlertDataReader_get_qos DDS_DataReader_get_qos

#define ice_AlertDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define ice_AlertDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define ice_AlertDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define ice_AlertDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define ice_AlertDataReader_get_subscriber DDS_DataReader_get_subscriber

#define ice_AlertDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define ice_AlertDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define ice_AlertDataReader_set_listener DDS_DataReader_set_listener

#define ice_AlertDataReader_set_qos DDS_DataReader_set_qos

#define ice_AlertDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
ice_AlertDataReader_read (
    ice_AlertDataReader _this,
    DDS_sequence_ice_Alert *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_AlertDataReader_take (
    ice_AlertDataReader _this,
    DDS_sequence_ice_Alert *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_AlertDataReader_read_w_condition (
    ice_AlertDataReader _this,
    DDS_sequence_ice_Alert *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_AlertDataReader_take_w_condition (
    ice_AlertDataReader _this,
    DDS_sequence_ice_Alert *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_AlertDataReader_read_next_sample (
    ice_AlertDataReader _this,
    ice_Alert *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_AlertDataReader_take_next_sample (
    ice_AlertDataReader _this,
    ice_Alert *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_AlertDataReader_read_instance (
    ice_AlertDataReader _this,
    DDS_sequence_ice_Alert *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_AlertDataReader_take_instance (
    ice_AlertDataReader _this,
    DDS_sequence_ice_Alert *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_AlertDataReader_read_next_instance (
    ice_AlertDataReader _this,
    DDS_sequence_ice_Alert *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_AlertDataReader_take_next_instance (
    ice_AlertDataReader _this,
    DDS_sequence_ice_Alert *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_AlertDataReader_read_next_instance_w_condition (
    ice_AlertDataReader _this,
    DDS_sequence_ice_Alert *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_AlertDataReader_take_next_instance_w_condition (
    ice_AlertDataReader _this,
    DDS_sequence_ice_Alert *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_AlertDataReader_return_loan (
    ice_AlertDataReader _this,
    DDS_sequence_ice_Alert *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_AlertDataReader_get_key_value (
    ice_AlertDataReader _this,
    ice_Alert *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_AlertDataReader_lookup_instance (
    ice_AlertDataReader _this,
    const ice_Alert *key_holder
    );

#define ice_AlertDataReaderView DDS_DataReaderView

#define ice_AlertDataReaderView_enable DDS_Entity_enable

#define ice_AlertDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define ice_AlertDataReaderView_get_qos DDS_DataReaderView_get_qos

#define ice_AlertDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define ice_AlertDataReaderView_set_qos DDS_DataReaderView_set_qos

#define ice_AlertDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define ice_AlertDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define ice_AlertDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define ice_AlertDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
ice_AlertDataReaderView_read (
    ice_AlertDataReaderView _this,
    DDS_sequence_ice_Alert *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_AlertDataReaderView_take (
    ice_AlertDataReaderView _this,
    DDS_sequence_ice_Alert *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_AlertDataReaderView_read_next_sample (
    ice_AlertDataReaderView _this,
    ice_Alert *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_AlertDataReaderView_take_next_sample (
    ice_AlertDataReaderView _this,
    ice_Alert *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_AlertDataReaderView_read_instance (
    ice_AlertDataReaderView _this,
    DDS_sequence_ice_Alert *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_AlertDataReaderView_take_instance (
    ice_AlertDataReaderView _this,
    DDS_sequence_ice_Alert *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_AlertDataReaderView_read_next_instance (
    ice_AlertDataReaderView _this,
    DDS_sequence_ice_Alert *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_AlertDataReaderView_take_next_instance (
    ice_AlertDataReaderView _this,
    DDS_sequence_ice_Alert *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_AlertDataReaderView_return_loan (
    ice_AlertDataReaderView _this,
    DDS_sequence_ice_Alert *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_AlertDataReaderView_read_w_condition (
    ice_AlertDataReaderView _this,
    DDS_sequence_ice_Alert *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_AlertDataReaderView_take_w_condition (
    ice_AlertDataReaderView _this,
    DDS_sequence_ice_Alert *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_AlertDataReaderView_read_next_instance_w_condition (
    ice_AlertDataReaderView _this,
    DDS_sequence_ice_Alert *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_AlertDataReaderView_take_next_instance_w_condition (
    ice_AlertDataReaderView _this,
    DDS_sequence_ice_Alert *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_AlertDataReaderView_get_key_value (
    ice_AlertDataReaderView _this,
    ice_Alert *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_AlertDataReaderView_lookup_instance (
    ice_AlertDataReaderView _this,
    ice_Alert *key_holder
    );


#define ice_PatientTypeSupport DDS_TypeSupport

 ice_PatientTypeSupport
ice_PatientTypeSupport__alloc (
    void
    );

 DDS_ReturnCode_t
ice_PatientTypeSupport_register_type (
    ice_PatientTypeSupport _this,
    const DDS_DomainParticipant domain,
    const DDS_string name
    );

 DDS_string
ice_PatientTypeSupport_get_type_name (
    ice_PatientTypeSupport _this
    );

#ifndef _DDS_sequence_ice_Patient_defined
#define _DDS_sequence_ice_Patient_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    ice_Patient *_buffer;
    DDS_boolean _release;
} DDS_sequence_ice_Patient;

 DDS_sequence_ice_Patient *DDS_sequence_ice_Patient__alloc (void);
 ice_Patient *DDS_sequence_ice_Patient_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_ice_Patient_defined */

#define ice_PatientDataWriter DDS_DataWriter

#define ice_PatientDataWriter_enable DDS_Entity_enable

#define ice_PatientDataWriter_get_status_changes DDS_Entity_get_status_changes

#define ice_PatientDataWriter_get_statuscondition DDS_Entity_get_statuscondition

#define ice_PatientDataWriter_get_instance_handle DDS_Entity_get_instance_handle

#define ice_PatientDataWriter_assert_liveliness DDS_DataWriter_assert_liveliness

#define ice_PatientDataWriter_get_listener DDS_DataWriter_get_listener

#define ice_PatientDataWriter_get_liveliness_lost_status DDS_DataWriter_get_liveliness_lost_status

#define ice_PatientDataWriter_get_matched_subscription_data DDS_DataWriter_get_matched_subscription_data

#define ice_PatientDataWriter_get_matched_subscriptions DDS_DataWriter_get_matched_subscriptions

#define ice_PatientDataWriter_get_offered_deadline_missed_status DDS_DataWriter_get_offered_deadline_missed_status

#define ice_PatientDataWriter_get_offered_incompatible_qos_status DDS_DataWriter_get_offered_incompatible_qos_status

#define ice_PatientDataWriter_get_publication_matched_status DDS_DataWriter_get_publication_matched_status

#define ice_PatientDataWriter_get_publisher DDS_DataWriter_get_publisher

#define ice_PatientDataWriter_get_qos DDS_DataWriter_get_qos

#define ice_PatientDataWriter_get_topic DDS_DataWriter_get_topic

#define ice_PatientDataWriter_set_listener DDS_DataWriter_set_listener

#define ice_PatientDataWriter_set_qos DDS_DataWriter_set_qos

 DDS_InstanceHandle_t
ice_PatientDataWriter_register_instance (
    ice_PatientDataWriter _this,
    const ice_Patient *instance_data
    );

 DDS_InstanceHandle_t
ice_PatientDataWriter_register_instance_w_timestamp (
    ice_PatientDataWriter _this,
    const ice_Patient *instance_data,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_PatientDataWriter_unregister_instance (
    ice_PatientDataWriter _this,
    const ice_Patient *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_PatientDataWriter_unregister_instance_w_timestamp (
    ice_PatientDataWriter _this,
    const ice_Patient *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_PatientDataWriter_write (
    ice_PatientDataWriter _this,
    const ice_Patient *instance_data,
    const DDS_InstanceHandle_t handle
    );

 DDS_ReturnCode_t
ice_PatientDataWriter_write_w_timestamp (
    ice_PatientDataWriter _this,
    const ice_Patient *instance_data,
    const DDS_InstanceHandle_t handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_PatientDataWriter_dispose (
    ice_PatientDataWriter _this,
    const ice_Patient *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_PatientDataWriter_dispose_w_timestamp (
    ice_PatientDataWriter _this,
    const ice_Patient *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_PatientDataWriter_writedispose (
    ice_PatientDataWriter _this,
    const ice_Patient *instance_data,
    const DDS_InstanceHandle_t instance_handle
    );

 DDS_ReturnCode_t
ice_PatientDataWriter_writedispose_w_timestamp (
    ice_PatientDataWriter _this,
    const ice_Patient *instance_data,
    const DDS_InstanceHandle_t instance_handle,
    const DDS_Time_t *source_timestamp
    );

 DDS_ReturnCode_t
ice_PatientDataWriter_get_key_value (
    ice_PatientDataWriter _this,
    ice_Patient *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_PatientDataWriter_lookup_instance (
    ice_PatientDataWriter _this,
    const ice_Patient *key_holder
    );

#define ice_PatientDataReader DDS_DataReader

#define ice_PatientDataReader_enable DDS_Entity_enable

#define ice_PatientDataReader_get_status_changes DDS_Entity_get_status_changes

#define ice_PatientDataReader_get_statuscondition DDS_Entity_get_statuscondition

#define ice_PatientDataReader_get_instance_handle DDS_Entity_get_instance_handle

#define ice_PatientDataReader_create_querycondition DDS_DataReader_create_querycondition

#define ice_PatientDataReader_create_readcondition DDS_DataReader_create_readcondition

#define ice_PatientDataReader_delete_contained_entities DDS_DataReader_delete_contained_entities

#define ice_PatientDataReader_delete_readcondition DDS_DataReader_delete_readcondition

#define ice_PatientDataReader_get_listener DDS_DataReader_get_listener

#define ice_PatientDataReader_get_liveliness_changed_status DDS_DataReader_get_liveliness_changed_status

#define ice_PatientDataReader_get_matched_publication_data DDS_DataReader_get_matched_publication_data

#define ice_PatientDataReader_get_matched_publications DDS_DataReader_get_matched_publications

#define ice_PatientDataReader_get_qos DDS_DataReader_get_qos

#define ice_PatientDataReader_get_requested_deadline_missed_status DDS_DataReader_get_requested_deadline_missed_status

#define ice_PatientDataReader_get_requested_incompatible_qos_status DDS_DataReader_get_requested_incompatible_qos_status

#define ice_PatientDataReader_get_sample_lost_status DDS_DataReader_get_sample_lost_status

#define ice_PatientDataReader_get_sample_rejected_status DDS_DataReader_get_sample_rejected_status

#define ice_PatientDataReader_get_subscriber DDS_DataReader_get_subscriber

#define ice_PatientDataReader_get_subscription_matched_status DDS_DataReader_get_subscription_matched_status

#define ice_PatientDataReader_get_topicdescription DDS_DataReader_get_topicdescription

#define ice_PatientDataReader_set_listener DDS_DataReader_set_listener

#define ice_PatientDataReader_set_qos DDS_DataReader_set_qos

#define ice_PatientDataReader_wait_for_historical_data DDS_DataReader_wait_for_historical_data

 DDS_ReturnCode_t
ice_PatientDataReader_read (
    ice_PatientDataReader _this,
    DDS_sequence_ice_Patient *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_PatientDataReader_take (
    ice_PatientDataReader _this,
    DDS_sequence_ice_Patient *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_PatientDataReader_read_w_condition (
    ice_PatientDataReader _this,
    DDS_sequence_ice_Patient *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_PatientDataReader_take_w_condition (
    ice_PatientDataReader _this,
    DDS_sequence_ice_Patient *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_PatientDataReader_read_next_sample (
    ice_PatientDataReader _this,
    ice_Patient *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_PatientDataReader_take_next_sample (
    ice_PatientDataReader _this,
    ice_Patient *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_PatientDataReader_read_instance (
    ice_PatientDataReader _this,
    DDS_sequence_ice_Patient *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_PatientDataReader_take_instance (
    ice_PatientDataReader _this,
    DDS_sequence_ice_Patient *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_PatientDataReader_read_next_instance (
    ice_PatientDataReader _this,
    DDS_sequence_ice_Patient *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_PatientDataReader_take_next_instance (
    ice_PatientDataReader _this,
    DDS_sequence_ice_Patient *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_PatientDataReader_read_next_instance_w_condition (
    ice_PatientDataReader _this,
    DDS_sequence_ice_Patient *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_PatientDataReader_take_next_instance_w_condition (
    ice_PatientDataReader _this,
    DDS_sequence_ice_Patient *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_PatientDataReader_return_loan (
    ice_PatientDataReader _this,
    DDS_sequence_ice_Patient *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_PatientDataReader_get_key_value (
    ice_PatientDataReader _this,
    ice_Patient *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_PatientDataReader_lookup_instance (
    ice_PatientDataReader _this,
    const ice_Patient *key_holder
    );

#define ice_PatientDataReaderView DDS_DataReaderView

#define ice_PatientDataReaderView_enable DDS_Entity_enable

#define ice_PatientDataReaderView_get_instance_handle DDS_Entity_get_instance_handle

#define ice_PatientDataReaderView_get_qos DDS_DataReaderView_get_qos

#define ice_PatientDataReaderView_get_datareader DDS_DataReaderView_get_datareader

#define ice_PatientDataReaderView_set_qos DDS_DataReaderView_set_qos

#define ice_PatientDataReaderView_create_readcondition DDS_DataReaderView_create_readcondition

#define ice_PatientDataReaderView_create_querycondition DDS_DataReaderView_create_querycondition

#define ice_PatientDataReaderView_delete_readcondition DDS_DataReaderView_delete_readcondition

#define ice_PatientDataReaderView_delete_contained_entities DDS_DataReaderView_delete_contained_entities

 DDS_ReturnCode_t
ice_PatientDataReaderView_read (
    ice_PatientDataReaderView _this,
    DDS_sequence_ice_Patient *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_PatientDataReaderView_take (
    ice_PatientDataReaderView _this,
    DDS_sequence_ice_Patient *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_PatientDataReaderView_read_next_sample (
    ice_PatientDataReaderView _this,
    ice_Patient *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_PatientDataReaderView_take_next_sample (
    ice_PatientDataReaderView _this,
    ice_Patient *received_data,
    DDS_SampleInfo *sample_info
    );

 DDS_ReturnCode_t
ice_PatientDataReaderView_read_instance (
    ice_PatientDataReaderView _this,
    DDS_sequence_ice_Patient *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_PatientDataReaderView_take_instance (
    ice_PatientDataReaderView _this,
    DDS_sequence_ice_Patient *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_PatientDataReaderView_read_next_instance (
    ice_PatientDataReaderView _this,
    DDS_sequence_ice_Patient *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_PatientDataReaderView_take_next_instance (
    ice_PatientDataReaderView _this,
    DDS_sequence_ice_Patient *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_SampleStateMask sample_states,
    const DDS_ViewStateMask view_states,
    const DDS_InstanceStateMask instance_states
    );

 DDS_ReturnCode_t
ice_PatientDataReaderView_return_loan (
    ice_PatientDataReaderView _this,
    DDS_sequence_ice_Patient *received_data,
    DDS_SampleInfoSeq *info_seq
    );

 DDS_ReturnCode_t
ice_PatientDataReaderView_read_w_condition (
    ice_PatientDataReaderView _this,
    DDS_sequence_ice_Patient *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_PatientDataReaderView_take_w_condition (
    ice_PatientDataReaderView _this,
    DDS_sequence_ice_Patient *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_PatientDataReaderView_read_next_instance_w_condition (
    ice_PatientDataReaderView _this,
    DDS_sequence_ice_Patient *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_PatientDataReaderView_take_next_instance_w_condition (
    ice_PatientDataReaderView _this,
    DDS_sequence_ice_Patient *received_data,
    DDS_SampleInfoSeq *info_seq,
    const DDS_long max_samples,
    const DDS_InstanceHandle_t a_handle,
    const DDS_ReadCondition a_condition
    );

 DDS_ReturnCode_t
ice_PatientDataReaderView_get_key_value (
    ice_PatientDataReaderView _this,
    ice_Patient *key_holder,
    const DDS_InstanceHandle_t handle
    );

 DDS_InstanceHandle_t
ice_PatientDataReaderView_lookup_instance (
    ice_PatientDataReaderView _this,
    ice_Patient *key_holder
    );

#endif
