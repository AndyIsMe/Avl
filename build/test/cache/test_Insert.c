#include "build/temp/_test_Insert.c"
#include "Rotate.h"
#include "Insert.h"
#include "unity.h"




Node node1,node5 , node10,node15,node20,node25,node30,node35,node40;

Node node45,node50,node55,node60,node65;

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

  node100.data = 100;

}

void tearDown(void){}



void test_Insert_20_with_10_as_root(void){

  Node *root = &node10;

  initNode(&node10,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  avl_Insert(&root,&node20);

  UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(39), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node20)), (UNITY_INT64)((node10.right)), (

 ((void *)0)

 ), (UNITY_UINT)(40), UNITY_DISPLAY_STYLE_HEX64);



}



void test_Insert_5_with_10_as_root(void){

  Node *root = &node10;

  initNode(&node10,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  avl_Insert(&root,&node5);

  UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(48), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node5)), (UNITY_INT64)((node10.left)), (

 ((void *)0)

 ), (UNITY_UINT)(49), UNITY_DISPLAY_STYLE_HEX64);



}



void test_Insert_20_with_10_as_root_N_15_as_child(void){

  Node *root = &node10;

  initNode(&node10,

                  ((void *)0)

                      ,&node15,1);

  avl_Insert(&root,&node20);

  UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(57), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node15)), (UNITY_INT64)((node10.right)), (

 ((void *)0)

 ), (UNITY_UINT)(58), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node20)), (UNITY_INT64)((node15.right)), (

 ((void *)0)

 ), (UNITY_UINT)(59), UNITY_DISPLAY_STYLE_HEX64);



}



void test_Insert_10_with_30_as_root_N_15_as_child(void){

  Node *root = &node30;

  initNode(&node30,&node15,

                          ((void *)0)

                              ,-1);

  avl_Insert(&root,&node10);

  UnityAssertEqualNumber((UNITY_INT64)((&node30)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(67), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node15)), (UNITY_INT64)((node30.left)), (

 ((void *)0)

 ), (UNITY_UINT)(68), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((node15.left)), (

 ((void *)0)

 ), (UNITY_UINT)(69), UNITY_DISPLAY_STYLE_HEX64);



}

void test_avlBalanceRightTree_given_40_50_100_expect_a_balance_tree(void){

  initNode(&node100,

                   ((void *)0)

                       ,

                        ((void *)0)

                            ,0);

  initNode(&node50,

                  ((void *)0)

                      ,&node100,1);

  initNode(&node40,

                  ((void *)0)

                      ,&node50,2);

  Node *root = &node40;



  avlBalanceRightTreeV1(&root);

  UnityAssertEqualNumber((UNITY_INT64)((&node50)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(104), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((node50.left)), (

 ((void *)0)

 ), (UNITY_UINT)(105), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node100)), (UNITY_INT64)((node50.right)), (

 ((void *)0)

 ), (UNITY_UINT)(106), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(107), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(108), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node100.left)), (

 ((void *)0)

 ), (UNITY_UINT)(109), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node100.right)), (

 ((void *)0)

 ), (UNITY_UINT)(110), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node50.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(111), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(112), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node100.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(113), UNITY_DISPLAY_STYLE_INT);

}

