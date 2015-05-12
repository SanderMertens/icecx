/* Ice__type.h
 *
 *    Type-definitions for C-language.
 *    This file contains generated code. Do not modify!
 */

#ifndef Ice__type_H
#define Ice__type_H

#include "cortex.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Casting macro's for classes */
#define Ice_DdsConnector(o) ((Ice_DdsConnector)cx_assertType((cx_type)Ice_DdsConnector_o, o))
#define Ice_Device(o) ((Ice_Device)cx_assertType((cx_type)Ice_Device_o, o))
#define Ice_Numeric(o) ((Ice_Numeric)cx_assertType((cx_type)Ice_Numeric_o, o))

/* Type definitions */
/* ::Ice::ConnectionState */
typedef enum Ice_ConnectionState {
    Ice_Connected = 0,
    Ice_Negotiating = 1,
    Ice_Disconnected = 2
} Ice_ConnectionState;

/* ::Ice::Participant */
typedef uintptr_t Ice_Participant;

/* ::Ice::Subscriber */
typedef uintptr_t Ice_Subscriber;

/* ::Ice::Topic */
typedef uintptr_t Ice_Topic;

/* ::Ice::Reader */
typedef uintptr_t Ice_Reader;

/*  ::Ice::DdsConnector */
CX_CLASS(Ice_DdsConnector);

CX_CLASS_DEF(Ice_DdsConnector) {
    cx_int32 domainId;
    cx_string partition;
    cx_object deviceCache;
    cx_object numericCache;
    Ice_Participant dp;
    Ice_Subscriber sub;
    Ice_Topic topic_deviceIdentity;
    Ice_Reader dr_deviceIdentity;
    Ice_Reader dr_deviceConnectivity;
    Ice_Reader dr_numeric;
    Ice_Reader dr_sampleArray;
};

CX_SEQUENCE(cx_octet_seq65530, cx_octet,);

/*  ::Ice::Image */
typedef struct Ice_Image Ice_Image;

struct Ice_Image {
    cx_string content_type;
    cx_octet_seq65530 image;
};

/*  ::Ice::Device */
CX_CLASS(Ice_Device);

CX_CLASS_DEF(Ice_Device) {
    Ice_ConnectionState connected;
    cx_string manufacturer;
    cx_string model;
    cx_string serial_number;
    Ice_Image icon;
    cx_string build;
    cx_string operating_system;
};

/*  ::Ice::Time */
typedef struct Ice_Time Ice_Time;

struct Ice_Time {
    cx_int32 sec;
    cx_int32 nanosec;
};

/*  ::Ice::Numeric */
CX_CLASS(Ice_Numeric);

CX_CLASS_DEF(Ice_Numeric) {
    cx_string unique_device_identifier;
    cx_string metric_id;
    cx_string vendor_metric_id;
    cx_int32 instance_id;
    cx_string unit_id;
    cx_float32 value;
    Ice_Time device_time;
    Ice_Time presentation_time;
};

#ifdef __cplusplus
}
#endif
#endif

