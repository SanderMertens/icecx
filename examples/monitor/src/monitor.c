#include "Ice.h"

CX_OBSERVER_DEF(on_update)(cx_object _this, cx_object observable, cx_object source) {
    CX_UNUSED(_this); CX_UNUSED(source);
    printf("[ update ] device %s %s\n", cx_nameof(observable), cx_toString(observable, 0));
}

CX_OBSERVER_DEF(on_delete)(cx_object _this, cx_object observable, cx_object source) {
    CX_UNUSED(_this); CX_UNUSED(source);
    printf("[ delete ] device %s\n", cx_nameof(observable));
}

int main(int argc, char *argv[]) {
    cx_void *deviceCache;
    cx_void *exitEvent;
    Ice_DdsConnector ddsx;
    cx_observer onUpdate, onDelete;

    CX_UNUSED(argc); CX_UNUSED(argv);

    /* -- Start the cortex object store */
    cx_start();

    /* -- Load the Ice package */
    cx_load("Ice");

    /* -- Create DDS connector for domain 0 and partition ICE, store devices in scope 'devices' */
    deviceCache = cx_declare(NULL, "devices", cx_void_o);
    ddsx = Ice_DdsConnector__create(0, "", deviceCache);

    /* -- Create two observers that listen for updates and deletes in the 'devices' scope */
    onUpdate = cx_observer__create(deviceCache, CX_ON_DEFINE|CX_ON_UPDATE|CX_ON_SCOPE, NULL, 0, NULL, NULL);
    CX_OBSERVER_SET_CALLBACK(onUpdate, on_update);
    onDelete = cx_observer__create(deviceCache, CX_ON_DELETE|CX_ON_SCOPE, NULL, 0, NULL, NULL);
    CX_OBSERVER_SET_CALLBACK(onDelete, on_delete);

    /* -- Keep program alive until the exitEvent object is updated */
    exitEvent = cx_new(cx_void_o);
    cx_waitfor(exitEvent);
    cx_wait(-1, 0); /* Wait an infinite amount of time */

    /* -- Tear down the cortex object store and cleanup anonymous objects */
    cx_free(ddsx); cx_free(exitEvent);
    cx_stop();

    return 0;
}
