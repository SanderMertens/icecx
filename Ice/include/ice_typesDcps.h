#ifndef ICE_TYPESDCPS_H
#define ICE_TYPESDCPS_H

#include <dds_dcps.h>


typedef DDS_string ice_UniqueDeviceIdentifier;
 ice_UniqueDeviceIdentifier *ice_UniqueDeviceIdentifier__alloc (DDS_unsigned_long len);

typedef DDS_string ice_MetricIdentifier;
 ice_MetricIdentifier *ice_MetricIdentifier__alloc (DDS_unsigned_long len);

typedef DDS_string ice_VendorMetricIdentifier;
 ice_VendorMetricIdentifier *ice_VendorMetricIdentifier__alloc (DDS_unsigned_long len);

typedef DDS_long ice_InstanceIdentifier;
 ice_InstanceIdentifier *ice_InstanceIdentifier__alloc (void);

typedef DDS_string ice_UnitIdentifier;
 ice_UnitIdentifier *ice_UnitIdentifier__alloc (DDS_unsigned_long len);

#ifndef _ice_utf32char_defined
#define _ice_utf32char_defined
#ifdef __cplusplus
struct ice_utf32char;
#else /* __cplusplus */
typedef struct ice_utf32char ice_utf32char;
#endif /* __cplusplus */
#endif /* _ice_utf32char_defined */
 ice_utf32char *ice_utf32char__alloc (void);

struct ice_utf32char {
    DDS_octet value[4];
};

/* Definition for sequence of ice_utf32char */
#ifndef _DDS_sequence_ice_utf32char_defined
#define _DDS_sequence_ice_utf32char_defined
#ifndef _ice_utf32char_defined
#define _ice_utf32char_defined
typedef struct ice_utf32char ice_utf32char;
#endif /* _ice_utf32char_defined */
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    ice_utf32char *_buffer;
    DDS_boolean _release;
} DDS_sequence_ice_utf32char;
 DDS_sequence_ice_utf32char *DDS_sequence_ice_utf32char__alloc (void);
 ice_utf32char *DDS_sequence_ice_utf32char_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_ice_utf32char_defined */

typedef DDS_sequence_ice_utf32char ice_LongString;
 ice_LongString *ice_LongString__alloc (void);
 ice_utf32char *ice_LongString_allocbuf (DDS_unsigned_long len);

typedef DDS_sequence_ice_utf32char ice_VeryLongString;
 ice_VeryLongString *ice_VeryLongString__alloc (void);
 ice_utf32char *ice_VeryLongString_allocbuf (DDS_unsigned_long len);

typedef DDS_sequence_octet ice_ImageData;
 ice_ImageData *ice_ImageData__alloc (void);
 DDS_octet *ice_ImageData_allocbuf (DDS_unsigned_long len);

/* Definition for sequence of DDS_float */
#ifndef _DDS_sequence_float_defined
#define _DDS_sequence_float_defined
typedef struct {
    DDS_unsigned_long _maximum;
    DDS_unsigned_long _length;
    DDS_float *_buffer;
    DDS_boolean _release;
} DDS_sequence_float;
 DDS_sequence_float *DDS_sequence_float__alloc (void);
 DDS_float *DDS_sequence_float_allocbuf (DDS_unsigned_long len);
#endif /* _DDS_sequence_float_defined */

typedef DDS_sequence_float ice_Values;
 ice_Values *ice_Values__alloc (void);
 DDS_float *ice_Values_allocbuf (DDS_unsigned_long len);

#ifndef _ice_Time_t_defined
#define _ice_Time_t_defined
#ifdef __cplusplus
struct ice_Time_t;
#else /* __cplusplus */
typedef struct ice_Time_t ice_Time_t;
#endif /* __cplusplus */
#endif /* _ice_Time_t_defined */
 ice_Time_t *ice_Time_t__alloc (void);

