/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT()) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_rotateLeft(void);
extern void test_rotateRight(void);
extern void test_rotateLeftRight(void);
extern void test_rotateRightLeft(void);
extern void test_avlBalanceRightTree_given_40_50_100_expect_a_balance_tree(void);
extern void test_avlBalanceRightTree_given_40_50_100_45_expect_a_balance_tree(void);
extern void test_avlBalanceRightTreeV1_given_15_20_35_45_50_55_expect_a_balance_tree(void);
extern void test_avlBalanceRightTreeV1_given_15_20_30_35_40_45_55_expect_a_balance_tree(void);
extern void test_avlBalanceRightTreeV1_given_15_20_35_40_45_55_expect_a_balance_tree(void);
extern void test_avlBalanceLeftTree_given_40_50_60_expect_a_balance_tree(void);
extern void test_avlBalanceLeftTree_given_40_55_50_60_expect_a_balance_tree(void);
extern void test_avlBalanceLeftTreeV1_given_10_40_45_50_60_65_expect_a_balance_tree(void);
extern void test_avlBalanceLeftTreeV1_given_10_30_40_45_50_60_65_expect_a_balance_tree(void);
extern void test_avlBalanceLeftTreeV1_given_10_30_40_45_60_65_expect_a_balance_tree(void);


/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test_Rotate.c");
  RUN_TEST(test_rotateLeft, 44);
  RUN_TEST(test_rotateRight, 71);
  RUN_TEST(test_rotateLeftRight, 108);
  RUN_TEST(test_rotateRightLeft, 146);
  RUN_TEST(test_avlBalanceRightTree_given_40_50_100_expect_a_balance_tree, 194);
  RUN_TEST(test_avlBalanceRightTree_given_40_50_100_45_expect_a_balance_tree, 220);
  RUN_TEST(test_avlBalanceRightTreeV1_given_15_20_35_45_50_55_expect_a_balance_tree, 261);
  RUN_TEST(test_avlBalanceRightTreeV1_given_15_20_30_35_40_45_55_expect_a_balance_tree, 311);
  RUN_TEST(test_avlBalanceRightTreeV1_given_15_20_35_40_45_55_expect_a_balance_tree, 365);
  RUN_TEST(test_avlBalanceLeftTree_given_40_50_60_expect_a_balance_tree, 404);
  RUN_TEST(test_avlBalanceLeftTree_given_40_55_50_60_expect_a_balance_tree, 430);
  RUN_TEST(test_avlBalanceLeftTreeV1_given_10_40_45_50_60_65_expect_a_balance_tree, 471);
  RUN_TEST(test_avlBalanceLeftTreeV1_given_10_30_40_45_50_60_65_expect_a_balance_tree, 520);
  RUN_TEST(test_avlBalanceLeftTreeV1_given_10_30_40_45_60_65_expect_a_balance_tree, 573);

  return (UnityEnd());
}
