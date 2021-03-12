#include "unity.h"
#include <calculator_operations.h>
#include <area_ku.h>
#include <volume_ku.h>
// #include <basic.h>

/* Modify these two lines according to the project */
//#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_add_testcase2(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_areaOfSquare(void);
void test_areaOfRectangle(void);
void test_volumeOfCone(void);
void test_volumeOfSphere(void);
void test_volumeOfCylinder(void);
// void test_basic_cal(void);
/* Required by the unity test framework */
void tearDown(){}
void setUp() {}
/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  // RUN_TEST(test_add);
  // RUN_TEST(test_add_testcase2);
  // RUN_TEST(test_subtract);
  // RUN_TEST(test_multiply);
  // RUN_TEST(test_divide);
  RUN_TEST(test_areaOfSquare);
  RUN_TEST(test_areaOfRectangle);
  RUN_TEST(test_volumeOfCone);
  RUN_TEST(test_volumeOfSphere);
  RUN_TEST(test_volumeOfCylinder);
  // RUN_TEST(test_basic_cal);
  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_areaOfSquare(void) {
  
  TEST_ASSERT_EQUAL(400,areaOfSquare(20));
}
void test_areaOfRectangle(void) {
  
  TEST_ASSERT_EQUAL(200, areaOfRectangle(10, 20));
}
void test_volumeOfCone(void) {
  
  TEST_ASSERT_EQUAL(20.94, volumeOfCone(2, 5));
}
void test_volumeOfSphere(void) {
  
  TEST_ASSERT_EQUAL(33.51, volumeOfSphere(2));
}
void test_volumeOfCylinder(void) {
  
  TEST_ASSERT_EQUAL(113.1, volumeOfCylinder(3, 4));
}
// void test_basic_cal(void) {
  
//   TEST_ASSERT_EQUAL(113.1, basic_cal(3, 4));
// }
