#if defined (__cplusplus)
extern "C" {
#endif

#include "os.h"
#include "ice_typesSplDcps.h"
#include "ice_typesDcps.h"

const char *
__ice_Time_t__name(void)
{
    return (const char*)"ice::Time_t";
}

const char *
__ice_Time_t__keys(void)
{
    return (const char*)"";
}

const char *
__ice_HeartBeat__name(void)
{
    return (const char*)"ice::HeartBeat";
}

const char *
__ice_HeartBeat__keys(void)
{
    return (const char*)"unique_device_identifier";
}

const char *
__ice_TimeSync__name(void)
{
    return (const char*)"ice::TimeSync";
}

const char *
__ice_TimeSync__keys(void)
{
    return (const char*)"heartbeat_source,heartbeat_recipient";
}

const char *
__ice_Image__name(void)
{
    return (const char*)"ice::Image";
}

const char *
__ice_Image__keys(void)
{
    return (const char*)"";
}

const char *
__ice_DeviceIdentity__name(void)
{
    return (const char*)"ice::DeviceIdentity";
}

const char *
__ice_DeviceIdentity__keys(void)
{
    return (const char*)"unique_device_identifier";
}

const char *
__ice_DeviceConnectivity__name(void)
{
    return (const char*)"ice::DeviceConnectivity";
}

const char *
__ice_DeviceConnectivity__keys(void)
{
    return (const char*)"unique_device_identifier";
}

const char *
__ice_MDSConnectivity__name(void)
{
    return (const char*)"ice::MDSConnectivity";
}

const char *
__ice_MDSConnectivity__keys(void)
{
    return (const char*)"unique_device_identifier";
}

const char *
__ice_MDSConnectivityObjective__name(void)
{
    return (const char*)"ice::MDSConnectivityObjective";
}

const char *
__ice_MDSConnectivityObjective__keys(void)
{
    return (const char*)"unique_device_identifier";
}

const char *
__ice_Numeric__name(void)
{
    return (const char*)"ice::Numeric";
}

const char *
__ice_Numeric__keys(void)
{
    return (const char*)"unique_device_identifier,metric_id,vendor_metric_id,instance_id,unit_id";
}

const char *
__ice_SampleArray__name(void)
{
    return (const char*)"ice::SampleArray";
}

const char *
__ice_SampleArray__keys(void)
{
    return (const char*)"unique_device_identifier,metric_id,instance_id,unit_id,frequency";
}

const char *
__ice_InfusionObjective__name(void)
{
    return (const char*)"ice::InfusionObjective";
}

const char *
__ice_InfusionObjective__keys(void)
{
    return (const char*)"unique_device_identifier";
}

const char *
__ice_InfusionStatus__name(void)
{
    return (const char*)"ice::InfusionStatus";
}

const char *
__ice_InfusionStatus__keys(void)
{
    return (const char*)"unique_device_identifier";
}

const char *
__ice_AlarmLimit__name(void)
{
    return (const char*)"ice::AlarmLimit";
}

const char *
__ice_AlarmLimit__keys(void)
{
    return (const char*)"unique_device_identifier,metric_id,limit_type";
}

const char *
__ice_GlobalAlarmLimitObjective__name(void)
{
    return (const char*)"ice::GlobalAlarmLimitObjective";
}

const char *
__ice_GlobalAlarmLimitObjective__keys(void)
{
    return (const char*)"metric_id,limit_type";
}

const char *
__ice_LocalAlarmLimitObjective__name(void)
{
    return (const char*)"ice::LocalAlarmLimitObjective";
}

const char *
__ice_LocalAlarmLimitObjective__keys(void)
{
    return (const char*)"unique_device_identifier,metric_id,limit_type";
}

const char *
__ice_DeviceAlertCondition__name(void)
{
    return (const char*)"ice::DeviceAlertCondition";
}

const char *
__ice_DeviceAlertCondition__keys(void)
{
    return (const char*)"unique_device_identifier";
}

const char *
__ice_Alert__name(void)
{
    return (const char*)"ice::Alert";
}

const char *
__ice_Alert__keys(void)
{
    return (const char*)"unique_device_identifier,identifier";
}

const char *
__ice_Patient__name(void)
{
    return (const char*)"ice::Patient";
}

const char *
__ice_Patient__keys(void)
{
    return (const char*)"mrn";
}

/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 140 */
#include <v_kernel.h>
#include <v_topic.h>
#include <string.h>
#include <os_report.h>

/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 2217 */
c_bool
__ice_ValidTargets__copyIn(c_base base, void *_from, void *_to)
{
    c_bool result = TRUE;

    ice_ValidTargets *from = (ice_ValidTargets *)_from;
    _ice_ValidTargets *to = (_ice_ValidTargets *)_to;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 2089 */
    static c_type type0 = NULL;
    c_type subtype0 = NULL;
    c_long length0;
    _ice_LongString *dst0;
    ice_ValidTargets *from0 = from;

    if (type0 == NULL) {
        subtype0 = c_type(c_metaResolve (c_metaObject(base), "ice::LongString"));
        type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<ice::LongString,128>",subtype0,128);
        c_free(subtype0);
    }
    length0 = (c_long)(*from)._length;
#ifdef OSPL_BOUNDS_CHECK
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 2111 */
    if(length0 > 128){
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice.ValidTargets' of type 'C_SEQUENCE<LongString,128>' is out of range.");
        result = FALSE;
    } else {
        dst0 = (_ice_LongString *)c_newSequence(c_collectionType(type0),length0);
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 1715 */
        if((*from0)._buffer)
        {
            unsigned int i0;
            for (i0 = 0; (i0 < (unsigned int)length0) && result; i0++) {
        /* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 1844 */

#ifdef OSPL_BOUNDS_CHECK
        if((*from0)._buffer[i0]){
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 1849 */
                    if(((unsigned int)(strlen((*from0)._buffer[i0]))) <= 128){
                        dst0[i0] = c_stringNew(base, (*from0)._buffer[i0]);
                    } else {
                        OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'ice.ValidTargets' of type 'LongString' is out of range.");
                        result = FALSE;
                    }
                } else {
                    OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'ice.ValidTargets' of type 'LongString' is NULL.");
                    result = FALSE;
                }
#else
                dst0[i0] = c_stringNew(base, (*from0)._buffer[i0]);
#endif
            }
        } else if(length0) {
            /* Report an error! */
            OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'ice.ValidTargets' of type 'LongString' is out of range.");
            result = FALSE;
        }
        *to = (_ice_ValidTargets)dst0;
    }
#else
    dst0 = (_ice_LongString *)c_newSequence(c_collectionType(type0),length0);
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 1715 */
    if((*from0)._buffer)
    {
        unsigned int i0;
        for (i0 = 0; (i0 < (unsigned int)length0) && result; i0++) {
    /* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 1844 */

#ifdef OSPL_BOUNDS_CHECK
        if((*from0)._buffer[i0]){
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 1849 */
                if(((unsigned int)(strlen((*from0)._buffer[i0]))) <= 128){
                    dst0[i0] = c_stringNew(base, (*from0)._buffer[i0]);
                } else {
                    OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'ice.ValidTargets' of type 'LongString' is out of range.");
                    result = FALSE;
                }
            } else {
                OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'ice.ValidTargets' of type 'LongString' is NULL.");
                result = FALSE;
            }
#else
            dst0[i0] = c_stringNew(base, (*from0)._buffer[i0]);
#endif
        }
    } else if(length0) {
        /* Report an error! */
        OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'ice.ValidTargets' of type 'LongString' is out of range.");
        result = FALSE;
    }
    *to = (_ice_ValidTargets)dst0;
#endif
    (void) base;
    return result;
}

/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 2217 */
c_bool
__ice_ImageData__copyIn(c_base base, void *_from, void *_to)
{
    c_bool result = TRUE;

    ice_ImageData *from = (ice_ImageData *)_from;
    _ice_ImageData *to = (_ice_ImageData *)_to;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 2089 */
    static c_type type0 = NULL;
    c_type subtype0 = NULL;
    c_long length0;
    c_octet *dst0;
    ice_ImageData *from0 = from;

    if (type0 == NULL) {
        subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_octet"));
        type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_octet,65530>",subtype0,65530);
        c_free(subtype0);
    }
    length0 = (c_long)(*from)._length;
#ifdef OSPL_BOUNDS_CHECK
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 2111 */
    if(length0 > 65530){
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice.ImageData' of type 'C_SEQUENCE<c_octet,65530>' is out of range.");
        result = FALSE;
    } else {
        dst0 = (c_octet *)c_newSequence(c_collectionType(type0),length0);
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 1707 */
        memcpy (dst0,(*from0)._buffer,length0* sizeof(*dst0));
        *to = (_ice_ImageData)dst0;
    }
#else
    dst0 = (c_octet *)c_newSequence(c_collectionType(type0),length0);
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 1707 */
    memcpy (dst0,(*from0)._buffer,length0* sizeof(*dst0));
    *to = (_ice_ImageData)dst0;
#endif
    (void) base;
    return result;
}

/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 2217 */
c_bool
__ice_Values__copyIn(c_base base, void *_from, void *_to)
{
    c_bool result = TRUE;

    ice_Values *from = (ice_Values *)_from;
    _ice_Values *to = (_ice_Values *)_to;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 2089 */
    static c_type type0 = NULL;
    c_type subtype0 = NULL;
    c_long length0;
    c_float *dst0;
    ice_Values *from0 = from;

    if (type0 == NULL) {
        subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_float"));
        type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_float,1024>",subtype0,1024);
        c_free(subtype0);
    }
    length0 = (c_long)(*from)._length;
#ifdef OSPL_BOUNDS_CHECK
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 2111 */
    if(length0 > 1024){
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice.Values' of type 'C_SEQUENCE<c_float,1024>' is out of range.");
        result = FALSE;
    } else {
        dst0 = (c_float *)c_newSequence(c_collectionType(type0),length0);
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 1707 */
        memcpy (dst0,(*from0)._buffer,length0* sizeof(*dst0));
        *to = (_ice_Values)dst0;
    }
#else
    dst0 = (c_float *)c_newSequence(c_collectionType(type0),length0);
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 1707 */
    memcpy (dst0,(*from0)._buffer,length0* sizeof(*dst0));
    *to = (_ice_Values)dst0;
#endif
    (void) base;
    return result;
}

/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 225 */
c_bool
__ice_Time_t__copyIn(c_base base, void *_from, void *_to)
{
    c_bool result = TRUE;

    ice_Time_t *from = (ice_Time_t *)_from;
    struct _ice_Time_t *to = (struct _ice_Time_t *)_to;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 308 */
    to->sec = (c_long)from->sec;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 308 */
    to->nanosec = (c_long)from->nanosec;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 260 */
    (void) base;
    return result;
}

/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 225 */
c_bool
__ice_HeartBeat__copyIn(c_base base, void *_from, void *_to)
{
    c_bool result = TRUE;

    ice_HeartBeat *from = (ice_HeartBeat *)_from;
    struct _ice_HeartBeat *to = (struct _ice_HeartBeat *)_to;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->unique_device_identifier) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->unique_device_identifier)) <= 64) {
            to->unique_device_identifier = c_stringNew(base, from->unique_device_identifier);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::HeartBeat.unique_device_identifier' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::HeartBeat.unique_device_identifier' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->unique_device_identifier = c_stringNew(base, from->unique_device_identifier);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->type) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->type)) <= 32) {
            to->type = c_stringNew(base, from->type);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::HeartBeat.type' of type 'C_STRING<32>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::HeartBeat.type' of type 'C_STRING<32>' is NULL.");
        result = FALSE;
    }
