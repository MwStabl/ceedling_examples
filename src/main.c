#include <stdio.h>
#include <stdbool.h>

float important_function(float a, float b, bool add) {
    float result = 0;
    if (add) {
        result = a + b;
    } else {
        result = a;
    }
    return result;
}