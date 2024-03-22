//
// Created by elly_sparky on 17/03/24.
//

#include "smpl_dyn.h"
#include <stdio.h>
#include <string.h>

int dynamic_lib_function(char *msg)
{
    printf("Hello there! I'm a shared library, I recieve the following message: %s\n", msg);
    return strlen(msg);
}
