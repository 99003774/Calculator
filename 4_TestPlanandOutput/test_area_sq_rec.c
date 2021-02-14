#include "unity.h"
#include <calculator_operations.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_add_testcase2(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_add_testcase2);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_square(void) {
  TEST_ASSERT_EQUAL(100.000000, square(10));
  TEST_ASSERT_EQUAL("Result can't be negative", add(-15));
}
void test_square_testcase2(void) {
 
  /* Dummy fail*/
  TEST_ASSERT_EQUAL("Input cannot be taken zero.", square(0));
}
void test_rectangle(void) {
  TEST_ASSERT_EQUAL(0.000000, rectangle(0, 3));
}
