#include "build/temp/_test_Rotate.c"
#include "Insert.h"
#include "Rotate.h"
#include "unity.h"


Node *root;

Node node1,node5 , node10,node15,node20,node25,node30,node35,node40;

Node node45,node50,node55,node60;

Node node100;



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

  node60.data = 60;

  node100.data = 100;

}



void tearDown(void)

{

}

 void test_rotateLeft(void)

 {

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

    ), (UNITY_UINT)(53), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT64)((

    ((void *)0)

    )), (UNITY_INT64)((node10.left)), (

    ((void *)0)

    ), (UNITY_UINT)(54), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT64)((

    ((void *)0)

    )), (UNITY_INT64)((node25.right)), (

    ((void *)0)

    ), (UNITY_UINT)(55), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT64)((

    ((void *)0)

    )), (UNITY_INT64)((node25.left)), (

    ((void *)0)

    ), (UNITY_UINT)(56), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT64)((

    ((void *)0)

    )), (UNITY_INT64)((node40.left)), (

    ((void *)0)

    ), (UNITY_UINT)(57), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT64)((

    ((void *)0)

    )), (UNITY_INT64)((node40.right)), (

    ((void *)0)

    ), (UNITY_UINT)(58), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((node30.left)), (

    ((void *)0)

    ), (UNITY_UINT)(59), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((node30.right)), (

    ((void *)0)

    ), (UNITY_UINT)(60), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT64)((&node25)), (UNITY_INT64)((node10.right)), (

    ((void *)0)

    ), (UNITY_UINT)(61), UNITY_DISPLAY_STYLE_HEX64);



 }

void test_rotateRight(void)

{

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

   ), (UNITY_UINT)(80), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node20.left)), (

   ((void *)0)

   ), (UNITY_UINT)(81), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node20.right)), (

   ((void *)0)

   ), (UNITY_UINT)(82), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node5.left)), (

   ((void *)0)

   ), (UNITY_UINT)(83), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node5.right)), (

   ((void *)0)

   ), (UNITY_UINT)(84), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node20)), (UNITY_INT64)((node30.left)), (

   ((void *)0)

   ), (UNITY_UINT)(85), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node30.right)), (

   ((void *)0)

   ), (UNITY_UINT)(86), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node5)), (UNITY_INT64)((node10.left)), (

   ((void *)0)

   ), (UNITY_UINT)(87), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node30)), (UNITY_INT64)((node10.right)), (

   ((void *)0)

   ), (UNITY_UINT)(88), UNITY_DISPLAY_STYLE_HEX64);



}

