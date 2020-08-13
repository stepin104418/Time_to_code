#include "unity.h"
#include "primeNumber.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_primenumber_check(void)
{
  TEST_ASSERT_EQUAL(1, primeNumber(13));
  TEST_ASSERT_EQUAL(1, primeNumber(97));
  TEST_ASSERT_EQUAL(1, primeNumber(37));
}
void test_primenumber_two_three(void)
{
    TEST_ASSERT_EQUAL(1, primeNumber(2));
    TEST_ASSERT_EQUAL(1, primeNumber(3));
}
void test_not_primenumber_check(void)
{
    TEST_ASSERT_EQUAL(-1, primeNumber(56));
    TEST_ASSERT_EQUAL(-1, primeNumber(81));
    TEST_ASSERT_EQUAL(-1, primeNumber(12));
}
void test_zero_one(void)
{
  TEST_ASSERT_EQUAL(0, primeNumber(0));
  TEST_ASSERT_EQUAL(0, primeNumber(1));
}
void test_negative(void)
{
  TEST_ASSERT_EQUAL(0, primeNumber(-5));
  TEST_ASSERT_EQUAL(0, primeNumber(-10));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_primenumber_check);
  RUN_TEST(test_not_primenumber_check);
  RUN_TEST(test_primenumber_two_three);
  RUN_TEST(test_zero_one);
  RUN_TEST(test_negative);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
