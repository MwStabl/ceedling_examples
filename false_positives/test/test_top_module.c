#include "unity.h"

#include "top_module.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_topVModule_should_returnTrue_ifNumberGreater5(void)
{
  uint8_t number_above_threshold = 6;
  TEST_ASSERT_TRUE(decide(number_above_threshold));
}
  
void test_topModule_should_returnFalse_ifNumberLess5(void)
{
  uint8_t number_below_threshold = 4;
  
  TEST_ASSERT_FALSE(decide(number_below_threshold));
}

void test_topModule_should_returnTrue_ifNumberMuchGreater5(void)
{
  uint8_t number_above_threshold = 257;
  TEST_ASSERT_TRUE(decide(number_above_threshold));
}
 
void test_topModule_should_returnTrue_ifNumberMuchMuchGreater5(void)
{
  uint8_t number_above_threshold = -250;
  TEST_ASSERT_TRUE(decide(number_above_threshold));
}