#else
    to->type = c_stringNew(base, from->type);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 260 */
    (void) base;
    return result;
}

/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 225 */
c_bool
__ice_TimeSync__copyIn(c_base base, void *_from, void *_to)
{
    c_bool result = TRUE;

    ice_TimeSync *from = (ice_TimeSync *)_from;
    struct _ice_TimeSync *to = (struct _ice_TimeSync *)_to;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->heartbeat_source) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->heartbeat_source)) <= 64) {
            to->heartbeat_source = c_stringNew(base, from->heartbeat_source);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::TimeSync.heartbeat_source' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::TimeSync.heartbeat_source' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->heartbeat_source = c_stringNew(base, from->heartbeat_source);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->heartbeat_recipient) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->heartbeat_recipient)) <= 64) {
            to->heartbeat_recipient = c_stringNew(base, from->heartbeat_recipient);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::TimeSync.heartbeat_recipient' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::TimeSync.heartbeat_recipient' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->heartbeat_recipient = c_stringNew(base, from->heartbeat_recipient);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 581 */
    if(result){
        extern c_bool __ice_Time_t__copyIn(c_base, void *, void *);
        result = __ice_Time_t__copyIn(base, &from->source_source_timestamp, &to->source_source_timestamp);
    }
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 581 */
    if(result){
        extern c_bool __ice_Time_t__copyIn(c_base, void *, void *);
        result = __ice_Time_t__copyIn(base, &from->recipient_receipt_timestamp, &to->recipient_receipt_timestamp);
    }
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 260 */
    (void) base;
    return result;
}

/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 225 */
c_bool
__ice_Image__copyIn(c_base base, void *_from, void *_to)
{
    c_bool result = TRUE;

    ice_Image *from = (ice_Image *)_from;
    struct _ice_Image *to = (struct _ice_Image *)_to;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->content_type) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->content_type)) <= 64) {
            to->content_type = c_stringNew(base, from->content_type);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::Image.content_type' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::Image.content_type' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->content_type = c_stringNew(base, from->content_type);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 546 */
    if(result){
        extern c_bool __ice_ImageData__copyIn(c_base, void *, void *);
        result = __ice_ImageData__copyIn(base, &from->image, &to->image);
    }
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 260 */
    (void) base;
    return result;
}

/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 225 */
c_bool
__ice_DeviceIdentity__copyIn(c_base base, void *_from, void *_to)
{
    c_bool result = TRUE;

    ice_DeviceIdentity *from = (ice_DeviceIdentity *)_from;
    struct _ice_DeviceIdentity *to = (struct _ice_DeviceIdentity *)_to;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->unique_device_identifier) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->unique_device_identifier)) <= 64) {
            to->unique_device_identifier = c_stringNew(base, from->unique_device_identifier);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::DeviceIdentity.unique_device_identifier' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::DeviceIdentity.unique_device_identifier' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->unique_device_identifier = c_stringNew(base, from->unique_device_identifier);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->manufacturer) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->manufacturer)) <= 128) {
            to->manufacturer = c_stringNew(base, from->manufacturer);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::DeviceIdentity.manufacturer' of type 'C_STRING<128>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::DeviceIdentity.manufacturer' of type 'C_STRING<128>' is NULL.");
        result = FALSE;
    }
#else
    to->manufacturer = c_stringNew(base, from->manufacturer);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->model) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->model)) <= 128) {
            to->model = c_stringNew(base, from->model);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::DeviceIdentity.model' of type 'C_STRING<128>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::DeviceIdentity.model' of type 'C_STRING<128>' is NULL.");
        result = FALSE;
    }
#else
    to->model = c_stringNew(base, from->model);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->serial_number) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->serial_number)) <= 128) {
            to->serial_number = c_stringNew(base, from->serial_number);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::DeviceIdentity.serial_number' of type 'C_STRING<128>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::DeviceIdentity.serial_number' of type 'C_STRING<128>' is NULL.");
        result = FALSE;
    }
#else
    to->serial_number = c_stringNew(base, from->serial_number);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 581 */
    if(result){
        extern c_bool __ice_Image__copyIn(c_base, void *, void *);
        result = __ice_Image__copyIn(base, &from->icon, &to->icon);
    }
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->build) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->build)) <= 128) {
            to->build = c_stringNew(base, from->build);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::DeviceIdentity.build' of type 'C_STRING<128>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::DeviceIdentity.build' of type 'C_STRING<128>' is NULL.");
        result = FALSE;
    }
#else
    to->build = c_stringNew(base, from->build);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->operating_system) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->operating_system)) <= 128) {
            to->operating_system = c_stringNew(base, from->operating_system);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::DeviceIdentity.operating_system' of type 'C_STRING<128>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::DeviceIdentity.operating_system' of type 'C_STRING<128>' is NULL.");
        result = FALSE;
    }
#else
    to->operating_system = c_stringNew(base, from->operating_system);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 260 */
    (void) base;
    return result;
}

/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 225 */
c_bool
__ice_DeviceConnectivity__copyIn(c_base base, void *_from, void *_to)
{
    c_bool result = TRUE;

    ice_DeviceConnectivity *from = (ice_DeviceConnectivity *)_from;
    struct _ice_DeviceConnectivity *to = (struct _ice_DeviceConnectivity *)_to;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->unique_device_identifier) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->unique_device_identifier)) <= 64) {
            to->unique_device_identifier = c_stringNew(base, from->unique_device_identifier);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::DeviceConnectivity.unique_device_identifier' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::DeviceConnectivity.unique_device_identifier' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->unique_device_identifier = c_stringNew(base, from->unique_device_identifier);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 564 */
#ifdef OSPL_BOUNDS_CHECK
    if((((c_long)from->state) >= 0) && (((c_long)from->state) < 5) ){
        to->state = (enum _ice_ConnectionState)from->state;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::DeviceConnectivity.state' of type 'ConnectionState' is out of range.");
        result = FALSE;
    }
#else
    to->state = (enum _ice_ConnectionState)from->state;
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 564 */
#ifdef OSPL_BOUNDS_CHECK
    if((((c_long)from->type) >= 0) && (((c_long)from->type) < 3) ){
        to->type = (enum _ice_ConnectionType)from->type;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::DeviceConnectivity.type' of type 'ConnectionType' is out of range.");
        result = FALSE;
    }
#else
    to->type = (enum _ice_ConnectionType)from->type;
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->info) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->info)) <= 128) {
            to->info = c_stringNew(base, from->info);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::DeviceConnectivity.info' of type 'C_STRING<128>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::DeviceConnectivity.info' of type 'C_STRING<128>' is NULL.");
        result = FALSE;
    }
#else
    to->info = c_stringNew(base, from->info);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 546 */
    if(result){
        extern c_bool __ice_ValidTargets__copyIn(c_base, void *, void *);
        result = __ice_ValidTargets__copyIn(base, &from->valid_targets, &to->valid_targets);
    }
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 260 */
    (void) base;
    return result;
}

/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 225 */
c_bool
__ice_MDSConnectivity__copyIn(c_base base, void *_from, void *_to)
{
    c_bool result = TRUE;

    ice_MDSConnectivity *from = (ice_MDSConnectivity *)_from;
    struct _ice_MDSConnectivity *to = (struct _ice_MDSConnectivity *)_to;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->unique_device_identifier) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->unique_device_identifier)) <= 64) {
            to->unique_device_identifier = c_stringNew(base, from->unique_device_identifier);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::MDSConnectivity.unique_device_identifier' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::MDSConnectivity.unique_device_identifier' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->unique_device_identifier = c_stringNew(base, from->unique_device_identifier);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->partition) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->partition)) <= 128) {
            to->partition = c_stringNew(base, from->partition);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::MDSConnectivity.partition' of type 'C_STRING<128>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::MDSConnectivity.partition' of type 'C_STRING<128>' is NULL.");
        result = FALSE;
    }
#else
    to->partition = c_stringNew(base, from->partition);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 260 */
    (void) base;
    return result;
}