struct ice_Time_t {
    DDS_long sec;
    DDS_long nanosec;
};

#ifndef _ice_HeartBeat_defined
#define _ice_HeartBeat_defined
#ifdef __cplusplus
struct ice_HeartBeat;
#else /* __cplusplus */
typedef struct ice_HeartBeat ice_HeartBeat;
#endif /* __cplusplus */
#endif /* _ice_HeartBeat_defined */
 ice_HeartBeat *ice_HeartBeat__alloc (void);

struct ice_HeartBeat {
    ice_UniqueDeviceIdentifier unique_device_identifier;
    DDS_string type;
};

#define ice_HeartBeatTopic             "HeartBeat"

#ifndef _ice_TimeSync_defined
#define _ice_TimeSync_defined
#ifdef __cplusplus
struct ice_TimeSync;
#else /* __cplusplus */
typedef struct ice_TimeSync ice_TimeSync;
#endif /* __cplusplus */
#endif /* _ice_TimeSync_defined */
 ice_TimeSync *ice_TimeSync__alloc (void);

struct ice_TimeSync {
    ice_UniqueDeviceIdentifier heartbeat_source;
    ice_UniqueDeviceIdentifier heartbeat_recipient;
    ice_Time_t source_source_timestamp;
    ice_Time_t recipient_receipt_timestamp;
};

#define ice_TimeSyncTopic              "TimeSync"

#ifndef _ice_Image_defined
#define _ice_Image_defined
#ifdef __cplusplus
struct ice_Image;
#else /* __cplusplus */
typedef struct ice_Image ice_Image;
#endif /* __cplusplus */
#endif /* _ice_Image_defined */
 ice_Image *ice_Image__alloc (void);

struct ice_Image {
    DDS_string content_type;
    ice_ImageData image;
};

#ifndef _ice_DeviceIdentity_defined
#define _ice_DeviceIdentity_defined
#ifdef __cplusplus
struct ice_DeviceIdentity;
#else /* __cplusplus */
typedef struct ice_DeviceIdentity ice_DeviceIdentity;
#endif /* __cplusplus */
#endif /* _ice_DeviceIdentity_defined */
 ice_DeviceIdentity *ice_DeviceIdentity__alloc (void);

struct ice_DeviceIdentity {
    ice_UniqueDeviceIdentifier unique_device_identifier;
    ice_LongString manufacturer;
    ice_LongString model;
    ice_LongString serial_number;
    ice_Image icon;
    DDS_string build;
    DDS_string operating_system;
};

#define ice_DeviceIdentityTopic        "DeviceIdentity"

enum ice_ConnectionState_e {
    ice_Initial,
    ice_Connected,
    ice_Connecting,
    ice_Negotiating,
    ice_Terminal
};
typedef enum ice_ConnectionState_e ice_ConnectionState;

enum ice_ConnectionType_e {
    ice_Serial,
    ice_Simulated,
    ice_Network
};
typedef enum ice_ConnectionType_e ice_ConnectionType;

#ifndef _ice_DeviceConnectivity_defined
#define _ice_DeviceConnectivity_defined
#ifdef __cplusplus
struct ice_DeviceConnectivity;
#else /* __cplusplus */
typedef struct ice_DeviceConnectivity ice_DeviceConnectivity;
#endif /* __cplusplus */
#endif /* _ice_DeviceConnectivity_defined */
 ice_DeviceConnectivity *ice_DeviceConnectivity__alloc (void);

struct ice_DeviceConnectivity {
    ice_UniqueDeviceIdentifier unique_device_identifier;
    ice_ConnectionState state;
    ice_ConnectionType type;
    ice_LongString info;
};

#define ice_DeviceConnectivityTopic    "DeviceConnectivity"

