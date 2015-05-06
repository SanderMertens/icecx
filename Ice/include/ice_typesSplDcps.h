#ifndef ICE_TYPESSPLTYPES_H
#define ICE_TYPESSPLTYPES_H

#include "ice_typesDcps.h"

#include <c_base.h>
#include <c_misc.h>
#include <c_sync.h>
#include <c_collection.h>
#include <c_field.h>

extern c_metaObject __ice_types_ice__load (c_base base);

extern c_metaObject __ice_UniqueDeviceIdentifier__load (c_base base);
typedef c_string _ice_UniqueDeviceIdentifier;

extern c_metaObject __ice_MetricIdentifier__load (c_base base);
typedef c_string _ice_MetricIdentifier;

extern c_metaObject __ice_VendorMetricIdentifier__load (c_base base);
typedef c_string _ice_VendorMetricIdentifier;

extern c_metaObject __ice_InstanceIdentifier__load (c_base base);
typedef c_long _ice_InstanceIdentifier;

extern c_metaObject __ice_UnitIdentifier__load (c_base base);
typedef c_string _ice_UnitIdentifier;

extern c_metaObject __ice_LongString__load (c_base base);
typedef c_string _ice_LongString;

extern c_metaObject __ice_ValidTargets__load (c_base base);
typedef c_sequence _ice_ValidTargets;

extern c_metaObject __ice_ImageData__load (c_base base);
typedef c_sequence _ice_ImageData;

extern c_metaObject __ice_Values__load (c_base base);
typedef c_sequence _ice_Values;

extern const char *ice_Time_t_metaDescriptor[];
extern const c_ulong ice_Time_t_metaDescriptorArrLength;
extern c_metaObject __ice_Time_t__load (c_base base);
extern const char * __ice_Time_t__keys (void);
extern const char * __ice_Time_t__name (void);
struct _ice_Time_t ;
extern  c_bool __ice_Time_t__copyIn(c_base base, void *from, void *to);
extern  void __ice_Time_t__copyOut(void *_from, void *_to);
struct _ice_Time_t {
    c_long sec;
    c_long nanosec;
};

extern const char *ice_HeartBeat_metaDescriptor[];
extern const c_ulong ice_HeartBeat_metaDescriptorArrLength;
extern c_metaObject __ice_HeartBeat__load (c_base base);
extern const char * __ice_HeartBeat__keys (void);
extern const char * __ice_HeartBeat__name (void);
struct _ice_HeartBeat ;
extern  c_bool __ice_HeartBeat__copyIn(c_base base, void *from, void *to);
extern  void __ice_HeartBeat__copyOut(void *_from, void *_to);
struct _ice_HeartBeat {
    _ice_UniqueDeviceIdentifier unique_device_identifier;
    c_string type;
};

extern const char *ice_TimeSync_metaDescriptor[];
extern const c_ulong ice_TimeSync_metaDescriptorArrLength;
extern c_metaObject __ice_TimeSync__load (c_base base);
extern const char * __ice_TimeSync__keys (void);
extern const char * __ice_TimeSync__name (void);
struct _ice_TimeSync ;
extern  c_bool __ice_TimeSync__copyIn(c_base base, void *from, void *to);
extern  void __ice_TimeSync__copyOut(void *_from, void *_to);
struct _ice_TimeSync {
    _ice_UniqueDeviceIdentifier heartbeat_source;
    _ice_UniqueDeviceIdentifier heartbeat_recipient;
    struct _ice_Time_t source_source_timestamp;
    struct _ice_Time_t recipient_receipt_timestamp;
};

extern const char *ice_Image_metaDescriptor[];
extern const c_ulong ice_Image_metaDescriptorArrLength;
extern c_metaObject __ice_Image__load (c_base base);
extern const char * __ice_Image__keys (void);
extern const char * __ice_Image__name (void);
struct _ice_Image ;
extern  c_bool __ice_Image__copyIn(c_base base, void *from, void *to);
extern  void __ice_Image__copyOut(void *_from, void *_to);
struct _ice_Image {
    c_string content_type;
    _ice_ImageData image;
};

