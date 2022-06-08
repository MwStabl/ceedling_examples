//
// Created by max on 07.06.22.
//

#include "unity.h"
#include "Mocksubf.h"
#include "main.h"
#include "stdbool.h"

void setUp(void) {}

void tearDown(void) {}

void testMainCalled(void) {
    float res = important_function(1, 2, true);
    TEST_ASSERT_FLOAT_WITHIN_MESSAGE(0.01, res, 3, "Calc Error");
}

void testMainCalledMock(void) {
    subfunction_ExpectAndReturn(1, 3);
    float res2 = important_function(1,2,false);
    TEST_ASSERT_FLOAT_WITHIN_MESSAGE(0.01, res2, 3, "Calc Error");
}