#include "build/temp/_test_Insert.c"
#include "Insert.h"
#include "unity.h"




Node node1,node5 , node10,node15,node20,node25,node30,node35,node40;

Node node45,node50,node55,node60;



void initNode(Node *node,Node *left,Node *right){

  node->left = left;

  node->right = right;

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

}

void tearDown(void){}



void test_Insert_20_with_10_as_root(void){

  Node *root = &node10;

  initNode(&node10,

                  ((void *)0)

                      ,

                       ((void *)0)

                           );

  avl_Insert(&root,&node20);

  UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(34), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node20)), (UNITY_INT64)((node10.right)), (

 ((void *)0)

 ), (UNITY_UINT)(35), UNITY_DISPLAY_STYLE_HEX64);



}



void test_Insert_5_with_10_as_root(void){

  Node *root = &node10;

  initNode(&node10,

                  ((void *)0)

                      ,

                       ((void *)0)

                           );

  avl_Insert(&root,&node5);

  UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(43), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node5)), (UNITY_INT64)((node10.left)), (

 ((void *)0)

 ), (UNITY_UINT)(44), UNITY_DISPLAY_STYLE_HEX64);



}



void test_Insert_20_with_10_as_root_N_15_as_child(void){

  Node *root = &node10;

  initNode(&node10,

                  ((void *)0)

                      ,&node15);

  avl_Insert(&root,&node20);

  UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(52), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node15)), (UNITY_INT64)((node10.right)), (

 ((void *)0)

 ), (UNITY_UINT)(53), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node20)), (UNITY_INT64)((node15.right)), (

 ((void *)0)

 ), (UNITY_UINT)(54), UNITY_DISPLAY_STYLE_HEX64);



}



void test_Insert_10_with_30_as_root_N_15_as_child(void){

  Node *root = &node30;

  initNode(&node30,&node15,

                          ((void *)0)

                              );

  avl_Insert(&root,&node10);

  UnityAssertEqualNumber((UNITY_INT64)((&node30)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(62), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node15)), (UNITY_INT64)((node30.left)), (

 ((void *)0)

 ), (UNITY_UINT)(63), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((node15.left)), (

 ((void *)0)

 ), (UNITY_UINT)(64), UNITY_DISPLAY_STYLE_HEX64);



}