/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 225 */
c_bool
__ice_MDSConnectivityObjective__copyIn(c_base base, void *_from, void *_to)
{
    c_bool result = TRUE;

    ice_MDSConnectivityObjective *from = (ice_MDSConnectivityObjective *)_from;
    struct _ice_MDSConnectivityObjective *to = (struct _ice_MDSConnectivityObjective *)_to;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->unique_device_identifier) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->unique_device_identifier)) <= 64) {
            to->unique_device_identifier = c_stringNew(base, from->unique_device_identifier);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::MDSConnectivityObjective.unique_device_identifier' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::MDSConnectivityObjective.unique_device_identifier' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->unique_device_identifier = c_stringNew(base, from->unique_device_identifier);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->partition) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->partition)) <= 128) {
            to->partition = c_stringNew(base, from->partition);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::MDSConnectivityObjective.partition' of type 'C_STRING<128>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::MDSConnectivityObjective.partition' of type 'C_STRING<128>' is NULL.");
        result = FALSE;
    }
#else
    to->partition = c_stringNew(base, from->partition);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 260 */
    (void) base;
    return result;
}

/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 225 */
c_bool
__ice_Numeric__copyIn(c_base base, void *_from, void *_to)
{
    c_bool result = TRUE;

    ice_Numeric *from = (ice_Numeric *)_from;
    struct _ice_Numeric *to = (struct _ice_Numeric *)_to;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->unique_device_identifier) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->unique_device_identifier)) <= 64) {
            to->unique_device_identifier = c_stringNew(base, from->unique_device_identifier);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::Numeric.unique_device_identifier' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::Numeric.unique_device_identifier' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->unique_device_identifier = c_stringNew(base, from->unique_device_identifier);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->metric_id) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->metric_id)) <= 64) {
            to->metric_id = c_stringNew(base, from->metric_id);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::Numeric.metric_id' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::Numeric.metric_id' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->metric_id = c_stringNew(base, from->metric_id);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->vendor_metric_id) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->vendor_metric_id)) <= 64) {
            to->vendor_metric_id = c_stringNew(base, from->vendor_metric_id);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::Numeric.vendor_metric_id' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::Numeric.vendor_metric_id' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->vendor_metric_id = c_stringNew(base, from->vendor_metric_id);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 308 */
    to->instance_id = (c_long)from->instance_id;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->unit_id) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->unit_id)) <= 64) {
            to->unit_id = c_stringNew(base, from->unit_id);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::Numeric.unit_id' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::Numeric.unit_id' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->unit_id = c_stringNew(base, from->unit_id);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 308 */
    to->value = (c_float)from->value;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 581 */
    if(result){
        extern c_bool __ice_Time_t__copyIn(c_base, void *, void *);
        result = __ice_Time_t__copyIn(base, &from->device_time, &to->device_time);
    }
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 581 */
    if(result){
        extern c_bool __ice_Time_t__copyIn(c_base, void *, void *);
        result = __ice_Time_t__copyIn(base, &from->presentation_time, &to->presentation_time);
    }
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 260 */
    (void) base;
    return result;
}

/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 225 */
c_bool
__ice_SampleArray__copyIn(c_base base, void *_from, void *_to)
{
    c_bool result = TRUE;

    ice_SampleArray *from = (ice_SampleArray *)_from;
    struct _ice_SampleArray *to = (struct _ice_SampleArray *)_to;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->unique_device_identifier) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->unique_device_identifier)) <= 64) {
            to->unique_device_identifier = c_stringNew(base, from->unique_device_identifier);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::SampleArray.unique_device_identifier' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::SampleArray.unique_device_identifier' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->unique_device_identifier = c_stringNew(base, from->unique_device_identifier);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->metric_id) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->metric_id)) <= 64) {
            to->metric_id = c_stringNew(base, from->metric_id);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::SampleArray.metric_id' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::SampleArray.metric_id' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->metric_id = c_stringNew(base, from->metric_id);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->vendor_metric_id) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->vendor_metric_id)) <= 64) {
            to->vendor_metric_id = c_stringNew(base, from->vendor_metric_id);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::SampleArray.vendor_metric_id' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::SampleArray.vendor_metric_id' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->vendor_metric_id = c_stringNew(base, from->vendor_metric_id);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 308 */
    to->instance_id = (c_long)from->instance_id;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->unit_id) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->unit_id)) <= 64) {
            to->unit_id = c_stringNew(base, from->unit_id);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::SampleArray.unit_id' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::SampleArray.unit_id' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->unit_id = c_stringNew(base, from->unit_id);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 308 */
    to->frequency = (c_long)from->frequency;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 546 */
    if(result){
        extern c_bool __ice_Values__copyIn(c_base, void *, void *);
        result = __ice_Values__copyIn(base, &from->values, &to->values);
    }
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 581 */
    if(result){
        extern c_bool __ice_Time_t__copyIn(c_base, void *, void *);
        result = __ice_Time_t__copyIn(base, &from->device_time, &to->device_time);
    }
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 581 */
    if(result){
        extern c_bool __ice_Time_t__copyIn(c_base, void *, void *);
        result = __ice_Time_t__copyIn(base, &from->presentation_time, &to->presentation_time);
    }
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 260 */
    (void) base;
    return result;
}

/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 225 */
c_bool
__ice_InfusionObjective__copyIn(c_base base, void *_from, void *_to)
{
    c_bool result = TRUE;

    ice_InfusionObjective *from = (ice_InfusionObjective *)_from;
    struct _ice_InfusionObjective *to = (struct _ice_InfusionObjective *)_to;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->unique_device_identifier) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->unique_device_identifier)) <= 64) {
            to->unique_device_identifier = c_stringNew(base, from->unique_device_identifier);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::InfusionObjective.unique_device_identifier' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::InfusionObjective.unique_device_identifier' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->unique_device_identifier = c_stringNew(base, from->unique_device_identifier);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->requestor) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->requestor)) <= 128) {
            to->requestor = c_stringNew(base, from->requestor);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::InfusionObjective.requestor' of type 'C_STRING<128>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::InfusionObjective.requestor' of type 'C_STRING<128>' is NULL.");
        result = FALSE;
    }
#else
    to->requestor = c_stringNew(base, from->requestor);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 308 */
    to->stopInfusion = (c_bool)from->stopInfusion;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 260 */
    (void) base;
    return result;
}

/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 225 */
c_bool
__ice_InfusionStatus__copyIn(c_base base, void *_from, void *_to)
{
    c_bool result = TRUE;

    ice_InfusionStatus *from = (ice_InfusionStatus *)_from;
    struct _ice_InfusionStatus *to = (struct _ice_InfusionStatus *)_to;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->unique_device_identifier) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->unique_device_identifier)) <= 64) {
            to->unique_device_identifier = c_stringNew(base, from->unique_device_identifier);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::InfusionStatus.unique_device_identifier' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::InfusionStatus.unique_device_identifier' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->unique_device_identifier = c_stringNew(base, from->unique_device_identifier);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 308 */
    to->infusionActive = (c_bool)from->infusionActive;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->drug_name) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->drug_name)) <= 128) {
            to->drug_name = c_stringNew(base, from->drug_name);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::InfusionStatus.drug_name' of type 'C_STRING<128>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::InfusionStatus.drug_name' of type 'C_STRING<128>' is NULL.");
        result = FALSE;
    }
#else
    to->drug_name = c_stringNew(base, from->drug_name);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 308 */
    to->drug_mass_mcg = (c_long)from->drug_mass_mcg;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 308 */
    to->solution_volume_ml = (c_long)from->solution_volume_ml;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 308 */
    to->volume_to_be_infused_ml = (c_long)from->volume_to_be_infused_ml;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 308 */
    to->infusion_duration_seconds = (c_long)from->infusion_duration_seconds;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 308 */
    to->infusion_fraction_complete = (c_float)from->infusion_fraction_complete;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 260 */
    (void) base;
    return result;
}

/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 225 */
c_bool
__ice_AlarmLimit__copyIn(c_base base, void *_from, void *_to)
{
    c_bool result = TRUE;

    ice_AlarmLimit *from = (ice_AlarmLimit *)_from;
    struct _ice_AlarmLimit *to = (struct _ice_AlarmLimit *)_to;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->unique_device_identifier) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->unique_device_identifier)) <= 64) {
            to->unique_device_identifier = c_stringNew(base, from->unique_device_identifier);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::AlarmLimit.unique_device_identifier' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::AlarmLimit.unique_device_identifier' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->unique_device_identifier = c_stringNew(base, from->unique_device_identifier);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->metric_id) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->metric_id)) <= 64) {
            to->metric_id = c_stringNew(base, from->metric_id);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::AlarmLimit.metric_id' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::AlarmLimit.metric_id' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->metric_id = c_stringNew(base, from->metric_id);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 564 */
#ifdef OSPL_BOUNDS_CHECK
    if((((c_long)from->limit_type) >= 0) && (((c_long)from->limit_type) < 2) ){
        to->limit_type = (enum _ice_LimitType)from->limit_type;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::AlarmLimit.limit_type' of type 'LimitType' is out of range.");
        result = FALSE;
    }
#else
    to->limit_type = (enum _ice_LimitType)from->limit_type;
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->unit_identifier) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->unit_identifier)) <= 64) {
            to->unit_identifier = c_stringNew(base, from->unit_identifier);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::AlarmLimit.unit_identifier' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::AlarmLimit.unit_identifier' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->unit_identifier = c_stringNew(base, from->unit_identifier);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 308 */
    to->value = (c_float)from->value;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 260 */
    (void) base;
    return result;
}

