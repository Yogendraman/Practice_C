#include "unity/unity.h"
#include "fun.h"

/* Modify these two lines according to the project */
#define PROJECT_NAME    "CGPA Provider"

void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_tri(void)
{
  TEST_ASSERT_EQUAL('EquilateralTriangle',ccktri(10,10,10));
  TEST_ASSERT_EQUAL('ScaleneTriangle',ccktri(8,7,9));
}

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_tri);
  RUN_TEST(test_tri);
 
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}