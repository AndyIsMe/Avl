#include "unity.h"
#include "AvlInteger.h"
#include "NodeVerifier.h"
#include "NodeHelper.h"

void setUp(void)
{
giveInitdata();
}
void tearDown(void){}

void test_IntCompare_given_90_60_expect_1(void){

     initNode(&node45,NULL,NULL,0);
     initNode(&node100,NULL,NULL,0);
     initNode(&node90,&node50,&node100,-1);
     initNode(&node50,&node45,NULL,-1);
     Node *root = &node90;
     int test = IntCompare(90,&node60);

     TEST_ASSERT_EQUAL(-1,test);
}

void test_IntCompare_given_60_90_expect_minus_1(void){

     initNode(&node45,NULL,NULL,0);
     initNode(&node100,NULL,NULL,0);
     initNode(&node90,&node50,&node100,-1);
     initNode(&node50,&node45,NULL,-1);
     Node *root = &node90;
     int test = IntCompare(60,&node90);

     TEST_ASSERT_EQUAL(1,test);
}

void test_IntCompare_given_90_90_expect_0(void){

     initNode(&node45,NULL,NULL,0);
     initNode(&node100,NULL,NULL,0);
     initNode(&node90,&node50,&node100,-1);
     initNode(&node50,&node45,NULL,-1);
     Node *root = &node90;
     int test = IntCompare(90,&node90);

     TEST_ASSERT_EQUAL(0,test);
}
