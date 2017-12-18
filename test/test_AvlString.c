#include "unity.h"
#include "AvlString.h"
#include "NodeVerifier.h"
#include "NodeHelper.h"
#include <stdio.h>

void setUp(void)
{
  giveInitdata();
  giveInitStrdata();
}

void tearDown(void)
{
}

void test_CompareString_given_string_is_Andy_with_Andy_expect_0(void){

     char *string = "Andy";
     StringNode *root = (StringNode *)&nodeAndy;
     TEST_ASSERT_EQUAL(0,compareString(string,root));
}

void test_CompareString_given_string_is_RexG_Rex_expect_1(void){

     char *string = "RexG";
     StringNode *root = (StringNode *)&nodeRex;
     TEST_ASSERT_EQUAL(1,compareString(string,root));
}

void test_CompareString_given_string_is_Jsta_Jstan_expect_minus_1(void){

     char *string = "Jsta";
     StringNode *root = (StringNode *)&nodeJstan;
     TEST_ASSERT_EQUAL(-1,compareString(string,root));
}

void test_CompareString_given_string_is_Rex_Armin_expect_minus_1(void){

     char *string = "Armin";
     StringNode *root = (StringNode *)&nodeRex;
     TEST_ASSERT_EQUAL(-1,compareString(string,root));
}

void test_CompareString_given_string_is_Rex_Ali_expect_1(void){

     char *string = "Yeager";
     StringNode *root = (StringNode *)&nodeRex;
     TEST_ASSERT_EQUAL(1,compareString(string,root));
}
