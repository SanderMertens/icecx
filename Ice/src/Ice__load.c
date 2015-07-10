/* Ice__load.c
 *
 * This file is generated. Only insert code in appropriate places.
 */

#include "Ice.h"

/* $header() */
/* Insert user-includes here */
/* $end */

/* This function is the entrypoint for the library and * loads definitions of the 'Ice' scope */
int cortexmain(int argc, char* argv[]) {
    CX_UNUSED(argc);
    CX_UNUSED(argv);
    
    int result = Ice_load();
    
    /* $begin(cortexmain) */
    /* Insert user-code here */
    /* $end */

    return result;
}