/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 225 */
c_bool
__ice_GlobalAlarmLimitObjective__copyIn(c_base base, void *_from, void *_to)
{
    c_bool result = TRUE;

    ice_GlobalAlarmLimitObjective *from = (ice_GlobalAlarmLimitObjective *)_from;
    struct _ice_GlobalAlarmLimitObjective *to = (struct _ice_GlobalAlarmLimitObjective *)_to;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->metric_id) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->metric_id)) <= 64) {
            to->metric_id = c_stringNew(base, from->metric_id);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::GlobalAlarmLimitObjective.metric_id' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::GlobalAlarmLimitObjective.metric_id' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->metric_id = c_stringNew(base, from->metric_id);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 564 */
#ifdef OSPL_BOUNDS_CHECK
    if((((c_long)from->limit_type) >= 0) && (((c_long)from->limit_type) < 2) ){
        to->limit_type = (enum _ice_LimitType)from->limit_type;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::GlobalAlarmLimitObjective.limit_type' of type 'LimitType' is out of range.");
        result = FALSE;
    }
#else
    to->limit_type = (enum _ice_LimitType)from->limit_type;
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->unit_identifier) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->unit_identifier)) <= 64) {
            to->unit_identifier = c_stringNew(base, from->unit_identifier);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::GlobalAlarmLimitObjective.unit_identifier' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::GlobalAlarmLimitObjective.unit_identifier' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->unit_identifier = c_stringNew(base, from->unit_identifier);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 308 */
    to->value = (c_float)from->value;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 260 */
    (void) base;
    return result;
}

/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 225 */
c_bool
__ice_LocalAlarmLimitObjective__copyIn(c_base base, void *_from, void *_to)
{
    c_bool result = TRUE;

    ice_LocalAlarmLimitObjective *from = (ice_LocalAlarmLimitObjective *)_from;
    struct _ice_LocalAlarmLimitObjective *to = (struct _ice_LocalAlarmLimitObjective *)_to;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->unique_device_identifier) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->unique_device_identifier)) <= 64) {
            to->unique_device_identifier = c_stringNew(base, from->unique_device_identifier);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::LocalAlarmLimitObjective.unique_device_identifier' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::LocalAlarmLimitObjective.unique_device_identifier' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->unique_device_identifier = c_stringNew(base, from->unique_device_identifier);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->metric_id) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->metric_id)) <= 64) {
            to->metric_id = c_stringNew(base, from->metric_id);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::LocalAlarmLimitObjective.metric_id' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::LocalAlarmLimitObjective.metric_id' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->metric_id = c_stringNew(base, from->metric_id);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 564 */
#ifdef OSPL_BOUNDS_CHECK
    if((((c_long)from->limit_type) >= 0) && (((c_long)from->limit_type) < 2) ){
        to->limit_type = (enum _ice_LimitType)from->limit_type;
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::LocalAlarmLimitObjective.limit_type' of type 'LimitType' is out of range.");
        result = FALSE;
    }
#else
    to->limit_type = (enum _ice_LimitType)from->limit_type;
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->unit_identifier) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->unit_identifier)) <= 64) {
            to->unit_identifier = c_stringNew(base, from->unit_identifier);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::LocalAlarmLimitObjective.unit_identifier' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::LocalAlarmLimitObjective.unit_identifier' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->unit_identifier = c_stringNew(base, from->unit_identifier);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 308 */
    to->value = (c_float)from->value;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 260 */
    (void) base;
    return result;
}

/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 225 */
c_bool
__ice_DeviceAlertCondition__copyIn(c_base base, void *_from, void *_to)
{
    c_bool result = TRUE;

    ice_DeviceAlertCondition *from = (ice_DeviceAlertCondition *)_from;
    struct _ice_DeviceAlertCondition *to = (struct _ice_DeviceAlertCondition *)_to;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->unique_device_identifier) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->unique_device_identifier)) <= 64) {
            to->unique_device_identifier = c_stringNew(base, from->unique_device_identifier);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::DeviceAlertCondition.unique_device_identifier' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::DeviceAlertCondition.unique_device_identifier' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->unique_device_identifier = c_stringNew(base, from->unique_device_identifier);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->alert_state) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->alert_state)) <= 256) {
            to->alert_state = c_stringNew(base, from->alert_state);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::DeviceAlertCondition.alert_state' of type 'C_STRING<256>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::DeviceAlertCondition.alert_state' of type 'C_STRING<256>' is NULL.");
        result = FALSE;
    }
#else
    to->alert_state = c_stringNew(base, from->alert_state);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 260 */
    (void) base;
    return result;
}

/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 225 */
c_bool
__ice_Alert__copyIn(c_base base, void *_from, void *_to)
{
    c_bool result = TRUE;

    ice_Alert *from = (ice_Alert *)_from;
    struct _ice_Alert *to = (struct _ice_Alert *)_to;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 554 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->unique_device_identifier) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->unique_device_identifier)) <= 64) {
            to->unique_device_identifier = c_stringNew(base, from->unique_device_identifier);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::Alert.unique_device_identifier' of type 'C_STRING<64>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::Alert.unique_device_identifier' of type 'C_STRING<64>' is NULL.");
        result = FALSE;
    }
#else
    to->unique_device_identifier = c_stringNew(base, from->unique_device_identifier);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->identifier) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->identifier)) <= 256) {
            to->identifier = c_stringNew(base, from->identifier);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::Alert.identifier' of type 'C_STRING<256>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::Alert.identifier' of type 'C_STRING<256>' is NULL.");
        result = FALSE;
    }
#else
    to->identifier = c_stringNew(base, from->identifier);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->text) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->text)) <= 256) {
            to->text = c_stringNew(base, from->text);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::Alert.text' of type 'C_STRING<256>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::Alert.text' of type 'C_STRING<256>' is NULL.");
        result = FALSE;
    }
#else
    to->text = c_stringNew(base, from->text);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 260 */
    (void) base;
    return result;
}

/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 225 */
c_bool
__ice_Patient__copyIn(c_base base, void *_from, void *_to)
{
    c_bool result = TRUE;

    ice_Patient *from = (ice_Patient *)_from;
    struct _ice_Patient *to = (struct _ice_Patient *)_to;
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->mrn) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->mrn)) <= 16) {
            to->mrn = c_stringNew(base, from->mrn);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::Patient.mrn' of type 'C_STRING<16>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::Patient.mrn' of type 'C_STRING<16>' is NULL.");
        result = FALSE;
    }
#else
    to->mrn = c_stringNew(base, from->mrn);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->given_name) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->given_name)) <= 256) {
            to->given_name = c_stringNew(base, from->given_name);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::Patient.given_name' of type 'C_STRING<256>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::Patient.given_name' of type 'C_STRING<256>' is NULL.");
        result = FALSE;
    }
#else
    to->given_name = c_stringNew(base, from->given_name);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 508 */
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 314 */
#ifdef OSPL_BOUNDS_CHECK
    if (from->family_name) {
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 319 */
        if (((unsigned int)strlen(from->family_name)) <= 256) {
            to->family_name = c_stringNew(base, from->family_name);
        } else {
            OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::Patient.family_name' of type 'C_STRING<256>' is out of range.");
            result = FALSE;
        }
    } else {
        OS_REPORT (OS_ERROR, "copyIn", 0,"Member 'ice::Patient.family_name' of type 'C_STRING<256>' is NULL.");
        result = FALSE;
    }
#else
    to->family_name = c_stringNew(base, from->family_name);
#endif
/* Code generated in file: /home/erik/OvernightTests/tmp.EfPeTJ5ocF/build/src/tools/idlpp/code/idl_genCorbaCCopyin.c at line: 260 */
    (void) base;
    return result;
}

#include <dds_dcps_private.h>

void
__ice_ValidTargets__copyOut(void *_from, void *_to)
{
    _ice_ValidTargets *from = (_ice_ValidTargets *)_from;
    ice_ValidTargets *to = (ice_ValidTargets *)_to;
    long size0;
    _ice_LongString *src0 = (_ice_LongString *)(*from);
    ice_ValidTargets *dst0 = to;

    size0 = c_arraySize((c_sequence)(src0));
    DDS_sequence_replacebuf (dst0, (bufferAllocatorType)DDS_sequence_DDS_string_allocbuf, 128);
    dst0->_length = size0;
    {
        long i0;
        for (i0 = 0; i0 < size0; i0++) {
            DDS_string_replace (src0[i0] ? src0[i0] : "", &(*dst0)._buffer[i0]);
        }
    }
}

void
__ice_ImageData__copyOut(void *_from, void *_to)
{
    _ice_ImageData *from = (_ice_ImageData *)_from;
    ice_ImageData *to = (ice_ImageData *)_to;
    long size0;
    c_octet *src0 = (c_octet *)(*from);
    ice_ImageData *dst0 = to;

    size0 = c_arraySize((c_sequence)(src0));
    DDS_sequence_replacebuf (dst0, (bufferAllocatorType)DDS_sequence_octet_allocbuf, 65530);
    dst0->_length = size0;
    memcpy ((*dst0)._buffer,src0,size0* sizeof(*((*dst0)._buffer)));
}

void
__ice_Values__copyOut(void *_from, void *_to)
{
    _ice_Values *from = (_ice_Values *)_from;
    ice_Values *to = (ice_Values *)_to;
    long size0;
    c_float *src0 = (c_float *)(*from);
    ice_Values *dst0 = to;

    size0 = c_arraySize((c_sequence)(src0));
    DDS_sequence_replacebuf (dst0, (bufferAllocatorType)DDS_sequence_float_allocbuf, 1024);
    dst0->_length = size0;
    memcpy ((*dst0)._buffer,src0,size0* sizeof(*((*dst0)._buffer)));
}

void
__ice_Time_t__copyOut(void *_from, void *_to)
{
    struct _ice_Time_t *from = (struct _ice_Time_t *)_from;
    ice_Time_t *to = (ice_Time_t *)_to;
    to->sec = (DDS_long)from->sec;
    to->nanosec = (DDS_long)from->nanosec;
}

void
__ice_HeartBeat__copyOut(void *_from, void *_to)
{
    struct _ice_HeartBeat *from = (struct _ice_HeartBeat *)_from;
    ice_HeartBeat *to = (ice_HeartBeat *)_to;
    DDS_string_replace (from->unique_device_identifier ? from->unique_device_identifier : "", &to->unique_device_identifier);
    DDS_string_replace (from->type ? from->type : "", &to->type);
}