#ifndef _ice_MDSConnectivity_defined
#define _ice_MDSConnectivity_defined
#ifdef __cplusplus
struct ice_MDSConnectivity;
#else /* __cplusplus */
typedef struct ice_MDSConnectivity ice_MDSConnectivity;
#endif /* __cplusplus */
#endif /* _ice_MDSConnectivity_defined */
 ice_MDSConnectivity *ice_MDSConnectivity__alloc (void);

struct ice_MDSConnectivity {
    ice_UniqueDeviceIdentifier unique_device_identifier;
    DDS_string partition;
};

#define ice_MDSConnectivityTopic       "MDSConnectivity"

#ifndef _ice_MDSConnectivityObjective_defined
#define _ice_MDSConnectivityObjective_defined
#ifdef __cplusplus
struct ice_MDSConnectivityObjective;
#else /* __cplusplus */
typedef struct ice_MDSConnectivityObjective ice_MDSConnectivityObjective;
#endif /* __cplusplus */
#endif /* _ice_MDSConnectivityObjective_defined */
 ice_MDSConnectivityObjective *ice_MDSConnectivityObjective__alloc (void);

struct ice_MDSConnectivityObjective {
    ice_UniqueDeviceIdentifier unique_device_identifier;
    DDS_string partition;
};

#define ice_MDSConnectivityObjectiveTopic "MDSConnectivityObjective"

#define ice_MDC_PRESS_CUFF_NEXT_INFLATION "MDC_PRESS_CUFF_NEXT_INFLATION"

#define ice_MDC_PRESS_CUFF_INFLATION   "MDC_PRESS_CUFF_INFLATION"

#define ice_MDC_HR_ECG_MODE            "MDC_HR_ECG_MODE"

#define ice_MDC_RR_APNEA               "MDC_RR_APNEA"

#define ice_MDC_SPO2_C_LOCK            "MDC_SPO2_C_LOCK"

#define ice_MDC_TIME_PD_INSPIRATORY    "MDC_TIME_PD_INSPIRATORY"

#define ice_MDC_START_INSPIRATORY_CYCLE "MDC_START_INSPIRATORY_CYCLE"

#define ice_MDC_START_EXPIRATORY_CYCLE "MDC_START_EXPIRATORY_CYCLE"

#define ice_MDC_END_OF_BREATH          "MDC_END_OF_BREATH"

#define ice_MDC_VENT_TIME_PD_PPV       "MDC_VENT_TIME_PD_PPV"

#define ice_MDC_EVT_STAT_NBP_DEFL_AND_MEAS_BP 6250L

#define ice_MDC_EVT_STAT_NBP_INFL_TO_MAX_CUFF_PRESS 6222L

#define ice_MDC_EVT_STAT_OFF           6226L

#define ice_MDC_ECG_LEAD_I             "MDC_ECG_LEAD_I"

#define ice_MDC_ECG_LEAD_II            "MDC_ECG_LEAD_II"

#define ice_MDC_ECG_LEAD_III           "MDC_ECG_LEAD_III"

#define ice_MDC_ECG_LEAD_V1            "MDC_ECG_LEAD_V1"

#define ice_MDC_ECG_LEAD_V2            "MDC_ECG_LEAD_V2"

#define ice_MDC_ECG_LEAD_V3            "MDC_ECG_LEAD_V3"

#define ice_MDC_ECG_LEAD_V4            "MDC_ECG_LEAD_V4"

#define ice_MDC_ECG_LEAD_V5            "MDC_ECG_LEAD_V5"

#define ice_MDC_ECG_LEAD_V6            "MDC_ECG_LEAD_V6"

#define ice_MDC_ECG_LEAD_AVR           "MDC_ECG_LEAD_AVR"

#define ice_MDC_ECG_LEAD_AVF           "MDC_ECG_LEAD_AVF"

#define ice_MDC_ECG_LEAD_AVL           "MDC_ECG_LEAD_AVL"