extern const char *ice_DeviceIdentity_metaDescriptor[];
extern const c_ulong ice_DeviceIdentity_metaDescriptorArrLength;
extern c_metaObject __ice_DeviceIdentity__load (c_base base);
extern const char * __ice_DeviceIdentity__keys (void);
extern const char * __ice_DeviceIdentity__name (void);
struct _ice_DeviceIdentity ;
extern  c_bool __ice_DeviceIdentity__copyIn(c_base base, void *from, void *to);
extern  void __ice_DeviceIdentity__copyOut(void *_from, void *_to);
struct _ice_DeviceIdentity {
    _ice_UniqueDeviceIdentifier unique_device_identifier;
    _ice_LongString manufacturer;
    _ice_LongString model;
    _ice_LongString serial_number;
    struct _ice_Image icon;
    c_string build;
    c_string operating_system;
};

extern c_metaObject __ice_ConnectionState__load (c_base base);
enum _ice_ConnectionState {
    _ice_Initial,
    _ice_Connected,
    _ice_Connecting,
    _ice_Negotiating,
    _ice_Terminal
};

extern c_metaObject __ice_ConnectionType__load (c_base base);
enum _ice_ConnectionType {
    _ice_Serial,
    _ice_Simulated,
    _ice_Network
};

extern const char *ice_DeviceConnectivity_metaDescriptor[];
extern const c_ulong ice_DeviceConnectivity_metaDescriptorArrLength;
extern c_metaObject __ice_DeviceConnectivity__load (c_base base);
extern const char * __ice_DeviceConnectivity__keys (void);
extern const char * __ice_DeviceConnectivity__name (void);
struct _ice_DeviceConnectivity ;
extern  c_bool __ice_DeviceConnectivity__copyIn(c_base base, void *from, void *to);
extern  void __ice_DeviceConnectivity__copyOut(void *_from, void *_to);
struct _ice_DeviceConnectivity {
    _ice_UniqueDeviceIdentifier unique_device_identifier;
    enum _ice_ConnectionState state;
    enum _ice_ConnectionType type;
    _ice_LongString info;
    _ice_ValidTargets valid_targets;
};

extern const char *ice_MDSConnectivity_metaDescriptor[];
extern const c_ulong ice_MDSConnectivity_metaDescriptorArrLength;
extern c_metaObject __ice_MDSConnectivity__load (c_base base);
extern const char * __ice_MDSConnectivity__keys (void);
extern const char * __ice_MDSConnectivity__name (void);
struct _ice_MDSConnectivity ;
extern  c_bool __ice_MDSConnectivity__copyIn(c_base base, void *from, void *to);
extern  void __ice_MDSConnectivity__copyOut(void *_from, void *_to);
struct _ice_MDSConnectivity {
    _ice_UniqueDeviceIdentifier unique_device_identifier;
    c_string partition;
};

extern const char *ice_MDSConnectivityObjective_metaDescriptor[];
extern const c_ulong ice_MDSConnectivityObjective_metaDescriptorArrLength;
extern c_metaObject __ice_MDSConnectivityObjective__load (c_base base);
extern const char * __ice_MDSConnectivityObjective__keys (void);
extern const char * __ice_MDSConnectivityObjective__name (void);
struct _ice_MDSConnectivityObjective ;
extern  c_bool __ice_MDSConnectivityObjective__copyIn(c_base base, void *from, void *to);
extern  void __ice_MDSConnectivityObjective__copyOut(void *_from, void *_to);
struct _ice_MDSConnectivityObjective {
    _ice_UniqueDeviceIdentifier unique_device_identifier;
    c_string partition;
};

