#include "unity.h"
#include "Demo.h"

void setUp(void) {}
void tearDown(void) {}

void test_RunningDemo_should_DoNormalOperations(void)
{
  TEST_ASSERT_EQUAL_INT(3, run_demo_1(1,1));
  TEST_ASSERT_EQUAL_INT(6, run_demo_1(2,2));
  TEST_ASSERT_EQUAL_INT(13, run_demo_1(4,5));
}