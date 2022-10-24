#define TEST
#ifdef TEST

#include "unity.h"

#include "top_module.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_top_module(void)
{
  float number_below_threshold = 4;
  float number_above_threshold = 6;
  
  TEST_ASSERT_TRUE(decide(number_above_threshold));
  TEST_ASSERT_FALSE(decide(number_below_threshold));
}

#endif // TEST