extern const char *ice_Numeric_metaDescriptor[];
extern const c_ulong ice_Numeric_metaDescriptorArrLength;
extern c_metaObject __ice_Numeric__load (c_base base);
extern const char * __ice_Numeric__keys (void);
extern const char * __ice_Numeric__name (void);
struct _ice_Numeric ;
extern  c_bool __ice_Numeric__copyIn(c_base base, void *from, void *to);
extern  void __ice_Numeric__copyOut(void *_from, void *_to);
struct _ice_Numeric {
    _ice_UniqueDeviceIdentifier unique_device_identifier;
    _ice_MetricIdentifier metric_id;
    _ice_VendorMetricIdentifier vendor_metric_id;
    _ice_InstanceIdentifier instance_id;
    _ice_UnitIdentifier unit_id;
    c_float value;
    struct _ice_Time_t device_time;
    struct _ice_Time_t presentation_time;
};

extern const char *ice_SampleArray_metaDescriptor[];
extern const c_ulong ice_SampleArray_metaDescriptorArrLength;
extern c_metaObject __ice_SampleArray__load (c_base base);
extern const char * __ice_SampleArray__keys (void);
extern const char * __ice_SampleArray__name (void);
struct _ice_SampleArray ;
extern  c_bool __ice_SampleArray__copyIn(c_base base, void *from, void *to);
extern  void __ice_SampleArray__copyOut(void *_from, void *_to);
struct _ice_SampleArray {
    _ice_UniqueDeviceIdentifier unique_device_identifier;
    _ice_MetricIdentifier metric_id;
    _ice_VendorMetricIdentifier vendor_metric_id;
    _ice_InstanceIdentifier instance_id;
    _ice_UnitIdentifier unit_id;
    c_long frequency;
    _ice_Values values;
    struct _ice_Time_t device_time;
    struct _ice_Time_t presentation_time;
};

extern const char *ice_InfusionObjective_metaDescriptor[];
extern const c_ulong ice_InfusionObjective_metaDescriptorArrLength;
extern c_metaObject __ice_InfusionObjective__load (c_base base);
extern const char * __ice_InfusionObjective__keys (void);
extern const char * __ice_InfusionObjective__name (void);
struct _ice_InfusionObjective ;
extern  c_bool __ice_InfusionObjective__copyIn(c_base base, void *from, void *to);
extern  void __ice_InfusionObjective__copyOut(void *_from, void *_to);
struct _ice_InfusionObjective {
    _ice_UniqueDeviceIdentifier unique_device_identifier;
    _ice_LongString requestor;
    c_bool stopInfusion;
};

extern const char *ice_InfusionStatus_metaDescriptor[];
extern const c_ulong ice_InfusionStatus_metaDescriptorArrLength;
extern c_metaObject __ice_InfusionStatus__load (c_base base);
extern const char * __ice_InfusionStatus__keys (void);
extern const char * __ice_InfusionStatus__name (void);
struct _ice_InfusionStatus ;
extern  c_bool __ice_InfusionStatus__copyIn(c_base base, void *from, void *to);
extern  void __ice_InfusionStatus__copyOut(void *_from, void *_to);
struct _ice_InfusionStatus {
    _ice_UniqueDeviceIdentifier unique_device_identifier;
    c_bool infusionActive;
    c_string drug_name;
    c_long drug_mass_mcg;
    c_long solution_volume_ml;
    c_long volume_to_be_infused_ml;
    c_long infusion_duration_seconds;
    c_float infusion_fraction_complete;
};

extern c_metaObject __ice_LimitType__load (c_base base);
enum _ice_LimitType {
    _ice_low_limit,
    _ice_high_limit
};

extern c_metaObject __ice_AlarmPriority__load (c_base base);
enum _ice_AlarmPriority {
    _ice_low,
    _ice_medium,
    _ice_high
};

extern const char *ice_AlarmLimit_metaDescriptor[];
extern const c_ulong ice_AlarmLimit_metaDescriptorArrLength;
extern c_metaObject __ice_AlarmLimit__load (c_base base);
extern const char * __ice_AlarmLimit__keys (void);
extern const char * __ice_AlarmLimit__name (void);
struct _ice_AlarmLimit ;
extern  c_bool __ice_AlarmLimit__copyIn(c_base base, void *from, void *to);
extern  void __ice_AlarmLimit__copyOut(void *_from, void *_to);
struct _ice_AlarmLimit {
    _ice_UniqueDeviceIdentifier unique_device_identifier;
    _ice_MetricIdentifier metric_id;
    enum _ice_LimitType limit_type;
    _ice_UnitIdentifier unit_identifier;
    c_float value;
};