void
__ice_TimeSync__copyOut(void *_from, void *_to)
{
    struct _ice_TimeSync *from = (struct _ice_TimeSync *)_from;
    ice_TimeSync *to = (ice_TimeSync *)_to;
    DDS_string_replace (from->heartbeat_source ? from->heartbeat_source : "", &to->heartbeat_source);
    DDS_string_replace (from->heartbeat_recipient ? from->heartbeat_recipient : "", &to->heartbeat_recipient);
    {
        extern void __ice_Time_t__copyOut(void *, void *);
        __ice_Time_t__copyOut(&from->source_source_timestamp, &to->source_source_timestamp);
    }
    {
        extern void __ice_Time_t__copyOut(void *, void *);
        __ice_Time_t__copyOut(&from->recipient_receipt_timestamp, &to->recipient_receipt_timestamp);
    }
}

void
__ice_Image__copyOut(void *_from, void *_to)
{
    struct _ice_Image *from = (struct _ice_Image *)_from;
    ice_Image *to = (ice_Image *)_to;
    DDS_string_replace (from->content_type ? from->content_type : "", &to->content_type);
    {
        extern void __ice_ImageData__copyOut(void *, void *);
        __ice_ImageData__copyOut(&from->image, &to->image);
    }
}

void
__ice_DeviceIdentity__copyOut(void *_from, void *_to)
{
    struct _ice_DeviceIdentity *from = (struct _ice_DeviceIdentity *)_from;
    ice_DeviceIdentity *to = (ice_DeviceIdentity *)_to;
    DDS_string_replace (from->unique_device_identifier ? from->unique_device_identifier : "", &to->unique_device_identifier);
    DDS_string_replace (from->manufacturer ? from->manufacturer : "", &to->manufacturer);
    DDS_string_replace (from->model ? from->model : "", &to->model);
    DDS_string_replace (from->serial_number ? from->serial_number : "", &to->serial_number);
    {
        extern void __ice_Image__copyOut(void *, void *);
        __ice_Image__copyOut(&from->icon, &to->icon);
    }
    DDS_string_replace (from->build ? from->build : "", &to->build);
    DDS_string_replace (from->operating_system ? from->operating_system : "", &to->operating_system);
}

void
__ice_DeviceConnectivity__copyOut(void *_from, void *_to)
{
    struct _ice_DeviceConnectivity *from = (struct _ice_DeviceConnectivity *)_from;
    ice_DeviceConnectivity *to = (ice_DeviceConnectivity *)_to;
    DDS_string_replace (from->unique_device_identifier ? from->unique_device_identifier : "", &to->unique_device_identifier);
    to->state = (ice_ConnectionState)from->state;
    to->type = (ice_ConnectionType)from->type;
    DDS_string_replace (from->info ? from->info : "", &to->info);
    {
        extern void __ice_ValidTargets__copyOut(void *, void *);
        __ice_ValidTargets__copyOut(&from->valid_targets, &to->valid_targets);
    }
}

void
__ice_MDSConnectivity__copyOut(void *_from, void *_to)
{
    struct _ice_MDSConnectivity *from = (struct _ice_MDSConnectivity *)_from;
    ice_MDSConnectivity *to = (ice_MDSConnectivity *)_to;
    DDS_string_replace (from->unique_device_identifier ? from->unique_device_identifier : "", &to->unique_device_identifier);
    DDS_string_replace (from->partition ? from->partition : "", &to->partition);
}

void
__ice_MDSConnectivityObjective__copyOut(void *_from, void *_to)
{
    struct _ice_MDSConnectivityObjective *from = (struct _ice_MDSConnectivityObjective *)_from;
    ice_MDSConnectivityObjective *to = (ice_MDSConnectivityObjective *)_to;
    DDS_string_replace (from->unique_device_identifier ? from->unique_device_identifier : "", &to->unique_device_identifier);
    DDS_string_replace (from->partition ? from->partition : "", &to->partition);
}

void
__ice_Numeric__copyOut(void *_from, void *_to)
{
    struct _ice_Numeric *from = (struct _ice_Numeric *)_from;
    ice_Numeric *to = (ice_Numeric *)_to;
    DDS_string_replace (from->unique_device_identifier ? from->unique_device_identifier : "", &to->unique_device_identifier);
    DDS_string_replace (from->metric_id ? from->metric_id : "", &to->metric_id);
    DDS_string_replace (from->vendor_metric_id ? from->vendor_metric_id : "", &to->vendor_metric_id);
    to->instance_id = (DDS_long)from->instance_id;
    DDS_string_replace (from->unit_id ? from->unit_id : "", &to->unit_id);
    to->value = (DDS_float)from->value;
    {
        extern void __ice_Time_t__copyOut(void *, void *);
        __ice_Time_t__copyOut(&from->device_time, &to->device_time);
    }
    {
        extern void __ice_Time_t__copyOut(void *, void *);
        __ice_Time_t__copyOut(&from->presentation_time, &to->presentation_time);
    }
}

void
__ice_SampleArray__copyOut(void *_from, void *_to)
{
    struct _ice_SampleArray *from = (struct _ice_SampleArray *)_from;
    ice_SampleArray *to = (ice_SampleArray *)_to;
    DDS_string_replace (from->unique_device_identifier ? from->unique_device_identifier : "", &to->unique_device_identifier);
    DDS_string_replace (from->metric_id ? from->metric_id : "", &to->metric_id);
    DDS_string_replace (from->vendor_metric_id ? from->vendor_metric_id : "", &to->vendor_metric_id);
    to->instance_id = (DDS_long)from->instance_id;
    DDS_string_replace (from->unit_id ? from->unit_id : "", &to->unit_id);
    to->frequency = (DDS_long)from->frequency;
    {
        extern void __ice_Values__copyOut(void *, void *);
        __ice_Values__copyOut(&from->values, &to->values);
    }
    {
        extern void __ice_Time_t__copyOut(void *, void *);
        __ice_Time_t__copyOut(&from->device_time, &to->device_time);
    }
    {
        extern void __ice_Time_t__copyOut(void *, void *);
        __ice_Time_t__copyOut(&from->presentation_time, &to->presentation_time);
    }
}

void
__ice_InfusionObjective__copyOut(void *_from, void *_to)
{
    struct _ice_InfusionObjective *from = (struct _ice_InfusionObjective *)_from;
    ice_InfusionObjective *to = (ice_InfusionObjective *)_to;
    DDS_string_replace (from->unique_device_identifier ? from->unique_device_identifier : "", &to->unique_device_identifier);
    DDS_string_replace (from->requestor ? from->requestor : "", &to->requestor);
    to->stopInfusion = (DDS_boolean)from->stopInfusion;
}

void
__ice_InfusionStatus__copyOut(void *_from, void *_to)
{
    struct _ice_InfusionStatus *from = (struct _ice_InfusionStatus *)_from;
    ice_InfusionStatus *to = (ice_InfusionStatus *)_to;
    DDS_string_replace (from->unique_device_identifier ? from->unique_device_identifier : "", &to->unique_device_identifier);
    to->infusionActive = (DDS_boolean)from->infusionActive;
    DDS_string_replace (from->drug_name ? from->drug_name : "", &to->drug_name);
    to->drug_mass_mcg = (DDS_long)from->drug_mass_mcg;
    to->solution_volume_ml = (DDS_long)from->solution_volume_ml;
    to->volume_to_be_infused_ml = (DDS_long)from->volume_to_be_infused_ml;
    to->infusion_duration_seconds = (DDS_long)from->infusion_duration_seconds;
    to->infusion_fraction_complete = (DDS_float)from->infusion_fraction_complete;
}

void
__ice_AlarmLimit__copyOut(void *_from, void *_to)
{
    struct _ice_AlarmLimit *from = (struct _ice_AlarmLimit *)_from;
    ice_AlarmLimit *to = (ice_AlarmLimit *)_to;
    DDS_string_replace (from->unique_device_identifier ? from->unique_device_identifier : "", &to->unique_device_identifier);
    DDS_string_replace (from->metric_id ? from->metric_id : "", &to->metric_id);
    to->limit_type = (ice_LimitType)from->limit_type;
    DDS_string_replace (from->unit_identifier ? from->unit_identifier : "", &to->unit_identifier);
    to->value = (DDS_float)from->value;
}

void
__ice_GlobalAlarmLimitObjective__copyOut(void *_from, void *_to)
{
    struct _ice_GlobalAlarmLimitObjective *from = (struct _ice_GlobalAlarmLimitObjective *)_from;
    ice_GlobalAlarmLimitObjective *to = (ice_GlobalAlarmLimitObjective *)_to;
    DDS_string_replace (from->metric_id ? from->metric_id : "", &to->metric_id);
    to->limit_type = (ice_LimitType)from->limit_type;
    DDS_string_replace (from->unit_identifier ? from->unit_identifier : "", &to->unit_identifier);
    to->value = (DDS_float)from->value;
}

void
__ice_LocalAlarmLimitObjective__copyOut(void *_from, void *_to)
{
    struct _ice_LocalAlarmLimitObjective *from = (struct _ice_LocalAlarmLimitObjective *)_from;
    ice_LocalAlarmLimitObjective *to = (ice_LocalAlarmLimitObjective *)_to;
    DDS_string_replace (from->unique_device_identifier ? from->unique_device_identifier : "", &to->unique_device_identifier);
    DDS_string_replace (from->metric_id ? from->metric_id : "", &to->metric_id);
    to->limit_type = (ice_LimitType)from->limit_type;
    DDS_string_replace (from->unit_identifier ? from->unit_identifier : "", &to->unit_identifier);
    to->value = (DDS_float)from->value;
}