void test_rotateLeftRight(void){



  initNode(&node30,&node25,&node40,0);

  initNode(&node40,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node50,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node25,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node10,

                  ((void *)0)

                      ,&node30,2);

  initNode(&node45,&node10,&node50,-2);



  root = rotateLeftRight(&node45);

  UnityAssertEqualNumber((UNITY_INT64)((&node30)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(119), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node10.left)), (

 ((void *)0)

 ), (UNITY_UINT)(120), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node25.left)), (

 ((void *)0)

 ), (UNITY_UINT)(121), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node25.right)), (

 ((void *)0)

 ), (UNITY_UINT)(122), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(123), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(124), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node50.left)), (

 ((void *)0)

 ), (UNITY_UINT)(125), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node50.right)), (

 ((void *)0)

 ), (UNITY_UINT)(126), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node25)), (UNITY_INT64)((node10.right)), (

 ((void *)0)

 ), (UNITY_UINT)(127), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((node30.left)), (

 ((void *)0)

 ), (UNITY_UINT)(128), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((node45.left)), (

 ((void *)0)

 ), (UNITY_UINT)(129), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node50)), (UNITY_INT64)((node45.right)), (

 ((void *)0)

 ), (UNITY_UINT)(130), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node45)), (UNITY_INT64)((node30.right)), (

 ((void *)0)

 ), (UNITY_UINT)(131), UNITY_DISPLAY_STYLE_HEX64);



}

 void test_rotateRightLeft(void){

       initNode(&node1,

                      ((void *)0)

                          ,

                           ((void *)0)

                               ,0);

       initNode(&node20,

                       ((void *)0)

                           ,

                            ((void *)0)

                                ,0);

       initNode(&node35,

                       ((void *)0)

                           ,

                            ((void *)0)

                                ,0);

       initNode(&node25,&node20,&node35,0);

       initNode(&node40,&node25,

                               ((void *)0)

                                   ,-2);

       initNode(&node5,&node1,&node40,2);



       root = rotateRightLeft(&node5);

       UnityAssertEqualNumber((UNITY_INT64)((&node25)), (UNITY_INT64)((root)), (

      ((void *)0)

      ), (UNITY_UINT)(156), UNITY_DISPLAY_STYLE_HEX64);

       UnityAssertEqualNumber((UNITY_INT64)((

      ((void *)0)

      )), (UNITY_INT64)((node1.left)), (

      ((void *)0)

      ), (UNITY_UINT)(157), UNITY_DISPLAY_STYLE_HEX64);

       UnityAssertEqualNumber((UNITY_INT64)((

      ((void *)0)

      )), (UNITY_INT64)((node1.right)), (

      ((void *)0)

      ), (UNITY_UINT)(158), UNITY_DISPLAY_STYLE_HEX64);

       UnityAssertEqualNumber((UNITY_INT64)((

      ((void *)0)

      )), (UNITY_INT64)((node20.left)), (

      ((void *)0)

      ), (UNITY_UINT)(159), UNITY_DISPLAY_STYLE_HEX64);

       UnityAssertEqualNumber((UNITY_INT64)((

      ((void *)0)

      )), (UNITY_INT64)((node20.right)), (

      ((void *)0)

      ), (UNITY_UINT)(160), UNITY_DISPLAY_STYLE_HEX64);

       UnityAssertEqualNumber((UNITY_INT64)((

      ((void *)0)

      )), (UNITY_INT64)((node35.left)), (

      ((void *)0)

      ), (UNITY_UINT)(161), UNITY_DISPLAY_STYLE_HEX64);

       UnityAssertEqualNumber((UNITY_INT64)((

      ((void *)0)

      )), (UNITY_INT64)((node35.right)), (

      ((void *)0)

      ), (UNITY_UINT)(162), UNITY_DISPLAY_STYLE_HEX64);

       UnityAssertEqualNumber((UNITY_INT64)((&node1)), (UNITY_INT64)((node5.left)), (

      ((void *)0)

      ), (UNITY_UINT)(163), UNITY_DISPLAY_STYLE_HEX64);

       UnityAssertEqualNumber((UNITY_INT64)((&node20)), (UNITY_INT64)((node5.right)), (

      ((void *)0)

      ), (UNITY_UINT)(164), UNITY_DISPLAY_STYLE_HEX64);

       UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((node25.right)), (

      ((void *)0)

      ), (UNITY_UINT)(165), UNITY_DISPLAY_STYLE_HEX64);

       UnityAssertEqualNumber((UNITY_INT64)((&node5)), (UNITY_INT64)((node25.left)), (

      ((void *)0)

      ), (UNITY_UINT)(166), UNITY_DISPLAY_STYLE_HEX64);

       UnityAssertEqualNumber((UNITY_INT64)((&node35)), (UNITY_INT64)((node40.left)), (

      ((void *)0)

      ), (UNITY_UINT)(167), UNITY_DISPLAY_STYLE_HEX64);

       UnityAssertEqualNumber((UNITY_INT64)((

      ((void *)0)

      )), (UNITY_INT64)((node40.right)), (

      ((void *)0)

      ), (UNITY_UINT)(168), UNITY_DISPLAY_STYLE_HEX64);



}