extern const char *ice_GlobalAlarmLimitObjective_metaDescriptor[];
extern const c_ulong ice_GlobalAlarmLimitObjective_metaDescriptorArrLength;
extern c_metaObject __ice_GlobalAlarmLimitObjective__load (c_base base);
extern const char * __ice_GlobalAlarmLimitObjective__keys (void);
extern const char * __ice_GlobalAlarmLimitObjective__name (void);
struct _ice_GlobalAlarmLimitObjective ;
extern  c_bool __ice_GlobalAlarmLimitObjective__copyIn(c_base base, void *from, void *to);
extern  void __ice_GlobalAlarmLimitObjective__copyOut(void *_from, void *_to);
struct _ice_GlobalAlarmLimitObjective {
    _ice_MetricIdentifier metric_id;
    enum _ice_LimitType limit_type;
    _ice_UnitIdentifier unit_identifier;
    c_float value;
};

extern const char *ice_LocalAlarmLimitObjective_metaDescriptor[];
extern const c_ulong ice_LocalAlarmLimitObjective_metaDescriptorArrLength;
extern c_metaObject __ice_LocalAlarmLimitObjective__load (c_base base);
extern const char * __ice_LocalAlarmLimitObjective__keys (void);
extern const char * __ice_LocalAlarmLimitObjective__name (void);
struct _ice_LocalAlarmLimitObjective ;
extern  c_bool __ice_LocalAlarmLimitObjective__copyIn(c_base base, void *from, void *to);
extern  void __ice_LocalAlarmLimitObjective__copyOut(void *_from, void *_to);
struct _ice_LocalAlarmLimitObjective {
    _ice_UniqueDeviceIdentifier unique_device_identifier;
    _ice_MetricIdentifier metric_id;
    enum _ice_LimitType limit_type;
    _ice_UnitIdentifier unit_identifier;
    c_float value;
};

extern const char *ice_DeviceAlertCondition_metaDescriptor[];
extern const c_ulong ice_DeviceAlertCondition_metaDescriptorArrLength;
extern c_metaObject __ice_DeviceAlertCondition__load (c_base base);
extern const char * __ice_DeviceAlertCondition__keys (void);
extern const char * __ice_DeviceAlertCondition__name (void);
struct _ice_DeviceAlertCondition ;
extern  c_bool __ice_DeviceAlertCondition__copyIn(c_base base, void *from, void *to);
extern  void __ice_DeviceAlertCondition__copyOut(void *_from, void *_to);
struct _ice_DeviceAlertCondition {
    _ice_UniqueDeviceIdentifier unique_device_identifier;
    c_string alert_state;
};

extern const char *ice_Alert_metaDescriptor[];
extern const c_ulong ice_Alert_metaDescriptorArrLength;
extern c_metaObject __ice_Alert__load (c_base base);
extern const char * __ice_Alert__keys (void);
extern const char * __ice_Alert__name (void);
struct _ice_Alert ;
extern  c_bool __ice_Alert__copyIn(c_base base, void *from, void *to);
extern  void __ice_Alert__copyOut(void *_from, void *_to);
struct _ice_Alert {
    _ice_UniqueDeviceIdentifier unique_device_identifier;
    c_string identifier;
    c_string text;
};

extern const char *ice_Patient_metaDescriptor[];
extern const c_ulong ice_Patient_metaDescriptorArrLength;
extern c_metaObject __ice_Patient__load (c_base base);
extern const char * __ice_Patient__keys (void);
extern const char * __ice_Patient__name (void);
struct _ice_Patient ;
extern  c_bool __ice_Patient__copyIn(c_base base, void *from, void *to);
extern  void __ice_Patient__copyOut(void *_from, void *_to);
struct _ice_Patient {
    c_string mrn;
    c_string given_name;
    c_string family_name;
};

#endif
