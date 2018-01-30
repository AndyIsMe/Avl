#include "build/temp/_test_Rotate.c"
#include "Insert.h"
#include "Rotate.h"
#include "unity.h"


Node node1,node5 , node10,node15,node20,node25,node30,node35,node40;

Node node45,node50,node55,node60,node65,node90;

Node node100;



void initNode(Node *node,Node *left,Node *right,int bf){

  node->left = left;

  node->right = right;

  node->balanceFactor = bf;

}



void setUp(void){

  node1.data = (int*)1;

  node5.data = (int*)5;

  node10.data = (int*)10;

  node15.data = (int*)15;

  node20.data = (int*)20;

  node25.data = (int*)25;

  node30.data = (int*)30;

  node35.data = (int*)35;

  node40.data = (int*)40;

  node45.data = (int*)45;

  node50.data = (int*)50;

  node55.data = (int*)55;

  node60.data = (int*)60;

  node65.data = (int*)65;

  node90.data = (int*)90;

  node100.data = (int*)100;

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



     Node *root = rotateLeft(&node10);

     UnityAssertEqualNumber((UNITY_INT32)((&node30)), (UNITY_INT32)((root)), (

    ((void *)0)

    ), (UNITY_UINT)(52), UNITY_DISPLAY_STYLE_HEX32);

     UnityAssertEqualNumber((UNITY_INT32)((

    ((void *)0)

    )), (UNITY_INT32)((node10.left)), (

    ((void *)0)

    ), (UNITY_UINT)(53), UNITY_DISPLAY_STYLE_HEX32);

     UnityAssertEqualNumber((UNITY_INT32)((

    ((void *)0)

    )), (UNITY_INT32)((node25.right)), (

    ((void *)0)

    ), (UNITY_UINT)(54), UNITY_DISPLAY_STYLE_HEX32);

     UnityAssertEqualNumber((UNITY_INT32)((

    ((void *)0)

    )), (UNITY_INT32)((node25.left)), (

    ((void *)0)

    ), (UNITY_UINT)(55), UNITY_DISPLAY_STYLE_HEX32);

     UnityAssertEqualNumber((UNITY_INT32)((

    ((void *)0)

    )), (UNITY_INT32)((node40.left)), (

    ((void *)0)

    ), (UNITY_UINT)(56), UNITY_DISPLAY_STYLE_HEX32);

     UnityAssertEqualNumber((UNITY_INT32)((

    ((void *)0)

    )), (UNITY_INT32)((node40.right)), (

    ((void *)0)

    ), (UNITY_UINT)(57), UNITY_DISPLAY_STYLE_HEX32);

     UnityAssertEqualNumber((UNITY_INT32)((&node10)), (UNITY_INT32)((node30.left)), (

    ((void *)0)

    ), (UNITY_UINT)(58), UNITY_DISPLAY_STYLE_HEX32);

     UnityAssertEqualNumber((UNITY_INT32)((&node40)), (UNITY_INT32)((node30.right)), (

    ((void *)0)

    ), (UNITY_UINT)(59), UNITY_DISPLAY_STYLE_HEX32);

     UnityAssertEqualNumber((UNITY_INT32)((&node25)), (UNITY_INT32)((node10.right)), (

    ((void *)0)

    ), (UNITY_UINT)(60), UNITY_DISPLAY_STYLE_HEX32);



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



    Node *root = rotateRight(&node30);

    UnityAssertEqualNumber((UNITY_INT32)((&node10)), (UNITY_INT32)((root)), (

   ((void *)0)

   ), (UNITY_UINT)(79), UNITY_DISPLAY_STYLE_HEX32);

    UnityAssertEqualNumber((UNITY_INT32)((

   ((void *)0)

   )), (UNITY_INT32)((node20.left)), (

   ((void *)0)

   ), (UNITY_UINT)(80), UNITY_DISPLAY_STYLE_HEX32);

    UnityAssertEqualNumber((UNITY_INT32)((

   ((void *)0)

   )), (UNITY_INT32)((node20.right)), (

   ((void *)0)

   ), (UNITY_UINT)(81), UNITY_DISPLAY_STYLE_HEX32);

    UnityAssertEqualNumber((UNITY_INT32)((

   ((void *)0)

   )), (UNITY_INT32)((node5.left)), (

   ((void *)0)

   ), (UNITY_UINT)(82), UNITY_DISPLAY_STYLE_HEX32);

    UnityAssertEqualNumber((UNITY_INT32)((

   ((void *)0)

   )), (UNITY_INT32)((node5.right)), (

   ((void *)0)

   ), (UNITY_UINT)(83), UNITY_DISPLAY_STYLE_HEX32);

    UnityAssertEqualNumber((UNITY_INT32)((&node20)), (UNITY_INT32)((node30.left)), (

   ((void *)0)

   ), (UNITY_UINT)(84), UNITY_DISPLAY_STYLE_HEX32);

    UnityAssertEqualNumber((UNITY_INT32)((

   ((void *)0)

   )), (UNITY_INT32)((node30.right)), (

   ((void *)0)

   ), (UNITY_UINT)(85), UNITY_DISPLAY_STYLE_HEX32);

    UnityAssertEqualNumber((UNITY_INT32)((&node5)), (UNITY_INT32)((node10.left)), (

   ((void *)0)

   ), (UNITY_UINT)(86), UNITY_DISPLAY_STYLE_HEX32);

    UnityAssertEqualNumber((UNITY_INT32)((&node30)), (UNITY_INT32)((node10.right)), (

   ((void *)0)

   ), (UNITY_UINT)(87), UNITY_DISPLAY_STYLE_HEX32);



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



  Node *root = rotateLeftRight(&node45);

  UnityAssertEqualNumber((UNITY_INT32)((&node30)), (UNITY_INT32)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(118), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node10.left)), (

 ((void *)0)

 ), (UNITY_UINT)(119), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node25.left)), (

 ((void *)0)

 ), (UNITY_UINT)(120), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node25.right)), (

 ((void *)0)

 ), (UNITY_UINT)(121), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(122), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(123), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node50.left)), (

 ((void *)0)

 ), (UNITY_UINT)(124), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node50.right)), (

 ((void *)0)

 ), (UNITY_UINT)(125), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node25)), (UNITY_INT32)((node10.right)), (

 ((void *)0)

 ), (UNITY_UINT)(126), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node10)), (UNITY_INT32)((node30.left)), (

 ((void *)0)

 ), (UNITY_UINT)(127), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node40)), (UNITY_INT32)((node45.left)), (

 ((void *)0)

 ), (UNITY_UINT)(128), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node50)), (UNITY_INT32)((node45.right)), (

 ((void *)0)

 ), (UNITY_UINT)(129), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node45)), (UNITY_INT32)((node30.right)), (

 ((void *)0)

 ), (UNITY_UINT)(130), UNITY_DISPLAY_STYLE_HEX32);



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



       Node *root = rotateRightLeft(&node5);

       UnityAssertEqualNumber((UNITY_INT32)((&node25)), (UNITY_INT32)((root)), (

      ((void *)0)

      ), (UNITY_UINT)(155), UNITY_DISPLAY_STYLE_HEX32);

       UnityAssertEqualNumber((UNITY_INT32)((

      ((void *)0)

      )), (UNITY_INT32)((node1.left)), (

      ((void *)0)

      ), (UNITY_UINT)(156), UNITY_DISPLAY_STYLE_HEX32);

       UnityAssertEqualNumber((UNITY_INT32)((

      ((void *)0)

      )), (UNITY_INT32)((node1.right)), (

      ((void *)0)

      ), (UNITY_UINT)(157), UNITY_DISPLAY_STYLE_HEX32);

       UnityAssertEqualNumber((UNITY_INT32)((

      ((void *)0)

      )), (UNITY_INT32)((node20.left)), (

      ((void *)0)

      ), (UNITY_UINT)(158), UNITY_DISPLAY_STYLE_HEX32);

       UnityAssertEqualNumber((UNITY_INT32)((

      ((void *)0)

      )), (UNITY_INT32)((node20.right)), (

      ((void *)0)

      ), (UNITY_UINT)(159), UNITY_DISPLAY_STYLE_HEX32);

       UnityAssertEqualNumber((UNITY_INT32)((

      ((void *)0)

      )), (UNITY_INT32)((node35.left)), (

      ((void *)0)

      ), (UNITY_UINT)(160), UNITY_DISPLAY_STYLE_HEX32);

       UnityAssertEqualNumber((UNITY_INT32)((

      ((void *)0)

      )), (UNITY_INT32)((node35.right)), (

      ((void *)0)

      ), (UNITY_UINT)(161), UNITY_DISPLAY_STYLE_HEX32);

       UnityAssertEqualNumber((UNITY_INT32)((&node1)), (UNITY_INT32)((node5.left)), (

      ((void *)0)

      ), (UNITY_UINT)(162), UNITY_DISPLAY_STYLE_HEX32);

       UnityAssertEqualNumber((UNITY_INT32)((&node20)), (UNITY_INT32)((node5.right)), (

      ((void *)0)

      ), (UNITY_UINT)(163), UNITY_DISPLAY_STYLE_HEX32);

       UnityAssertEqualNumber((UNITY_INT32)((&node40)), (UNITY_INT32)((node25.right)), (

      ((void *)0)

      ), (UNITY_UINT)(164), UNITY_DISPLAY_STYLE_HEX32);

       UnityAssertEqualNumber((UNITY_INT32)((&node5)), (UNITY_INT32)((node25.left)), (

      ((void *)0)

      ), (UNITY_UINT)(165), UNITY_DISPLAY_STYLE_HEX32);

       UnityAssertEqualNumber((UNITY_INT32)((&node35)), (UNITY_INT32)((node40.left)), (

      ((void *)0)

      ), (UNITY_UINT)(166), UNITY_DISPLAY_STYLE_HEX32);

       UnityAssertEqualNumber((UNITY_INT32)((

      ((void *)0)

      )), (UNITY_INT32)((node40.right)), (

      ((void *)0)

      ), (UNITY_UINT)(167), UNITY_DISPLAY_STYLE_HEX32);



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

  UnityAssertEqualNumber((UNITY_INT32)((&node50)), (UNITY_INT32)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(201), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node40)), (UNITY_INT32)((node50.left)), (

 ((void *)0)

 ), (UNITY_UINT)(202), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node100)), (UNITY_INT32)((node50.right)), (

 ((void *)0)

 ), (UNITY_UINT)(203), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(204), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(205), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node100.left)), (

 ((void *)0)

 ), (UNITY_UINT)(206), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node100.right)), (

 ((void *)0)

 ), (UNITY_UINT)(207), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node50.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(208), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(209), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node100.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(210), UNITY_DISPLAY_STYLE_INT);

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

  UnityAssertEqualNumber((UNITY_INT32)((&node50)), (UNITY_INT32)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(228), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node40)), (UNITY_INT32)((node50.left)), (

 ((void *)0)

 ), (UNITY_UINT)(229), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node100)), (UNITY_INT32)((node50.right)), (

 ((void *)0)

 ), (UNITY_UINT)(230), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(231), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node45)), (UNITY_INT32)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(232), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node100.left)), (

 ((void *)0)

 ), (UNITY_UINT)(233), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node100.right)), (

 ((void *)0)

 ), (UNITY_UINT)(234), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node45.left)), (

 ((void *)0)

 ), (UNITY_UINT)(235), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node45.right)), (

 ((void *)0)

 ), (UNITY_UINT)(236), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((node50.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(237), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((node40.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(238), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node45.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(239), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node100.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(240), UNITY_DISPLAY_STYLE_INT);

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



  avlBalanceRightTreeV1(&root);



  UnityAssertEqualNumber((UNITY_INT32)((&node45)), (UNITY_INT32)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(272), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node50.left)), (

 ((void *)0)

 ), (UNITY_UINT)(273), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node55)), (UNITY_INT32)((node50.right)), (

 ((void *)0)

 ), (UNITY_UINT)(274), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node55.left)), (

 ((void *)0)

 ), (UNITY_UINT)(275), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node55.right)), (

 ((void *)0)

 ), (UNITY_UINT)(276), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node35.left)), (

 ((void *)0)

 ), (UNITY_UINT)(277), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node35.right)), (

 ((void *)0)

 ), (UNITY_UINT)(278), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node15.left)), (

 ((void *)0)

 ), (UNITY_UINT)(279), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node15.right)), (

 ((void *)0)

 ), (UNITY_UINT)(280), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node15)), (UNITY_INT32)((node20.left)), (

 ((void *)0)

 ), (UNITY_UINT)(281), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node35)), (UNITY_INT32)((node20.right)), (

 ((void *)0)

 ), (UNITY_UINT)(282), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node20)), (UNITY_INT32)((node45.left)), (

 ((void *)0)

 ), (UNITY_UINT)(283), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node50)), (UNITY_INT32)((node45.right)), (

 ((void *)0)

 ), (UNITY_UINT)(284), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node15.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(285), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node20.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(286), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node35.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(287), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node45.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(288), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((node50.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(289), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node55.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(290), UNITY_DISPLAY_STYLE_INT);

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

  UnityAssertEqualNumber((UNITY_INT32)((&node35)), (UNITY_INT32)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(322), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node55.left)), (

 ((void *)0)

 ), (UNITY_UINT)(323), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node55.right)), (

 ((void *)0)

 ), (UNITY_UINT)(324), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(325), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(326), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node30.left)), (

 ((void *)0)

 ), (UNITY_UINT)(327), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node30.right)), (

 ((void *)0)

 ), (UNITY_UINT)(328), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node15.left)), (

 ((void *)0)

 ), (UNITY_UINT)(329), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node15.right)), (

 ((void *)0)

 ), (UNITY_UINT)(330), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node15)), (UNITY_INT32)((node20.left)), (

 ((void *)0)

 ), (UNITY_UINT)(331), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node30)), (UNITY_INT32)((node20.right)), (

 ((void *)0)

 ), (UNITY_UINT)(332), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node40)), (UNITY_INT32)((node45.left)), (

 ((void *)0)

 ), (UNITY_UINT)(333), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node55)), (UNITY_INT32)((node45.right)), (

 ((void *)0)

 ), (UNITY_UINT)(334), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node20)), (UNITY_INT32)((node35.left)), (

 ((void *)0)

 ), (UNITY_UINT)(335), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node45)), (UNITY_INT32)((node35.right)), (

 ((void *)0)

 ), (UNITY_UINT)(336), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node15.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(337), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node20.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(338), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node30.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(339), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node35.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(340), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(341), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node45.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(342), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node55.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(343), UNITY_DISPLAY_STYLE_INT);

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

  UnityAssertEqualNumber((UNITY_INT32)((&node25)), (UNITY_INT32)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(375), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node55.left)), (

 ((void *)0)

 ), (UNITY_UINT)(376), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node55.right)), (

 ((void *)0)

 ), (UNITY_UINT)(377), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node35.left)), (

 ((void *)0)

 ), (UNITY_UINT)(378), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node35.right)), (

 ((void *)0)

 ), (UNITY_UINT)(379), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node15.left)), (

 ((void *)0)

 ), (UNITY_UINT)(380), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node15.right)), (

 ((void *)0)

 ), (UNITY_UINT)(381), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node15)), (UNITY_INT32)((node20.left)), (

 ((void *)0)

 ), (UNITY_UINT)(382), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node20.right)), (

 ((void *)0)

 ), (UNITY_UINT)(383), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node35)), (UNITY_INT32)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(384), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node55)), (UNITY_INT32)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(385), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node20)), (UNITY_INT32)((node25.left)), (

 ((void *)0)

 ), (UNITY_UINT)(386), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node40)), (UNITY_INT32)((node25.right)), (

 ((void *)0)

 ), (UNITY_UINT)(387), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node15.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(388), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((node20.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(389), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node35.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(390), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(391), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node45.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(392), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node55.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(393), UNITY_DISPLAY_STYLE_INT);

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

  UnityAssertEqualNumber((UNITY_INT32)((&node50)), (UNITY_INT32)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(411), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node40)), (UNITY_INT32)((node50.left)), (

 ((void *)0)

 ), (UNITY_UINT)(412), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node60)), (UNITY_INT32)((node50.right)), (

 ((void *)0)

 ), (UNITY_UINT)(413), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(414), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(415), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node60.left)), (

 ((void *)0)

 ), (UNITY_UINT)(416), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node60.right)), (

 ((void *)0)

 ), (UNITY_UINT)(417), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node50.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(418), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(419), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node60.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(420), UNITY_DISPLAY_STYLE_INT);

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

  UnityAssertEqualNumber((UNITY_INT32)((&node50)), (UNITY_INT32)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(438), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node40)), (UNITY_INT32)((node50.left)), (

 ((void *)0)

 ), (UNITY_UINT)(439), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node60)), (UNITY_INT32)((node50.right)), (

 ((void *)0)

 ), (UNITY_UINT)(440), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(441), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(442), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node55.left)), (

 ((void *)0)

 ), (UNITY_UINT)(443), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node55.right)), (

 ((void *)0)

 ), (UNITY_UINT)(444), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node55)), (UNITY_INT32)((node60.left)), (

 ((void *)0)

 ), (UNITY_UINT)(445), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node60.right)), (

 ((void *)0)

 ), (UNITY_UINT)(446), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((node50.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(447), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(448), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((node60.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(449), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node55.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(450), UNITY_DISPLAY_STYLE_INT);

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

  UnityAssertEqualNumber((UNITY_INT32)((&node45)), (UNITY_INT32)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(481), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node40)), (UNITY_INT32)((node45.left)), (

 ((void *)0)

 ), (UNITY_UINT)(482), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node60)), (UNITY_INT32)((node45.right)), (

 ((void *)0)

 ), (UNITY_UINT)(483), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node10)), (UNITY_INT32)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(484), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node50)), (UNITY_INT32)((node60.left)), (

 ((void *)0)

 ), (UNITY_UINT)(485), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node65)), (UNITY_INT32)((node60.right)), (

 ((void *)0)

 ), (UNITY_UINT)(486), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(487), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node10.left)), (

 ((void *)0)

 ), (UNITY_UINT)(488), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node10.right)), (

 ((void *)0)

 ), (UNITY_UINT)(489), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node50.left)), (

 ((void *)0)

 ), (UNITY_UINT)(490), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node50.right)), (

 ((void *)0)

 ), (UNITY_UINT)(491), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node65.left)), (

 ((void *)0)

 ), (UNITY_UINT)(492), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node65.right)), (

 ((void *)0)

 ), (UNITY_UINT)(493), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node10.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(494), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((node40.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(495), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node45.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(496), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node50.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(497), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node60.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(498), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node65.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(499), UNITY_DISPLAY_STYLE_INT);

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

  UnityAssertEqualNumber((UNITY_INT32)((&node45)), (UNITY_INT32)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(531), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node10)), (UNITY_INT32)((node30.left)), (

 ((void *)0)

 ), (UNITY_UINT)(532), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node40)), (UNITY_INT32)((node30.right)), (

 ((void *)0)

 ), (UNITY_UINT)(533), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node30)), (UNITY_INT32)((node45.left)), (

 ((void *)0)

 ), (UNITY_UINT)(534), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node60)), (UNITY_INT32)((node45.right)), (

 ((void *)0)

 ), (UNITY_UINT)(535), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(536), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(537), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node50)), (UNITY_INT32)((node60.left)), (

 ((void *)0)

 ), (UNITY_UINT)(538), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node65)), (UNITY_INT32)((node60.right)), (

 ((void *)0)

 ), (UNITY_UINT)(539), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node10.left)), (

 ((void *)0)

 ), (UNITY_UINT)(540), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node10.right)), (

 ((void *)0)

 ), (UNITY_UINT)(541), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node50.left)), (

 ((void *)0)

 ), (UNITY_UINT)(542), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node50.right)), (

 ((void *)0)

 ), (UNITY_UINT)(543), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node65.left)), (

 ((void *)0)

 ), (UNITY_UINT)(544), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node65.right)), (

 ((void *)0)

 ), (UNITY_UINT)(545), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node10.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(546), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node30.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(547), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(548), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node45.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(549), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node50.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(550), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node60.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(551), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node65.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(552), UNITY_DISPLAY_STYLE_INT);

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

  UnityAssertEqualNumber((UNITY_INT32)((&node45)), (UNITY_INT32)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(583), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node10)), (UNITY_INT32)((node30.left)), (

 ((void *)0)

 ), (UNITY_UINT)(584), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node40)), (UNITY_INT32)((node30.right)), (

 ((void *)0)

 ), (UNITY_UINT)(585), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node30)), (UNITY_INT32)((node45.left)), (

 ((void *)0)

 ), (UNITY_UINT)(586), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node60)), (UNITY_INT32)((node45.right)), (

 ((void *)0)

 ), (UNITY_UINT)(587), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(588), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(589), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node60.left)), (

 ((void *)0)

 ), (UNITY_UINT)(590), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((&node65)), (UNITY_INT32)((node60.right)), (

 ((void *)0)

 ), (UNITY_UINT)(591), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node10.left)), (

 ((void *)0)

 ), (UNITY_UINT)(592), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node10.right)), (

 ((void *)0)

 ), (UNITY_UINT)(593), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node65.left)), (

 ((void *)0)

 ), (UNITY_UINT)(594), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT32)((

 ((void *)0)

 )), (UNITY_INT32)((node65.right)), (

 ((void *)0)

 ), (UNITY_UINT)(595), UNITY_DISPLAY_STYLE_HEX32);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node10.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(596), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node30.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(597), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(598), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node45.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(599), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((node60.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(600), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node65.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(601), UNITY_DISPLAY_STYLE_INT);

}