void test_avlBalanceRightTree_given_40_50_100_45_expect_a_balance_tree(void){

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

  initNode(&node50,&node45,&node100,0);

  initNode(&node40,

                  ((void *)0)

                      ,&node50,2);

  Node *root = &node40;



  avlBalanceRightTreeV1(&root);

  UnityAssertEqualNumber((UNITY_INT64)((&node50)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(131), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((node50.left)), (

 ((void *)0)

 ), (UNITY_UINT)(132), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node100)), (UNITY_INT64)((node50.right)), (

 ((void *)0)

 ), (UNITY_UINT)(133), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(134), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node45)), (UNITY_INT64)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(135), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node100.left)), (

 ((void *)0)

 ), (UNITY_UINT)(136), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node100.right)), (

 ((void *)0)

 ), (UNITY_UINT)(137), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node45.left)), (

 ((void *)0)

 ), (UNITY_UINT)(138), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node45.right)), (

 ((void *)0)

 ), (UNITY_UINT)(139), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((node50.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(140), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((node40.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(141), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node45.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(142), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node100.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(143), UNITY_DISPLAY_STYLE_INT);

}

void test_avlBalanceRightTreeV1_given_15_20_35_45_50_55_expect_a_balance_tree(void){

  initNode(&node15,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node50,&node45,&node55,-1);

  initNode(&node45,&node35,

                          ((void *)0)

                              ,-1);

  initNode(&node35,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node55,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node20,&node15,&node50,2);

  Node *root = &node20;



  checkRotation(bf);

  if(bf == 2){

    avlBalanceRightTreeV1(&root);

              }

  else if(bf == -2){

    avlBalanceLeftTreeV1(&root);

                    }

  UnityAssertEqualNumber((UNITY_INT64)((&node45)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(180), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node50.left)), (

 ((void *)0)

 ), (UNITY_UINT)(181), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node55)), (UNITY_INT64)((node50.right)), (

 ((void *)0)

 ), (UNITY_UINT)(182), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node55.left)), (

 ((void *)0)

 ), (UNITY_UINT)(183), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node55.right)), (

 ((void *)0)

 ), (UNITY_UINT)(184), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node35.left)), (

 ((void *)0)

 ), (UNITY_UINT)(185), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node35.right)), (

 ((void *)0)

 ), (UNITY_UINT)(186), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node15.left)), (

 ((void *)0)

 ), (UNITY_UINT)(187), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node15.right)), (

 ((void *)0)

 ), (UNITY_UINT)(188), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node15)), (UNITY_INT64)((node20.left)), (

 ((void *)0)

 ), (UNITY_UINT)(189), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node35)), (UNITY_INT64)((node20.right)), (

 ((void *)0)

 ), (UNITY_UINT)(190), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node20)), (UNITY_INT64)((node45.left)), (

 ((void *)0)

 ), (UNITY_UINT)(191), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node50)), (UNITY_INT64)((node45.right)), (

 ((void *)0)

 ), (UNITY_UINT)(192), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node15.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(193), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node20.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(194), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node35.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(195), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node45.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(196), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((node50.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(197), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node55.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(198), UNITY_DISPLAY_STYLE_INT);

}

void test_avlBalanceRightTreeV1_given_15_20_30_35_40_45_55_expect_a_balance_tree(void){

  initNode(&node15,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node30,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node40,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node55,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node35,&node30,&node40,0);

  initNode(&node45,&node35,&node55,-1);

  initNode(&node20,&node15,&node45,+2);

  Node *root = &node20;



  avlBalanceRightTreeV1(&root);

  UnityAssertEqualNumber((UNITY_INT64)((&node35)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(230), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node55.left)), (

 ((void *)0)

 ), (UNITY_UINT)(231), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node55.right)), (

 ((void *)0)

 ), (UNITY_UINT)(232), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(233), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(234), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node30.left)), (

 ((void *)0)

 ), (UNITY_UINT)(235), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node30.right)), (

 ((void *)0)

 ), (UNITY_UINT)(236), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node15.left)), (

 ((void *)0)

 ), (UNITY_UINT)(237), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node15.right)), (

 ((void *)0)

 ), (UNITY_UINT)(238), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node15)), (UNITY_INT64)((node20.left)), (

 ((void *)0)

 ), (UNITY_UINT)(239), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node30)), (UNITY_INT64)((node20.right)), (

 ((void *)0)

 ), (UNITY_UINT)(240), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((node45.left)), (

 ((void *)0)

 ), (UNITY_UINT)(241), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node55)), (UNITY_INT64)((node45.right)), (

 ((void *)0)

 ), (UNITY_UINT)(242), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node20)), (UNITY_INT64)((node35.left)), (

 ((void *)0)

 ), (UNITY_UINT)(243), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node45)), (UNITY_INT64)((node35.right)), (

 ((void *)0)

 ), (UNITY_UINT)(244), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node15.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(245), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node20.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(246), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node30.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(247), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node35.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(248), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(249), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node45.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(250), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node55.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(251), UNITY_DISPLAY_STYLE_INT);

}

