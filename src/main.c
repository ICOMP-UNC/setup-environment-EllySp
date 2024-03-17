#include <stdio.h>
#include "greetings.h"
#include "smpl_dyn.h"
#include "smpl_sta.h"

int main(){
    printf("Hello\n");
    greetings();

    dynamic_lib_function("mensaje a dinamica");
    static_lib_function("mensaje a estatica");
    return 0;
}