void
__ice_DeviceAlertCondition__copyOut(void *_from, void *_to)
{
    struct _ice_DeviceAlertCondition *from = (struct _ice_DeviceAlertCondition *)_from;
    ice_DeviceAlertCondition *to = (ice_DeviceAlertCondition *)_to;
    DDS_string_replace (from->unique_device_identifier ? from->unique_device_identifier : "", &to->unique_device_identifier);
    DDS_string_replace (from->alert_state ? from->alert_state : "", &to->alert_state);
}

void
__ice_Alert__copyOut(void *_from, void *_to)
{
    struct _ice_Alert *from = (struct _ice_Alert *)_from;
    ice_Alert *to = (ice_Alert *)_to;
    DDS_string_replace (from->unique_device_identifier ? from->unique_device_identifier : "", &to->unique_device_identifier);
    DDS_string_replace (from->identifier ? from->identifier : "", &to->identifier);
    DDS_string_replace (from->text ? from->text : "", &to->text);
}

void
__ice_Patient__copyOut(void *_from, void *_to)
{
    struct _ice_Patient *from = (struct _ice_Patient *)_from;
    ice_Patient *to = (ice_Patient *)_to;
    DDS_string_replace (from->mrn ? from->mrn : "", &to->mrn);
    DDS_string_replace (from->given_name ? from->given_name : "", &to->given_name);
    DDS_string_replace (from->family_name ? from->family_name : "", &to->family_name);
}

#include <dds_dcps_private.h>

ice_UniqueDeviceIdentifier *ice_UniqueDeviceIdentifier__alloc (DDS_unsigned_long len)
{
    return (ice_UniqueDeviceIdentifier *)DDS_string_alloc (len);
}

ice_MetricIdentifier *ice_MetricIdentifier__alloc (DDS_unsigned_long len)
{
    return (ice_MetricIdentifier *)DDS_string_alloc (len);
}

ice_VendorMetricIdentifier *ice_VendorMetricIdentifier__alloc (DDS_unsigned_long len)
{
    return (ice_VendorMetricIdentifier *)DDS_string_alloc (len);
}

ice_UnitIdentifier *ice_UnitIdentifier__alloc (DDS_unsigned_long len)
{
    return (ice_UnitIdentifier *)DDS_string_alloc (len);
}

ice_LongString *ice_LongString__alloc (DDS_unsigned_long len)
{
    return (ice_LongString *)DDS_string_alloc (len);
}

DDS_sequence_DDS_string *DDS_sequence_DDS_string__alloc (void)
{
    return (DDS_sequence_DDS_string *)DDS_sequence_malloc();
}

DDS_string *DDS_sequence_DDS_string_allocbuf (DDS_unsigned_long len)
{
    DDS_boolean DDS_sequence_DDS_string_freebuf (void *buffer);

    return (DDS_string *)DDS_sequence_allocbuf (DDS_sequence_DDS_string_freebuf, sizeof (DDS_string), len);
}

DDS_boolean DDS_sequence_DDS_string_freebuf (void *buffer)
{
    DDS_unsigned_long *count = (DDS_unsigned_long *)DDS__header (buffer);
    DDS_string *b = (DDS_string *)buffer;
    DDS_unsigned_long i;
    for (i = 0; i < *count; i++) {
        DDS_string_clean (&b[i]);
    }
    return TRUE;
}

ice_ValidTargets *ice_ValidTargets__alloc (void)
{
    return (ice_ValidTargets *)DDS_sequence_DDS_string__alloc ();
}

ice_LongString *ice_ValidTargets_allocbuf (DDS_unsigned_long len)
{
    return (ice_LongString *)DDS_sequence_DDS_string_allocbuf(len);
}

ice_ImageData *ice_ImageData__alloc (void)
{
    return (ice_ImageData *)DDS_sequence_octet__alloc ();
}

DDS_octet *ice_ImageData_allocbuf (DDS_unsigned_long len)
{
    return (DDS_octet *)DDS_sequence_octet_allocbuf(len);
}

DDS_sequence_float *DDS_sequence_float__alloc (void)
{
    return (DDS_sequence_float *)DDS_sequence_malloc();
}

DDS_float *DDS_sequence_float_allocbuf (DDS_unsigned_long len)
{
    return (DDS_float *)DDS_sequence_allocbuf (NULL, sizeof (DDS_float), len);
}

ice_Values *ice_Values__alloc (void)
{
    return (ice_Values *)DDS_sequence_float__alloc ();
}

DDS_float *ice_Values_allocbuf (DDS_unsigned_long len)
{
    return (DDS_float *)DDS_sequence_float_allocbuf(len);
}

ice_Time_t *ice_Time_t__alloc (void)
{
    return (ice_Time_t *)DDS__malloc (NULL, 0, sizeof(ice_Time_t));
}

ice_HeartBeat *ice_HeartBeat__alloc (void)
{
    DDS_boolean ice_HeartBeat__free (void *object);

    return (ice_HeartBeat *)DDS__malloc (ice_HeartBeat__free, 0, sizeof(ice_HeartBeat));
}

DDS_boolean ice_HeartBeat__free (void *object)
{
    ice_HeartBeat *o = (ice_HeartBeat *)object;

    DDS_string_clean (&o->unique_device_identifier);
    DDS_string_clean (&o->type);
    return TRUE;
}

ice_TimeSync *ice_TimeSync__alloc (void)
{
    DDS_boolean ice_TimeSync__free (void *object);

    return (ice_TimeSync *)DDS__malloc (ice_TimeSync__free, 0, sizeof(ice_TimeSync));
}

DDS_boolean ice_TimeSync__free (void *object)
{
    ice_TimeSync *o = (ice_TimeSync *)object;

    DDS_string_clean (&o->heartbeat_source);
    DDS_string_clean (&o->heartbeat_recipient);
    return TRUE;
}

ice_Image *ice_Image__alloc (void)
{
    DDS_boolean ice_Image__free (void *object);

    return (ice_Image *)DDS__malloc (ice_Image__free, 0, sizeof(ice_Image));
}

DDS_boolean ice_Image__free (void *object)
{
    ice_Image *o = (ice_Image *)object;

    DDS_string_clean (&o->content_type);
    DDS_sequence_clean (&o->image);
    return TRUE;
}

ice_DeviceIdentity *ice_DeviceIdentity__alloc (void)
{
    DDS_boolean ice_DeviceIdentity__free (void *object);

    return (ice_DeviceIdentity *)DDS__malloc (ice_DeviceIdentity__free, 0, sizeof(ice_DeviceIdentity));
}

DDS_boolean ice_DeviceIdentity__free (void *object)
{
    ice_DeviceIdentity *o = (ice_DeviceIdentity *)object;

    DDS_string_clean (&o->unique_device_identifier);
    DDS_string_clean (&o->manufacturer);
    DDS_string_clean (&o->model);
    DDS_string_clean (&o->serial_number);
    {
    extern DDS_boolean ice_Image__free(void *object);
    ice_Image__free (&o->icon);
    }
    DDS_string_clean (&o->build);
    DDS_string_clean (&o->operating_system);
    return TRUE;
}

ice_DeviceConnectivity *ice_DeviceConnectivity__alloc (void)
{
    DDS_boolean ice_DeviceConnectivity__free (void *object);

    return (ice_DeviceConnectivity *)DDS__malloc (ice_DeviceConnectivity__free, 0, sizeof(ice_DeviceConnectivity));
}

DDS_boolean ice_DeviceConnectivity__free (void *object)
{
    ice_DeviceConnectivity *o = (ice_DeviceConnectivity *)object;

    DDS_string_clean (&o->unique_device_identifier);
    DDS_string_clean (&o->info);
    DDS_sequence_clean (&o->valid_targets);
    return TRUE;
}

ice_MDSConnectivity *ice_MDSConnectivity__alloc (void)
{
    DDS_boolean ice_MDSConnectivity__free (void *object);

    return (ice_MDSConnectivity *)DDS__malloc (ice_MDSConnectivity__free, 0, sizeof(ice_MDSConnectivity));
}

DDS_boolean ice_MDSConnectivity__free (void *object)
{
    ice_MDSConnectivity *o = (ice_MDSConnectivity *)object;

    DDS_string_clean (&o->unique_device_identifier);
    DDS_string_clean (&o->partition);
    return TRUE;
}

ice_MDSConnectivityObjective *ice_MDSConnectivityObjective__alloc (void)
{
    DDS_boolean ice_MDSConnectivityObjective__free (void *object);

    return (ice_MDSConnectivityObjective *)DDS__malloc (ice_MDSConnectivityObjective__free, 0, sizeof(ice_MDSConnectivityObjective));
}

DDS_boolean ice_MDSConnectivityObjective__free (void *object)
{
    ice_MDSConnectivityObjective *o = (ice_MDSConnectivityObjective *)object;

    DDS_string_clean (&o->unique_device_identifier);
    DDS_string_clean (&o->partition);
    return TRUE;
}

ice_Numeric *ice_Numeric__alloc (void)
{
    DDS_boolean ice_Numeric__free (void *object);

    return (ice_Numeric *)DDS__malloc (ice_Numeric__free, 0, sizeof(ice_Numeric));
}

DDS_boolean ice_Numeric__free (void *object)
{
    ice_Numeric *o = (ice_Numeric *)object;

    DDS_string_clean (&o->unique_device_identifier);
    DDS_string_clean (&o->metric_id);
    DDS_string_clean (&o->vendor_metric_id);
    DDS_string_clean (&o->unit_id);
    return TRUE;
}

ice_SampleArray *ice_SampleArray__alloc (void)
{
    DDS_boolean ice_SampleArray__free (void *object);

    return (ice_SampleArray *)DDS__malloc (ice_SampleArray__free, 0, sizeof(ice_SampleArray));
}

