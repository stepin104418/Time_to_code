#include "unity.h"
#include "calculator.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_calculator_add(void)
{
    TEST_ASSERT_EQUAL(5, calculator(0,2,3));
    TEST_ASSERT_EQUAL(19, calculator(0,17,2));
    TEST_ASSERT_EQUAL(-7, calculator(0,-3,-4));
}
void test_calculator_subtract(void)
{
    TEST_ASSERT_EQUAL(1,calculator(1,5,4));
    TEST_ASSERT_EQUAL(42,calculator(1,82,40));
    TEST_ASSERT_EQUAL(-12,calculator(1,10,22));
    TEST_ASSERT_EQUAL(-10,calculator(1,45,55));

}
void test_calculator_invalid(void)
{
    TEST_ASSERT_EQUAL_STRING("operation not specified",calculator(12,3,4));
    TEST_ASSERT_EQUAL_STRING("operation not specified",calculator(-1,3,4));
}


int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_calculator_add);
  RUN_TEST(test_calculator_subtract);
  RUN_TEST(test_calculator_invalid);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
