#include "unity.h"
#include <area_ku.h>
#include <volume_ku.h>
#include <Calc_ari.h>
#include <Calc_pnc.h>
#include <stdlib.h>
#include <stdio.h>

/* Modify these two lines according to the project */
//#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_sub(void);
void test_mul(void);
void test_div(void);
void test_permutation(void);
void test_combination(void);
void test_factorial(void);
void test_areaOfSquare(void);
void test_areaOfRectangle(void);
void test_volumeOfCone(void);
void test_volumeOfSphere(void);
void test_volumeOfCylinder(void);


/* Required by the unity test framework */
void tearDown(){}
void setUp() {}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_sub);
  RUN_TEST(test_mul);
  RUN_TEST(test_div);
  RUN_TEST(test_permutation);
  RUN_TEST(test_combination);
  RUN_TEST(test_factorial);
  RUN_TEST(test_areaOfSquare);
  RUN_TEST(test_areaOfRectangle);
  RUN_TEST(test_volumeOfCone);
  RUN_TEST(test_volumeOfSphere);
  RUN_TEST(test_volumeOfCylinder);
 
  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 

void test_add(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));

}
void test_sub(void) {
  TEST_ASSERT_EQUAL(10, sub(20, 10));

}
void test_mul(void) {
  TEST_ASSERT_EQUAL(200, mul(20, 10));

}
void test_div(void) {
  TEST_ASSERT_EQUAL(2, divs(20, 10));
 
}

void test_permutation(void) {
  TEST_ASSERT_EQUAL(1, permutation(0, 10));
 
}
void test_combination(void) {
  TEST_ASSERT_EQUAL(0, combination(0, 10));

}
void test_factorial(void) {
  TEST_ASSERT_EQUAL(120, factorial(5));
  
}

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