DDS_boolean ice_SampleArray__free (void *object)
{
    ice_SampleArray *o = (ice_SampleArray *)object;

    DDS_string_clean (&o->unique_device_identifier);
    DDS_string_clean (&o->metric_id);
    DDS_string_clean (&o->vendor_metric_id);
    DDS_string_clean (&o->unit_id);
    DDS_sequence_clean (&o->values);
    return TRUE;
}

ice_InfusionObjective *ice_InfusionObjective__alloc (void)
{
    DDS_boolean ice_InfusionObjective__free (void *object);

    return (ice_InfusionObjective *)DDS__malloc (ice_InfusionObjective__free, 0, sizeof(ice_InfusionObjective));
}

DDS_boolean ice_InfusionObjective__free (void *object)
{
    ice_InfusionObjective *o = (ice_InfusionObjective *)object;

    DDS_string_clean (&o->unique_device_identifier);
    DDS_string_clean (&o->requestor);
    return TRUE;
}

ice_InfusionStatus *ice_InfusionStatus__alloc (void)
{
    DDS_boolean ice_InfusionStatus__free (void *object);

    return (ice_InfusionStatus *)DDS__malloc (ice_InfusionStatus__free, 0, sizeof(ice_InfusionStatus));
}

DDS_boolean ice_InfusionStatus__free (void *object)
{
    ice_InfusionStatus *o = (ice_InfusionStatus *)object;

    DDS_string_clean (&o->unique_device_identifier);
    DDS_string_clean (&o->drug_name);
    return TRUE;
}

ice_AlarmLimit *ice_AlarmLimit__alloc (void)
{
    DDS_boolean ice_AlarmLimit__free (void *object);

    return (ice_AlarmLimit *)DDS__malloc (ice_AlarmLimit__free, 0, sizeof(ice_AlarmLimit));
}

DDS_boolean ice_AlarmLimit__free (void *object)
{
    ice_AlarmLimit *o = (ice_AlarmLimit *)object;

    DDS_string_clean (&o->unique_device_identifier);
    DDS_string_clean (&o->metric_id);
    DDS_string_clean (&o->unit_identifier);
    return TRUE;
}

ice_GlobalAlarmLimitObjective *ice_GlobalAlarmLimitObjective__alloc (void)
{
    DDS_boolean ice_GlobalAlarmLimitObjective__free (void *object);

    return (ice_GlobalAlarmLimitObjective *)DDS__malloc (ice_GlobalAlarmLimitObjective__free, 0, sizeof(ice_GlobalAlarmLimitObjective));
}

DDS_boolean ice_GlobalAlarmLimitObjective__free (void *object)
{
    ice_GlobalAlarmLimitObjective *o = (ice_GlobalAlarmLimitObjective *)object;

    DDS_string_clean (&o->metric_id);
    DDS_string_clean (&o->unit_identifier);
    return TRUE;
}

ice_LocalAlarmLimitObjective *ice_LocalAlarmLimitObjective__alloc (void)
{
    DDS_boolean ice_LocalAlarmLimitObjective__free (void *object);

    return (ice_LocalAlarmLimitObjective *)DDS__malloc (ice_LocalAlarmLimitObjective__free, 0, sizeof(ice_LocalAlarmLimitObjective));
}

DDS_boolean ice_LocalAlarmLimitObjective__free (void *object)
{
    ice_LocalAlarmLimitObjective *o = (ice_LocalAlarmLimitObjective *)object;

    DDS_string_clean (&o->unique_device_identifier);
    DDS_string_clean (&o->metric_id);
    DDS_string_clean (&o->unit_identifier);
    return TRUE;
}

ice_DeviceAlertCondition *ice_DeviceAlertCondition__alloc (void)
{
    DDS_boolean ice_DeviceAlertCondition__free (void *object);

    return (ice_DeviceAlertCondition *)DDS__malloc (ice_DeviceAlertCondition__free, 0, sizeof(ice_DeviceAlertCondition));
}

DDS_boolean ice_DeviceAlertCondition__free (void *object)
{
    ice_DeviceAlertCondition *o = (ice_DeviceAlertCondition *)object;

    DDS_string_clean (&o->unique_device_identifier);
    DDS_string_clean (&o->alert_state);
    return TRUE;
}

ice_Alert *ice_Alert__alloc (void)
{
    DDS_boolean ice_Alert__free (void *object);

    return (ice_Alert *)DDS__malloc (ice_Alert__free, 0, sizeof(ice_Alert));
}

DDS_boolean ice_Alert__free (void *object)
{
    ice_Alert *o = (ice_Alert *)object;

    DDS_string_clean (&o->unique_device_identifier);
    DDS_string_clean (&o->identifier);
    DDS_string_clean (&o->text);
    return TRUE;
}

ice_Patient *ice_Patient__alloc (void)
{
    DDS_boolean ice_Patient__free (void *object);

    return (ice_Patient *)DDS__malloc (ice_Patient__free, 0, sizeof(ice_Patient));
}

DDS_boolean ice_Patient__free (void *object)
{
    ice_Patient *o = (ice_Patient *)object;

    DDS_string_clean (&o->mrn);
    DDS_string_clean (&o->given_name);
    DDS_string_clean (&o->family_name);
    return TRUE;
}

