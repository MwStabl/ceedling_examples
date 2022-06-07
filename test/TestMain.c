//
// Created by max on 07.06.22.
//

#include "unity.h"
#include "main.c"
#include "stdbool.h"

void setUp(void) {}

void tearDown(void) {}

void testMainCalled(void) {
    float res = important_function(1,2,true);
    TEST_ASSERT_FLOAT_WITHIN_MESSAGE(0.01, res, 3, "Calc Error");
    TEST_ASSERT_FLOAT_WITHIN_MESSAGE(0.01, res, 3, "Calc Error");
}