void test_avlBalanceRightTreeV1_given_15_20_35_40_45_55_expect_a_balance_tree(void){

  initNode(&node15,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node35,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node55,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node25,

                  ((void *)0)

                      ,&node35,1);

  initNode(&node40,&node25,&node55,-1);

  initNode(&node20,&node15,&node40,+2);

  Node *root = &node20;



  avlBalanceRightTreeV1(&root);

  UnityAssertEqualNumber((UNITY_INT64)((&node25)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(283), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node55.left)), (

 ((void *)0)

 ), (UNITY_UINT)(284), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node55.right)), (

 ((void *)0)

 ), (UNITY_UINT)(285), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node35.left)), (

 ((void *)0)

 ), (UNITY_UINT)(286), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node35.right)), (

 ((void *)0)

 ), (UNITY_UINT)(287), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node15.left)), (

 ((void *)0)

 ), (UNITY_UINT)(288), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node15.right)), (

 ((void *)0)

 ), (UNITY_UINT)(289), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node15)), (UNITY_INT64)((node20.left)), (

 ((void *)0)

 ), (UNITY_UINT)(290), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node20.right)), (

 ((void *)0)

 ), (UNITY_UINT)(291), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node35)), (UNITY_INT64)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(292), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node55)), (UNITY_INT64)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(293), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node20)), (UNITY_INT64)((node25.left)), (

 ((void *)0)

 ), (UNITY_UINT)(294), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((node25.right)), (

 ((void *)0)

 ), (UNITY_UINT)(295), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node15.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(296), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((node20.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(297), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node35.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(298), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(299), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node45.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(300), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node55.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(301), UNITY_DISPLAY_STYLE_INT);

}

void test_avlBalanceLeftTree_given_40_50_60_expect_a_balance_tree(void){

  initNode(&node60,&node50,

                          ((void *)0)

                              ,-2);

  initNode(&node50,&node40,

                          ((void *)0)

                              ,-1);

  initNode(&node40,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  Node *root = &node60;



  avlBalanceLeftTree(&root);

  UnityAssertEqualNumber((UNITY_INT64)((&node50)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(319), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((node50.left)), (

 ((void *)0)

 ), (UNITY_UINT)(320), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node60)), (UNITY_INT64)((node50.right)), (

 ((void *)0)

 ), (UNITY_UINT)(321), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(322), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(323), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node60.left)), (

 ((void *)0)

 ), (UNITY_UINT)(324), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node60.right)), (

 ((void *)0)

 ), (UNITY_UINT)(325), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node50.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(326), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(327), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node60.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(328), UNITY_DISPLAY_STYLE_INT);

}

void test_avlBalanceLeftTree_given_40_55_50_60_expect_a_balance_tree(void){

  initNode(&node60,&node50,

                          ((void *)0)

                              ,-2);

  initNode(&node50,&node40,&node55,0);

  initNode(&node40,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node55,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  Node *root = &node60;



  avlBalanceLeftTree(&root);

  UnityAssertEqualNumber((UNITY_INT64)((&node50)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(346), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((node50.left)), (

 ((void *)0)

 ), (UNITY_UINT)(347), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node60)), (UNITY_INT64)((node50.right)), (

 ((void *)0)

 ), (UNITY_UINT)(348), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(349), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(350), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node55.left)), (

 ((void *)0)

 ), (UNITY_UINT)(351), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node55.right)), (

 ((void *)0)

 ), (UNITY_UINT)(352), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node55)), (UNITY_INT64)((node60.left)), (

 ((void *)0)

 ), (UNITY_UINT)(353), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node60.right)), (

 ((void *)0)

 ), (UNITY_UINT)(354), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((node50.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(355), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(356), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((node60.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(357), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node55.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(358), UNITY_DISPLAY_STYLE_INT);

}

void test_avlBalanceLeftTreeV1_given_10_40_45_50_60_65_expect_a_balance_tree(void){

  initNode(&node60,&node40,&node65,-2);

  initNode(&node40,&node10,&node45,1);

  initNode(&node45,

                  ((void *)0)

                      ,&node50,1);

  initNode(&node10,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node50,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node65,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  Node *root = &node60;



  avlBalanceLeftTreeV1(&root);

  UnityAssertEqualNumber((UNITY_INT64)((&node45)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(389), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((node45.left)), (

 ((void *)0)

 ), (UNITY_UINT)(390), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node60)), (UNITY_INT64)((node45.right)), (

 ((void *)0)

 ), (UNITY_UINT)(391), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(392), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node50)), (UNITY_INT64)((node60.left)), (

 ((void *)0)

 ), (UNITY_UINT)(393), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node65)), (UNITY_INT64)((node60.right)), (

 ((void *)0)

 ), (UNITY_UINT)(394), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(395), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node10.left)), (

 ((void *)0)

 ), (UNITY_UINT)(396), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node10.right)), (

 ((void *)0)

 ), (UNITY_UINT)(397), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node50.left)), (

 ((void *)0)

 ), (UNITY_UINT)(398), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node50.right)), (

 ((void *)0)

 ), (UNITY_UINT)(399), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node65.left)), (

 ((void *)0)

 ), (UNITY_UINT)(400), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node65.right)), (

 ((void *)0)

 ), (UNITY_UINT)(401), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node10.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(402), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((node40.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(403), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node45.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(404), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node50.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(405), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node60.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(406), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node65.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(407), UNITY_DISPLAY_STYLE_INT);

}

