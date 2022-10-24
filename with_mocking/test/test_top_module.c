#define TEST
#ifdef TEST

#include "unity.h"

#include "top_module.h"
#include "mock_lower_module.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_top_module_NeedToImplement(void)
{
  float number_below_threshold = 4;
  float number_above_threshold = 6;

  get_number_ExpectAndReturn(number_above_threshold);
  TEST_ASSERT_TRUE(decide());

  get_number_ExpectAndReturn(number_below_threshold);
  TEST_ASSERT_FALSE(decide());
}

#endif // TEST
