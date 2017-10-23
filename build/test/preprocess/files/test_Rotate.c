#include "build/temp/_test_Rotate.c"
#include "Rotate.h"
#include "unity.h"


Node node1,node5 , node10,node15,node20,node25,node30,node35,node40;

Node node45,node50,node55;



void initNode(Node *node,Node *left,Node *right,int bf){

  node->left = left;

  node->right = right;

  node->balanceFactor = bf;

}



void setUp(void)

{

  node1.data = 1;

  node5.data = 5;

  node10.data = 10;

  node15.data = 15;

  node20.data = 20;

  node25.data = 25;

  node30.data = 30;

  node35.data = 35;

  node40.data = 40;

  node45.data = 45;

  node50.data = 50;

  node55.data = 55;

}



void tearDown(void)

{

}

 void test_rotateLeft(void)

 { Node *root;

     initNode(&node25,

                     ((void *)0)

                         ,

                          ((void *)0)

                              ,0);

     initNode(&node40,

                     ((void *)0)

                         ,

                          ((void *)0)

                              ,0);

     initNode(&node30,&node25,&node40,0);

     initNode(&node10,

                     ((void *)0)

                         ,&node30,2);



     root = rotateLeft(&node10);

     UnityAssertEqualNumber((UNITY_INT64)((&node30)), (UNITY_INT64)((root)), (

    ((void *)0)

    ), (UNITY_UINT)(48), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT64)((

    ((void *)0)

    )), (UNITY_INT64)((node10.left)), (

    ((void *)0)

    ), (UNITY_UINT)(49), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT64)((

    ((void *)0)

    )), (UNITY_INT64)((node25.right)), (

    ((void *)0)

    ), (UNITY_UINT)(50), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT64)((

    ((void *)0)

    )), (UNITY_INT64)((node25.left)), (

    ((void *)0)

    ), (UNITY_UINT)(51), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT64)((

    ((void *)0)

    )), (UNITY_INT64)((node40.left)), (

    ((void *)0)

    ), (UNITY_UINT)(52), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT64)((

    ((void *)0)

    )), (UNITY_INT64)((node40.right)), (

    ((void *)0)

    ), (UNITY_UINT)(53), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((node30.left)), (

    ((void *)0)

    ), (UNITY_UINT)(54), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((node30.right)), (

    ((void *)0)

    ), (UNITY_UINT)(55), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT64)((&node25)), (UNITY_INT64)((node10.right)), (

    ((void *)0)

    ), (UNITY_UINT)(56), UNITY_DISPLAY_STYLE_HEX64);



 }

void test_rotateRight(void)

{ Node *root;

    initNode(&node5,

                   ((void *)0)

                       ,

                        ((void *)0)

                            ,0);

    initNode(&node20,

                    ((void *)0)

                        ,

                         ((void *)0)

                             ,0);

    initNode(&node10,&node5,&node20,0);

    initNode(&node30,&node10,

                            ((void *)0)

                                ,-2);



    root = rotateRight(&node30);

    UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((root)), (

   ((void *)0)

   ), (UNITY_UINT)(75), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node20.left)), (

   ((void *)0)

   ), (UNITY_UINT)(76), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node20.right)), (

   ((void *)0)

   ), (UNITY_UINT)(77), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node5.left)), (

   ((void *)0)

   ), (UNITY_UINT)(78), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node5.right)), (

   ((void *)0)

   ), (UNITY_UINT)(79), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node20)), (UNITY_INT64)((node30.left)), (

   ((void *)0)

   ), (UNITY_UINT)(80), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node30.right)), (

   ((void *)0)

   ), (UNITY_UINT)(81), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node5)), (UNITY_INT64)((node10.left)), (

   ((void *)0)

   ), (UNITY_UINT)(82), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node30)), (UNITY_INT64)((node10.right)), (

   ((void *)0)

   ), (UNITY_UINT)(83), UNITY_DISPLAY_STYLE_HEX64);



}
