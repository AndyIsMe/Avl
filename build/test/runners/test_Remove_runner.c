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
extern void test_remove_50(void);
extern void test_remove_node_30(void);
extern void test_remove_node_50(void);
extern void test_remove_40_replace_by_45_with_rotation(void);
extern void test_remove_30_replace_by_40(void);
extern void test_remove_node_20_replace_by_node_25(void);
extern void test_remove_node_20_replace_by_node_30(void);
extern void test_remove_node_40_replace_by_node_45_with_rotation(void);
extern void test_remove_node_40_replace_by_node_50_with_rotation(void);
extern void test_remove_node_20_replace_by_node_25_with_rotation(void);
extern void test_remove_node_15_replace_by_node_20(void);
extern void test_remove_node_40_replace_by_node_50(void);
extern void test_remove_node_30_replace_by_node_45_with_rotation(void);


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
  UnityBegin("test_Remove.c");
  RUN_TEST(test_remove_50, 34);
  RUN_TEST(test_remove_node_30, 49);
  RUN_TEST(test_remove_node_50, 69);
  RUN_TEST(test_remove_40_replace_by_45_with_rotation, 102);
  RUN_TEST(test_remove_30_replace_by_40, 139);
  RUN_TEST(test_remove_node_20_replace_by_node_25, 169);
  RUN_TEST(test_remove_node_20_replace_by_node_30, 194);
  RUN_TEST(test_remove_node_40_replace_by_node_45_with_rotation, 242);
  RUN_TEST(test_remove_node_40_replace_by_node_50_with_rotation, 284);
  RUN_TEST(test_remove_node_20_replace_by_node_25_with_rotation, 326);
  RUN_TEST(test_remove_node_15_replace_by_node_20, 354);
  RUN_TEST(test_remove_node_40_replace_by_node_50, 381);
  RUN_TEST(test_remove_node_30_replace_by_node_45_with_rotation, 416);

  return (UnityEnd());
}
