#include "unity/unity.h"
#include "fun.h"

/* Modify these two lines according to the project */
#define PROJECT_NAME    "RECURSIVE"

void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void recursiv(void)
{
  TEST_ASSERT_EQUAL(0,recursive(0));
  TEST_ASSERT_EQUAL(1,recursive(1));
  TEST_ASSERT_EQUAL(6,recursive(3));
//   TEST_ASSERT_EQUAL(6,recursive(5));
}
void btod(void)
{
  TEST_ASSERT_EQUAL(0,bin(0));
  TEST_ASSERT_EQUAL(1,bin(1));
  TEST_ASSERT_EQUAL(10,bin(2));
//   TEST_ASSERT_EQUAL(11,bin(2));
}
void hcf(void)
{
  TEST_ASSERT_EQUAL(6,gcd(366,60));
  TEST_ASSERT_EQUAL(0,gcd(0,0));
  TEST_ASSERT_EQUAL(1,gcd(1,1));
}
void c1s(void)
{
  TEST_ASSERT_EQUAL(2,count1(5));
  TEST_ASSERT_EQUAL(2,count1(10));
  TEST_ASSERT_EQUAL(8,count1(999));
}
int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(recursiv);
  RUN_TEST(recursiv);
  RUN_TEST(recursiv);
  RUN_TEST(recursiv);
  RUN_TEST(btod);
  RUN_TEST(btod);
  RUN_TEST(btod);
  RUN_TEST(hcf);
  RUN_TEST(hcf);
  RUN_TEST(hcf);
  RUN_TEST(c1s);
  RUN_TEST(c1s);
  /* Close the Unity Test Framework */
  return UNITY_END();
}