const char * ice_HeartBeat_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"ice\"><TypeDef name=\"UniqueDeviceIdentifier\"><String length=\"64\"/>",
"</TypeDef><Struct name=\"HeartBeat\"><Member name=\"unique_device_identifier\"><Type name=\"UniqueDeviceIdentifier\"/>",
"</Member><Member name=\"type\"><String length=\"32\"/></Member></Struct></Module></MetaData>"};
const c_ulong  ice_HeartBeat_metaDescriptorArrLength = 3;
const char * ice_TimeSync_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"ice\"><TypeDef name=\"UniqueDeviceIdentifier\"><String length=\"64\"/>",
"</TypeDef><Struct name=\"Time_t\"><Member name=\"sec\"><Long/></Member><Member name=\"nanosec\"><Long/>",
"</Member></Struct><Struct name=\"TimeSync\"><Member name=\"heartbeat_source\"><Type name=\"UniqueDeviceIdentifier\"/>",
"</Member><Member name=\"heartbeat_recipient\"><Type name=\"UniqueDeviceIdentifier\"/></Member><Member name=\"source_source_timestamp\">",
"<Type name=\"Time_t\"/></Member><Member name=\"recipient_receipt_timestamp\"><Type name=\"Time_t\"/></Member>",
"</Struct></Module></MetaData>"};
const c_ulong  ice_TimeSync_metaDescriptorArrLength = 6;
const char * ice_DeviceIdentity_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"ice\"><TypeDef name=\"UniqueDeviceIdentifier\"><String length=\"64\"/>",
"</TypeDef><TypeDef name=\"LongString\"><String length=\"128\"/></TypeDef><TypeDef name=\"ImageData\">",
"<Sequence size=\"65530\"><Octet/></Sequence></TypeDef><Struct name=\"Image\"><Member name=\"content_type\">",
"<String length=\"64\"/></Member><Member name=\"image\"><Type name=\"ImageData\"/></Member></Struct><Struct name=\"DeviceIdentity\">",
"<Member name=\"unique_device_identifier\"><Type name=\"UniqueDeviceIdentifier\"/></Member><Member name=\"manufacturer\">",
"<Type name=\"LongString\"/></Member><Member name=\"model\"><Type name=\"LongString\"/></Member><Member name=\"serial_number\">",
"<Type name=\"LongString\"/></Member><Member name=\"icon\"><Type name=\"Image\"/></Member><Member name=\"build\">",
"<String length=\"128\"/></Member><Member name=\"operating_system\"><String length=\"128\"/></Member></Struct>",
"</Module></MetaData>"};
const c_ulong  ice_DeviceIdentity_metaDescriptorArrLength = 9;
const char * ice_DeviceConnectivity_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"ice\"><TypeDef name=\"UniqueDeviceIdentifier\"><String length=\"64\"/>",
"</TypeDef><Enum name=\"ConnectionState\"><Element name=\"Initial\" value=\"0\"/><Element name=\"Connected\" value=\"1\"/>",
"<Element name=\"Connecting\" value=\"2\"/><Element name=\"Negotiating\" value=\"3\"/><Element name=\"Terminal\" value=\"4\"/>",
"</Enum><Enum name=\"ConnectionType\"><Element name=\"Serial\" value=\"0\"/><Element name=\"Simulated\" value=\"1\"/>",
"<Element name=\"Network\" value=\"2\"/></Enum><TypeDef name=\"LongString\"><String length=\"128\"/></TypeDef>",
"<TypeDef name=\"ValidTargets\"><Sequence size=\"128\"><Type name=\"LongString\"/></Sequence></TypeDef>",
"<Struct name=\"DeviceConnectivity\"><Member name=\"unique_device_identifier\"><Type name=\"UniqueDeviceIdentifier\"/>",
"</Member><Member name=\"state\"><Type name=\"ConnectionState\"/></Member><Member name=\"type\"><Type name=\"ConnectionType\"/>",
"</Member><Member name=\"info\"><Type name=\"LongString\"/></Member><Member name=\"valid_targets\"><Type name=\"ValidTargets\"/>",
"</Member></Struct></Module></MetaData>"};
const c_ulong  ice_DeviceConnectivity_metaDescriptorArrLength = 10;
const char * ice_MDSConnectivity_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"ice\"><TypeDef name=\"UniqueDeviceIdentifier\"><String length=\"64\"/>",
"</TypeDef><Struct name=\"MDSConnectivity\"><Member name=\"unique_device_identifier\"><Type name=\"UniqueDeviceIdentifier\"/>",
"</Member><Member name=\"partition\"><String length=\"128\"/></Member></Struct></Module></MetaData>"};
const c_ulong  ice_MDSConnectivity_metaDescriptorArrLength = 3;
const char * ice_MDSConnectivityObjective_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"ice\"><TypeDef name=\"UniqueDeviceIdentifier\"><String length=\"64\"/>",
"</TypeDef><Struct name=\"MDSConnectivityObjective\"><Member name=\"unique_device_identifier\"><Type name=\"UniqueDeviceIdentifier\"/>",
"</Member><Member name=\"partition\"><String length=\"128\"/></Member></Struct></Module></MetaData>"};
const c_ulong  ice_MDSConnectivityObjective_metaDescriptorArrLength = 3;
const char * ice_Numeric_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"ice\"><TypeDef name=\"UniqueDeviceIdentifier\"><String length=\"64\"/>",
"</TypeDef><TypeDef name=\"MetricIdentifier\"><String length=\"64\"/></TypeDef><TypeDef name=\"VendorMetricIdentifier\">",
"<String length=\"64\"/></TypeDef><TypeDef name=\"InstanceIdentifier\"><Long/></TypeDef><TypeDef name=\"UnitIdentifier\">",
"<String length=\"64\"/></TypeDef><Struct name=\"Time_t\"><Member name=\"sec\"><Long/></Member><Member name=\"nanosec\">",
"<Long/></Member></Struct><Struct name=\"Numeric\"><Member name=\"unique_device_identifier\"><Type name=\"UniqueDeviceIdentifier\"/>",
"</Member><Member name=\"metric_id\"><Type name=\"MetricIdentifier\"/></Member><Member name=\"vendor_metric_id\">",
"<Type name=\"VendorMetricIdentifier\"/></Member><Member name=\"instance_id\"><Type name=\"InstanceIdentifier\"/>",
"</Member><Member name=\"unit_id\"><Type name=\"UnitIdentifier\"/></Member><Member name=\"value\"><Float/>",
"</Member><Member name=\"device_time\"><Type name=\"Time_t\"/></Member><Member name=\"presentation_time\">",
"<Type name=\"Time_t\"/></Member></Struct></Module></MetaData>"};
const c_ulong  ice_Numeric_metaDescriptorArrLength = 10;
const char * ice_SampleArray_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"ice\"><TypeDef name=\"UniqueDeviceIdentifier\"><String length=\"64\"/>",
"</TypeDef><TypeDef name=\"MetricIdentifier\"><String length=\"64\"/></TypeDef><TypeDef name=\"VendorMetricIdentifier\">",
"<String length=\"64\"/></TypeDef><TypeDef name=\"InstanceIdentifier\"><Long/></TypeDef><TypeDef name=\"UnitIdentifier\">",
"<String length=\"64\"/></TypeDef><TypeDef name=\"Values\"><Sequence size=\"1024\"><Float/></Sequence>",
"</TypeDef><Struct name=\"Time_t\"><Member name=\"sec\"><Long/></Member><Member name=\"nanosec\"><Long/>",
"</Member></Struct><Struct name=\"SampleArray\"><Member name=\"unique_device_identifier\"><Type name=\"UniqueDeviceIdentifier\"/>",
"</Member><Member name=\"metric_id\"><Type name=\"MetricIdentifier\"/></Member><Member name=\"vendor_metric_id\">",
"<Type name=\"VendorMetricIdentifier\"/></Member><Member name=\"instance_id\"><Type name=\"InstanceIdentifier\"/>",
"</Member><Member name=\"unit_id\"><Type name=\"UnitIdentifier\"/></Member><Member name=\"frequency\">",
"<Long/></Member><Member name=\"values\"><Type name=\"Values\"/></Member><Member name=\"device_time\">",
"<Type name=\"Time_t\"/></Member><Member name=\"presentation_time\"><Type name=\"Time_t\"/></Member></Struct>",
"</Module></MetaData>"};
const c_ulong  ice_SampleArray_metaDescriptorArrLength = 12;
const char * ice_InfusionObjective_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"ice\"><TypeDef name=\"UniqueDeviceIdentifier\"><String length=\"64\"/>",
"</TypeDef><TypeDef name=\"LongString\"><String length=\"128\"/></TypeDef><Struct name=\"InfusionObjective\">",
"<Member name=\"unique_device_identifier\"><Type name=\"UniqueDeviceIdentifier\"/></Member><Member name=\"requestor\">",
"<Type name=\"LongString\"/></Member><Member name=\"stopInfusion\"><Boolean/></Member></Struct></Module>",
"</MetaData>"};
const c_ulong  ice_InfusionObjective_metaDescriptorArrLength = 5;
const char * ice_InfusionStatus_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"ice\"><TypeDef name=\"UniqueDeviceIdentifier\"><String length=\"64\"/>",
"</TypeDef><Struct name=\"InfusionStatus\"><Member name=\"unique_device_identifier\"><Type name=\"UniqueDeviceIdentifier\"/>",
"</Member><Member name=\"infusionActive\"><Boolean/></Member><Member name=\"drug_name\"><String length=\"128\"/>",
"</Member><Member name=\"drug_mass_mcg\"><Long/></Member><Member name=\"solution_volume_ml\"><Long/></Member>",
"<Member name=\"volume_to_be_infused_ml\"><Long/></Member><Member name=\"infusion_duration_seconds\"><Long/>",
"</Member><Member name=\"infusion_fraction_complete\"><Float/></Member></Struct></Module></MetaData>"};
const c_ulong  ice_InfusionStatus_metaDescriptorArrLength = 6;
const char * ice_AlarmLimit_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"ice\"><TypeDef name=\"UniqueDeviceIdentifier\"><String length=\"64\"/>",
"</TypeDef><TypeDef name=\"MetricIdentifier\"><String length=\"64\"/></TypeDef><Enum name=\"LimitType\">",
"<Element name=\"low_limit\" value=\"0\"/><Element name=\"high_limit\" value=\"1\"/></Enum><TypeDef name=\"UnitIdentifier\">",
"<String length=\"64\"/></TypeDef><Struct name=\"AlarmLimit\"><Member name=\"unique_device_identifier\">",
"<Type name=\"UniqueDeviceIdentifier\"/></Member><Member name=\"metric_id\"><Type name=\"MetricIdentifier\"/>",
"</Member><Member name=\"limit_type\"><Type name=\"LimitType\"/></Member><Member name=\"unit_identifier\">",
"<Type name=\"UnitIdentifier\"/></Member><Member name=\"value\"><Float/></Member></Struct></Module></MetaData>"};
const c_ulong  ice_AlarmLimit_metaDescriptorArrLength = 7;
const char * ice_GlobalAlarmLimitObjective_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"ice\"><TypeDef name=\"MetricIdentifier\"><String length=\"64\"/>",
"</TypeDef><Enum name=\"LimitType\"><Element name=\"low_limit\" value=\"0\"/><Element name=\"high_limit\" value=\"1\"/>",
"</Enum><TypeDef name=\"UnitIdentifier\"><String length=\"64\"/></TypeDef><Struct name=\"GlobalAlarmLimitObjective\">",
"<Member name=\"metric_id\"><Type name=\"MetricIdentifier\"/></Member><Member name=\"limit_type\"><Type name=\"LimitType\"/>",
"</Member><Member name=\"unit_identifier\"><Type name=\"UnitIdentifier\"/></Member><Member name=\"value\">",
"<Float/></Member></Struct></Module></MetaData>"};
const c_ulong  ice_GlobalAlarmLimitObjective_metaDescriptorArrLength = 6;
const char * ice_LocalAlarmLimitObjective_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"ice\"><TypeDef name=\"UniqueDeviceIdentifier\"><String length=\"64\"/>",
"</TypeDef><TypeDef name=\"MetricIdentifier\"><String length=\"64\"/></TypeDef><Enum name=\"LimitType\">",
"<Element name=\"low_limit\" value=\"0\"/><Element name=\"high_limit\" value=\"1\"/></Enum><TypeDef name=\"UnitIdentifier\">",
"<String length=\"64\"/></TypeDef><Struct name=\"LocalAlarmLimitObjective\"><Member name=\"unique_device_identifier\">",
"<Type name=\"UniqueDeviceIdentifier\"/></Member><Member name=\"metric_id\"><Type name=\"MetricIdentifier\"/>",
"</Member><Member name=\"limit_type\"><Type name=\"LimitType\"/></Member><Member name=\"unit_identifier\">",
"<Type name=\"UnitIdentifier\"/></Member><Member name=\"value\"><Float/></Member></Struct></Module></MetaData>"};
const c_ulong  ice_LocalAlarmLimitObjective_metaDescriptorArrLength = 7;
const char * ice_DeviceAlertCondition_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"ice\"><TypeDef name=\"UniqueDeviceIdentifier\"><String length=\"64\"/>",
"</TypeDef><Struct name=\"DeviceAlertCondition\"><Member name=\"unique_device_identifier\"><Type name=\"UniqueDeviceIdentifier\"/>",
"</Member><Member name=\"alert_state\"><String length=\"256\"/></Member></Struct></Module></MetaData>"};
const c_ulong  ice_DeviceAlertCondition_metaDescriptorArrLength = 3;
const char * ice_Alert_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"ice\"><TypeDef name=\"UniqueDeviceIdentifier\"><String length=\"64\"/>",
"</TypeDef><Struct name=\"Alert\"><Member name=\"unique_device_identifier\"><Type name=\"UniqueDeviceIdentifier\"/>",
"</Member><Member name=\"identifier\"><String length=\"256\"/></Member><Member name=\"text\"><String length=\"256\"/>",
"</Member></Struct></Module></MetaData>"};
const c_ulong  ice_Alert_metaDescriptorArrLength = 4;
const char * ice_Patient_metaDescriptor[] = {"<MetaData version=\"1.0.0\"><Module name=\"ice\"><Struct name=\"Patient\"><Member name=\"mrn\"><String length=\"16\"/>",
"</Member><Member name=\"given_name\"><String length=\"256\"/></Member><Member name=\"family_name\"><String length=\"256\"/>",
"</Member></Struct></Module></MetaData>"};
const c_ulong  ice_Patient_metaDescriptorArrLength = 3;
#if defined (__cplusplus)
}
#endif
