#include "build/temp/_test_Remove.c"
#include "Remove.h"
#include "unity.h"


Node node1,node5 , node10,node15,node20,node25,node30,node35,node40;

Node node45,node50,node55,node60,node65,node70,node90;

Node node100;



void initNode(Node *node,Node *left,Node *right,int bf){

  node->left = left;

  node->right = right;

  node->balanceFactor = bf;

}



void setUp(void){

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

  node65.data = 65;

  node70.data = 70;

  node90.data = 90;

  node100.data = 100;

}

void tearDown(void){}

void test_remove_40(void){



  initNode(&node10,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node25,&node10,

                          ((void *)0)

                              ,0);

  initNode(&node45,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node40,&node25,&node45,0);

  initNode(&node55,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node70,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node60,&node55,&node70,0);

  initNode(&node50,&node40,&node60,0);



  Node *root = &node50;

  root=avl_Remove(&root,&node40);

  UnityAssertEqualNumber((UNITY_INT64)((root)), (UNITY_INT64)((&node50)), (

 ((void *)0)

 ), (UNITY_UINT)(70), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node25)), (UNITY_INT64)((node45.left)), (

 ((void *)0)

 ), (UNITY_UINT)(71), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node45.right)), (

 ((void *)0)

 ), (UNITY_UINT)(72), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((node25.left)), (

 ((void *)0)

 ), (UNITY_UINT)(73), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node25.right)), (

 ((void *)0)

 ), (UNITY_UINT)(74), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node55.left)), (

 ((void *)0)

 ), (UNITY_UINT)(75), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node55.right)), (

 ((void *)0)

 ), (UNITY_UINT)(76), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node10.left)), (

 ((void *)0)

 ), (UNITY_UINT)(77), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node10.right)), (

 ((void *)0)

 ), (UNITY_UINT)(78), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node70.left)), (

 ((void *)0)

 ), (UNITY_UINT)(79), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node70.right)), (

 ((void *)0)

 ), (UNITY_UINT)(80), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node55)), (UNITY_INT64)((node60.left)), (

 ((void *)0)

 ), (UNITY_UINT)(81), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node70)), (UNITY_INT64)((node60.right)), (

 ((void *)0)

 ), (UNITY_UINT)(82), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node45)), (UNITY_INT64)((node50.left)), (

 ((void *)0)

 ), (UNITY_UINT)(83), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node60)), (UNITY_INT64)((node50.right)), (

 ((void *)0)

 ), (UNITY_UINT)(84), UNITY_DISPLAY_STYLE_HEX64);

}
