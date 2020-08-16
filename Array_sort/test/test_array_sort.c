#include "unity.h"
#include "test_array_sort.h"
#include <stdlib.h>
#include <string.h>
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_array_sort1(void)
{
    int *arr1,*sort_arr1;
    arr1 = calloc(10,sizeof(int));
    memcpy(arr1,(int[10]) {12,15,11,71,34,16,24,78,1,35},sizeof(int)*10);
    sort_arr1 = (int[10]){1,11,12,15,16,24,34,35,71,78};
    TEST_ASSERT_EQUAL_INT32_ARRAY(sort_arr1, array_sort(arr1,10), 10);
    free(arr1);
    free(sort_arr1);
}
void test_array_sort2(void)
{
    int *arr2,*sort_arr2;
    arr2 = calloc(11,sizeof(int));
    memcpy(arr2,(int[11]) {12,15,12,71,-34,16,24,78,1,35,12},sizeof(int)*11);
    sort_arr2 = (int[11]){-34,1,12,12,12,15,16,24,35,71,78};
    TEST_ASSERT_EQUAL_INT32_ARRAY(sort_arr2, array_sort(arr2,11), 11);
    free(arr2);
    free(sort_arr2);
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_array_sort1);
  RUN_TEST(test_array_sort2);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