void test_avlBalanceLeftTreeV1_given_10_30_40_45_50_60_65_expect_a_balance_tree(void){

  initNode(&node60,&node30,&node65,-2);

  initNode(&node30,&node10,&node45,1);

  initNode(&node45,&node40,&node50,0);

  initNode(&node10,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

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

  initNode(&node65,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  Node *root = &node60;



  avlBalanceLeftTreeV1(&root);

  UnityAssertEqualNumber((UNITY_INT64)((&node45)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(439), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((node30.left)), (

 ((void *)0)

 ), (UNITY_UINT)(440), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((node30.right)), (

 ((void *)0)

 ), (UNITY_UINT)(441), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node30)), (UNITY_INT64)((node45.left)), (

 ((void *)0)

 ), (UNITY_UINT)(442), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node60)), (UNITY_INT64)((node45.right)), (

 ((void *)0)

 ), (UNITY_UINT)(443), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(444), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(445), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node50)), (UNITY_INT64)((node60.left)), (

 ((void *)0)

 ), (UNITY_UINT)(446), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node65)), (UNITY_INT64)((node60.right)), (

 ((void *)0)

 ), (UNITY_UINT)(447), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node10.left)), (

 ((void *)0)

 ), (UNITY_UINT)(448), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node10.right)), (

 ((void *)0)

 ), (UNITY_UINT)(449), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node50.left)), (

 ((void *)0)

 ), (UNITY_UINT)(450), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node50.right)), (

 ((void *)0)

 ), (UNITY_UINT)(451), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node65.left)), (

 ((void *)0)

 ), (UNITY_UINT)(452), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node65.right)), (

 ((void *)0)

 ), (UNITY_UINT)(453), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node10.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(454), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node30.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(455), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(456), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node45.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(457), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node50.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(458), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node60.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(459), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node65.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(460), UNITY_DISPLAY_STYLE_INT);

}

void test_avlBalanceLeftTreeV1_given_10_30_40_45_60_65_expect_a_balance_tree(void){

  initNode(&node60,&node30,&node65,-2);

  initNode(&node30,&node10,&node45,1);

  initNode(&node45,&node40,

                          ((void *)0)

                              ,-1);

  initNode(&node10,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node40,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node65,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  Node *root = &node60;



  avlBalanceLeftTreeV1(&root);

  UnityAssertEqualNumber((UNITY_INT64)((&node45)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(491), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((node30.left)), (

 ((void *)0)

 ), (UNITY_UINT)(492), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((node30.right)), (

 ((void *)0)

 ), (UNITY_UINT)(493), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node30)), (UNITY_INT64)((node45.left)), (

 ((void *)0)

 ), (UNITY_UINT)(494), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node60)), (UNITY_INT64)((node45.right)), (

 ((void *)0)

 ), (UNITY_UINT)(495), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(496), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(497), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node60.left)), (

 ((void *)0)

 ), (UNITY_UINT)(498), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node65)), (UNITY_INT64)((node60.right)), (

 ((void *)0)

 ), (UNITY_UINT)(499), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node10.left)), (

 ((void *)0)

 ), (UNITY_UINT)(500), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node10.right)), (

 ((void *)0)

 ), (UNITY_UINT)(501), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node65.left)), (

 ((void *)0)

 ), (UNITY_UINT)(502), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node65.right)), (

 ((void *)0)

 ), (UNITY_UINT)(503), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node10.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(504), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node30.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(505), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(506), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node45.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(507), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((node60.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(508), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node65.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(509), UNITY_DISPLAY_STYLE_INT);

}
