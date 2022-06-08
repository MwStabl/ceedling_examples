#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "subf.h"


float important_function(float a, float b, bool add) {
    float result = 0;
    if (add) {
        result = a + b;
    } else {
        result = subfunction(a);
    }
    return result;
}