#ifndef _ice_Numeric_defined
#define _ice_Numeric_defined
#ifdef __cplusplus
struct ice_Numeric;
#else /* __cplusplus */
typedef struct ice_Numeric ice_Numeric;
#endif /* __cplusplus */
#endif /* _ice_Numeric_defined */
 ice_Numeric *ice_Numeric__alloc (void);

struct ice_Numeric {
    ice_UniqueDeviceIdentifier unique_device_identifier;
    ice_MetricIdentifier metric_id;
    ice_VendorMetricIdentifier vendor_metric_id;
    ice_InstanceIdentifier instance_id;
    ice_UnitIdentifier unit_id;
    DDS_float value;
    ice_Time_t device_time;
    ice_Time_t presentation_time;
};

#define ice_NumericTopic               "Numeric"

#ifndef _ice_SampleArray_defined
#define _ice_SampleArray_defined
#ifdef __cplusplus
struct ice_SampleArray;
#else /* __cplusplus */
typedef struct ice_SampleArray ice_SampleArray;
#endif /* __cplusplus */
#endif /* _ice_SampleArray_defined */
 ice_SampleArray *ice_SampleArray__alloc (void);

struct ice_SampleArray {
    ice_UniqueDeviceIdentifier unique_device_identifier;
    ice_MetricIdentifier metric_id;
    ice_VendorMetricIdentifier vendor_metric_id;
    ice_InstanceIdentifier instance_id;
    ice_UnitIdentifier unit_id;
    DDS_long frequency;
    ice_Values values;
    ice_Time_t device_time;
    ice_Time_t presentation_time;
};

#define ice_SampleArrayTopic           "SampleArray"

#ifndef _ice_InfusionObjective_defined
#define _ice_InfusionObjective_defined
#ifdef __cplusplus
struct ice_InfusionObjective;
#else /* __cplusplus */
typedef struct ice_InfusionObjective ice_InfusionObjective;
#endif /* __cplusplus */
#endif /* _ice_InfusionObjective_defined */
 ice_InfusionObjective *ice_InfusionObjective__alloc (void);

struct ice_InfusionObjective {
    ice_UniqueDeviceIdentifier unique_device_identifier;
    ice_LongString requestor;
    DDS_boolean stopInfusion;
};

#define ice_InfusionObjectiveTopic     "InfusionObjective"

#ifndef _ice_InfusionStatus_defined
#define _ice_InfusionStatus_defined
#ifdef __cplusplus
struct ice_InfusionStatus;
#else /* __cplusplus */
typedef struct ice_InfusionStatus ice_InfusionStatus;
#endif /* __cplusplus */
#endif /* _ice_InfusionStatus_defined */
 ice_InfusionStatus *ice_InfusionStatus__alloc (void);

struct ice_InfusionStatus {
    ice_UniqueDeviceIdentifier unique_device_identifier;
    DDS_boolean infusionActive;
    ice_LongString drug_name;
    DDS_long drug_mass_mcg;
    DDS_long solution_volume_ml;
    DDS_long volume_to_be_infused_ml;
    DDS_long infusion_duration_seconds;
    DDS_float infusion_fraction_complete;
};

#define ice_InfusionStatusTopic        "InfusionStatus"

enum ice_LimitType_e {
    ice_low_limit,
    ice_high_limit
};
typedef enum ice_LimitType_e ice_LimitType;

enum ice_AlarmPriority_e {
    ice_low,
    ice_medium,
    ice_high
};
typedef enum ice_AlarmPriority_e ice_AlarmPriority;

#ifndef _ice_AlarmLimit_defined
#define _ice_AlarmLimit_defined
#ifdef __cplusplus
struct ice_AlarmLimit;
#else /* __cplusplus */
typedef struct ice_AlarmLimit ice_AlarmLimit;
#endif /* __cplusplus */
#endif /* _ice_AlarmLimit_defined */
 ice_AlarmLimit *ice_AlarmLimit__alloc (void);

