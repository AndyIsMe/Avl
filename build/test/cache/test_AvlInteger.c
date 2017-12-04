#include "build/temp/_test_AvlInteger.c"
#include "NodeHelper.h"
#include "NodeVerifier.h"
#include "AvlInteger.h"
#include "unity.h"


void setUp(void)

{

giveInitdata();

}

void tearDown(void){}



void test_IntCompare_given_90_60_expect_1(void){



     initNode(&node45,

                     ((void *)0)

                         ,

                          ((void *)0)

                              ,0);

     initNode(&node100,

                      ((void *)0)

                          ,

                           ((void *)0)

                               ,0);

     initNode(&node90,&node50,&node100,-1);

     initNode(&node50,&node45,

                             ((void *)0)

                                 ,-1);

     Node *root = &node90;

     int test = IntCompare(90,&node60);



     UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((test)), (

    ((void *)0)

    ), (UNITY_UINT)(21), UNITY_DISPLAY_STYLE_INT);

}



void test_IntCompare_given_60_90_expect_minus_1(void){



     initNode(&node45,

                     ((void *)0)

                         ,

                          ((void *)0)

                              ,0);

     initNode(&node100,

                      ((void *)0)

                          ,

                           ((void *)0)

                               ,0);

     initNode(&node90,&node50,&node100,-1);

     initNode(&node50,&node45,

                             ((void *)0)

                                 ,-1);

     Node *root = &node90;

     int test = IntCompare(60,&node90);



     UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((test)), (

    ((void *)0)

    ), (UNITY_UINT)(33), UNITY_DISPLAY_STYLE_INT);

}



void test_IntCompare_given_90_90_expect_0(void){



     initNode(&node45,

                     ((void *)0)

                         ,

                          ((void *)0)

                              ,0);

     initNode(&node100,

                      ((void *)0)

                          ,

                           ((void *)0)

                               ,0);

     initNode(&node90,&node50,&node100,-1);

     initNode(&node50,&node45,

                             ((void *)0)

                                 ,-1);

     Node *root = &node90;

     int test = IntCompare(90,&node90);



     UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((test)), (

    ((void *)0)

    ), (UNITY_UINT)(45), UNITY_DISPLAY_STYLE_INT);

}
