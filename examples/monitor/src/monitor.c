#include "Ice.h"

CX_OBSERVER_DEF(on_device_update)(cx_object _this, cx_object observable, cx_object source) {
    CX_UNUSED(_this); CX_UNUSED(source);
    printf("[ update ] device %s %s\n", cx_nameof(observable), cx_toString(observable, 0));
}

CX_OBSERVER_DEF(on_device_delete)(cx_object _this, cx_object observable, cx_object source) {
    CX_UNUSED(_this); CX_UNUSED(source);
    printf("[ delete ] device %s\n", cx_nameof(observable));
}

CX_OBSERVER_DEF(on_numeric_update)(cx_object _this, cx_object observable, cx_object source) {
    CX_UNUSED(_this); CX_UNUSED(source);
    printf("[ update ] numeric %s %s\n", cx_nameof(observable), cx_toString(observable, 0));
}

CX_OBSERVER_DEF(on_numeric_delete)(cx_object _this, cx_object observable, cx_object source) {
    CX_UNUSED(_this); CX_UNUSED(source);
    printf("[ delete ] numeric %s\n", cx_nameof(observable));
}


int main(int argc, char *argv[]) {
    cx_void *deviceCache;
    cx_void *numericCache;
    cx_void *exitEvent;
    Ice_DdsConnector ddsx;
    cx_observer onDeviceUpdate, onDeviceDelete;
    cx_observer onNumericUpdate, onNumericDelete;

    CX_UNUSED(argc); CX_UNUSED(argv);

    /* -- Start the cortex object store */
    cx_start();

    /* -- Load the Ice package */
    cx_load("Ice");

    /* -- Create DDS connector for domain 0 and partition ICE, store devices in scope 'devices' */
    deviceCache = cx_declare(NULL, "devices", cx_void_o);
    numericCache = cx_declare(NULL, "numerics", cx_void_o);
    ddsx = Ice_DdsConnector__create(0, "", deviceCache, numericCache);

    /* -- Create two observers that listen for updates and deletes in the 'devices' scope */
    onDeviceUpdate = cx_observer__create(deviceCache, CX_ON_DEFINE|CX_ON_UPDATE|CX_ON_SCOPE, NULL, 0, NULL, NULL);
    CX_OBSERVER_SET_CALLBACK(onDeviceUpdate, on_device_update);
    onDeviceDelete = cx_observer__create(deviceCache, CX_ON_DELETE|CX_ON_SCOPE, NULL, 0, NULL, NULL);
    CX_OBSERVER_SET_CALLBACK(onDeviceDelete, on_device_delete);

    /* -- Create two observers that listen for updates and deletes in the 'numerics' scope */
    onNumericUpdate = cx_observer__create(numericCache, CX_ON_DEFINE|CX_ON_UPDATE|CX_ON_SCOPE, NULL, 0, NULL, NULL);
    CX_OBSERVER_SET_CALLBACK(onNumericUpdate, on_numeric_update);
    onNumericDelete = cx_observer__create(numericCache, CX_ON_DELETE|CX_ON_SCOPE, NULL, 0, NULL, NULL);
    CX_OBSERVER_SET_CALLBACK(onNumericDelete, on_numeric_delete);

    /* -- Keep program alive until the exitEvent object is updated */
    exitEvent = cx_new(cx_void_o);
    cx_waitfor(exitEvent);
    cx_wait(-1, 0); /* Wait an infinite amount of time */

    /* -- Tear down the cortex object store and cleanup anonymous objects */
    cx_free(ddsx); cx_free(exitEvent);
    cx_stop();

    return 0;
}