struct ice_AlarmLimit {
    ice_UniqueDeviceIdentifier unique_device_identifier;
    ice_MetricIdentifier metric_id;
    ice_LimitType limit_type;
    ice_UnitIdentifier unit_identifier;
    DDS_float value;
};

#define ice_AlarmLimitTopic            "AlarmLimit"

#ifndef _ice_GlobalAlarmLimitObjective_defined
#define _ice_GlobalAlarmLimitObjective_defined
#ifdef __cplusplus
struct ice_GlobalAlarmLimitObjective;
#else /* __cplusplus */
typedef struct ice_GlobalAlarmLimitObjective ice_GlobalAlarmLimitObjective;
#endif /* __cplusplus */
#endif /* _ice_GlobalAlarmLimitObjective_defined */
 ice_GlobalAlarmLimitObjective *ice_GlobalAlarmLimitObjective__alloc (void);

struct ice_GlobalAlarmLimitObjective {
    ice_MetricIdentifier metric_id;
    ice_LimitType limit_type;
    ice_UnitIdentifier unit_identifier;
    DDS_float value;
};

#define ice_GlobalAlarmLimitObjectiveTopic "GlobalAlarmLimitObjective"

#ifndef _ice_LocalAlarmLimitObjective_defined
#define _ice_LocalAlarmLimitObjective_defined
#ifdef __cplusplus
struct ice_LocalAlarmLimitObjective;
#else /* __cplusplus */
typedef struct ice_LocalAlarmLimitObjective ice_LocalAlarmLimitObjective;
#endif /* __cplusplus */
#endif /* _ice_LocalAlarmLimitObjective_defined */
 ice_LocalAlarmLimitObjective *ice_LocalAlarmLimitObjective__alloc (void);

struct ice_LocalAlarmLimitObjective {
    ice_UniqueDeviceIdentifier unique_device_identifier;
    ice_MetricIdentifier metric_id;
    ice_LimitType limit_type;
    ice_UnitIdentifier unit_identifier;
    DDS_float value;
};

#define ice_LocalAlarmLimitObjectiveTopic "LocalAlarmLimitObjective"

#ifndef _ice_DeviceAlertCondition_defined
#define _ice_DeviceAlertCondition_defined
#ifdef __cplusplus
struct ice_DeviceAlertCondition;
#else /* __cplusplus */
typedef struct ice_DeviceAlertCondition ice_DeviceAlertCondition;
#endif /* __cplusplus */
#endif /* _ice_DeviceAlertCondition_defined */
 ice_DeviceAlertCondition *ice_DeviceAlertCondition__alloc (void);

struct ice_DeviceAlertCondition {
    ice_UniqueDeviceIdentifier unique_device_identifier;
    DDS_string alert_state;
};

#define ice_DeviceAlertConditionTopic  "DeviceAlertCondition"

#ifndef _ice_Alert_defined
#define _ice_Alert_defined
#ifdef __cplusplus
struct ice_Alert;
#else /* __cplusplus */
typedef struct ice_Alert ice_Alert;
#endif /* __cplusplus */
#endif /* _ice_Alert_defined */
 ice_Alert *ice_Alert__alloc (void);

struct ice_Alert {
    ice_UniqueDeviceIdentifier unique_device_identifier;
    DDS_string identifier;
    DDS_string text;
};

#define ice_PatientAlertTopic          "PatientAlert"

#define ice_TechnicalAlertTopic        "TechnicalAlert"

#ifndef _ice_Patient_defined
#define _ice_Patient_defined
#ifdef __cplusplus
struct ice_Patient;
#else /* __cplusplus */
typedef struct ice_Patient ice_Patient;
#endif /* __cplusplus */
#endif /* _ice_Patient_defined */
 ice_Patient *ice_Patient__alloc (void);

struct ice_Patient {
    DDS_string mrn;
    ice_VeryLongString given_name;
    ice_VeryLongString family_name;
};

#define ice_PatientTopic               "Patient"

#endif
