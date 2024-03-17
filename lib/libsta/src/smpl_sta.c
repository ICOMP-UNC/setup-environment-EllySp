//
// Created by elly_sparky on 17/03/24.
//
#include "smpl_sta.h"
#include <stdio.h>
#include <string.h>

int static_lib_function(char *msg){
    printf("Hello there! I'm an static library, I recieve the following message: %s\n", msg);
    return strlen(msg);
}
