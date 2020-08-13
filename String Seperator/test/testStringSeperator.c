#include "unity.h"
#include "stringSeperator.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_stringSeperator1(void)
{
    char *arr1[2] = {"my","tems"};
    TEST_ASSERT_EQUAL_CHAR_ARRAY(*arr1,stringSeperator("my_tems"),2);
}
void test_stringSeperator2(void)
{
    char *arr2[3] = {"my","name","jeff"};
    TEST_ASSERT_EQUAL_CHAR_ARRAY(*arr2, stringSeperator("my_name_jeff"),3);
}
void test_stringSeperator3(void)
{
    char *arr3[4] = {"twenty","second","jump","street"};
    TEST_ASSERT_EQUAL_CHAR_ARRAY(*arr3, stringSeperator("twenty_second_jump_street"),4);
}
void test_stringSeparator4(void)
{
    char *arr4[6] = {"my","name","is","ed-cast","future","skills"};
    TEST_ASSERT_EQUAL_CHAR_ARRAY(*arr4,stringSeperator("my_name_is_ed-cast_future_skills"),6);
}
void test_stringSeparator5(void)
{
    char *arr5[11] = {"my","name","is","captain","jack","sparrow","captain","of","the","black","pearl"};
    TEST_ASSERT_EQUAL_CHAR_ARRAY(*arr5,stringSeperator("my_name_is_captain_jack_sparrow_captain_of_the_black_pearl"),11);
}
int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_stringSeperator1);
  RUN_TEST(test_stringSeperator2);
  RUN_TEST(test_stringSeperator3);
  RUN_TEST(test_stringSeparator4);
  RUN_TEST(test_stringSeparator5);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
