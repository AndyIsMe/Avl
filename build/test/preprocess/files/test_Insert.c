#include "build/temp/_test_Insert.c"
#include "Rotate.h"
#include "Insert.h"
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

  node90.data = 90;

  node100.data = 100;

}

void tearDown(void){}

void test_insert_given_90_50_1pect_balance(void){



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

     avl_Insert(&root,&node60);

     UnityAssertEqualNumber((UNITY_INT64)((&node90)), (UNITY_INT64)((root)), (

    ((void *)0)

    ), (UNITY_UINT)(56), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT64)((

    ((void *)0)

    )), (UNITY_INT64)((node45.left)), (

    ((void *)0)

    ), (UNITY_UINT)(57), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT64)((

    ((void *)0)

    )), (UNITY_INT64)((node45.right)), (

    ((void *)0)

    ), (UNITY_UINT)(58), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT64)((

    ((void *)0)

    )), (UNITY_INT64)((node60.left)), (

    ((void *)0)

    ), (UNITY_UINT)(59), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT64)((

    ((void *)0)

    )), (UNITY_INT64)((node60.right)), (

    ((void *)0)

    ), (UNITY_UINT)(60), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT64)((

    ((void *)0)

    )), (UNITY_INT64)((node100.left)), (

    ((void *)0)

    ), (UNITY_UINT)(61), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT64)((

    ((void *)0)

    )), (UNITY_INT64)((node100.right)), (

    ((void *)0)

    ), (UNITY_UINT)(62), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT64)((&node45)), (UNITY_INT64)((node50.left)), (

    ((void *)0)

    ), (UNITY_UINT)(63), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT64)((&node60)), (UNITY_INT64)((node50.right)), (

    ((void *)0)

    ), (UNITY_UINT)(64), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT64)((&node50)), (UNITY_INT64)((node90.left)), (

    ((void *)0)

    ), (UNITY_UINT)(65), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT64)((&node100)), (UNITY_INT64)((node90.right)), (

    ((void *)0)

    ), (UNITY_UINT)(66), UNITY_DISPLAY_STYLE_HEX64);

     UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((node90.balanceFactor)), (

    ((void *)0)

    ), (UNITY_UINT)(67), UNITY_DISPLAY_STYLE_INT);

     UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node45.balanceFactor)), (

    ((void *)0)

    ), (UNITY_UINT)(68), UNITY_DISPLAY_STYLE_INT);

     UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node60.balanceFactor)), (

    ((void *)0)

    ), (UNITY_UINT)(69), UNITY_DISPLAY_STYLE_INT);

     UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node100.balanceFactor)), (

    ((void *)0)

    ), (UNITY_UINT)(70), UNITY_DISPLAY_STYLE_INT);

     UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node50.balanceFactor)), (

    ((void *)0)

    ), (UNITY_UINT)(71), UNITY_DISPLAY_STYLE_INT);

}

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

 ), (UNITY_UINT)(85), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node20)), (UNITY_INT64)((node10.right)), (

 ((void *)0)

 ), (UNITY_UINT)(86), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((node10.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(87), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node20.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(88), UNITY_DISPLAY_STYLE_INT);

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

 ), (UNITY_UINT)(102), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node5)), (UNITY_INT64)((node10.left)), (

 ((void *)0)

 ), (UNITY_UINT)(103), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((node10.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(104), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node5.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(105), UNITY_DISPLAY_STYLE_INT);



}

void test_Insert_20_with_10_as_root_N_15_as_child(void){

  Node *root = &node10;

  initNode(&node10,

                  ((void *)0)

                      ,&node15,1);

  avl_Insert(&root,&node20);

  UnityAssertEqualNumber((UNITY_INT64)((&node15)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(120), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((node15.left)), (

 ((void *)0)

 ), (UNITY_UINT)(121), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node20)), (UNITY_INT64)((node15.right)), (

 ((void *)0)

 ), (UNITY_UINT)(122), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node10.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(123), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node15.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(124), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node20.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(125), UNITY_DISPLAY_STYLE_INT);



}

void test_Insert_10_with_30_15_expect_balance_tree(void){

  Node *root = &node30;

  initNode(&node30,&node15,

                          ((void *)0)

                              ,-1);

  initNode(&node15,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  avl_Insert(&root,&node10);

  UnityAssertEqualNumber((UNITY_INT64)((&node15)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(142), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((node15.left)), (

 ((void *)0)

 ), (UNITY_UINT)(143), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node30)), (UNITY_INT64)((node15.right)), (

 ((void *)0)

 ), (UNITY_UINT)(144), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node10.left)), (

 ((void *)0)

 ), (UNITY_UINT)(145), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node10.right)), (

 ((void *)0)

 ), (UNITY_UINT)(146), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node30.left)), (

 ((void *)0)

 ), (UNITY_UINT)(147), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node30.right)), (

 ((void *)0)

 ), (UNITY_UINT)(148), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node10.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(149), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node15.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(150), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node30.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(151), UNITY_DISPLAY_STYLE_INT);



}

void test_avlInsert_given_40_50_add_100_expect_a_balance_tree(void){

  Node *root = &node40;

  initNode(&node40,

                  ((void *)0)

                      ,&node50,1);

  initNode(&node50,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  avl_Insert(&root,&node100);

  UnityAssertEqualNumber((UNITY_INT64)((&node50)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(167), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((node50.left)), (

 ((void *)0)

 ), (UNITY_UINT)(168), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node100)), (UNITY_INT64)((node50.right)), (

 ((void *)0)

 ), (UNITY_UINT)(169), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node50.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(170), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(171), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node100.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(172), UNITY_DISPLAY_STYLE_INT);

}

 void test_avlInsert_given_40_50_add_55_expect_rotate_left_for_a_balance_tree(void){

   Node *root = &node40;

   initNode(&node40,

                   ((void *)0)

                       ,&node50,1);

   initNode(&node50,

                   ((void *)0)

                       ,

                        ((void *)0)

                            ,0);

   avl_Insert(&root,&node55);

   UnityAssertEqualNumber((UNITY_INT64)((&node50)), (UNITY_INT64)((root)), (

  ((void *)0)

  ), (UNITY_UINT)(189), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((node50.left)), (

  ((void *)0)

  ), (UNITY_UINT)(190), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((&node55)), (UNITY_INT64)((node50.right)), (

  ((void *)0)

  ), (UNITY_UINT)(191), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node50.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(192), UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(193), UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node55.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(194), UNITY_DISPLAY_STYLE_INT);

 }

 void test_avlInsert_given_40_50_add_45_expect_rotate_right_left_for_a_balance_tree(void){

   Node *root = &node40;

   initNode(&node40,

                   ((void *)0)

                       ,&node50,1);

   initNode(&node50,

                   ((void *)0)

                       ,

                        ((void *)0)

                            ,0);

   avl_Insert(&root,&node45);

   UnityAssertEqualNumber((UNITY_INT64)((&node45)), (UNITY_INT64)((root)), (

  ((void *)0)

  ), (UNITY_UINT)(211), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((node45.left)), (

  ((void *)0)

  ), (UNITY_UINT)(212), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((&node50)), (UNITY_INT64)((node45.right)), (

  ((void *)0)

  ), (UNITY_UINT)(213), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node50.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(214), UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(215), UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node45.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(216), UNITY_DISPLAY_STYLE_INT);

 }

 void test_avlInsert_given_15_20_45_50_55_add_35_expect_rotate_right_left_for_a_balance_tree(void){

   Node *root = &node20;

   initNode(&node20,&node15,&node50,1);

   initNode(&node50,&node45,&node55,0);

   initNode(&node45,

                   ((void *)0)

                       ,

                        ((void *)0)

                            ,0);

   initNode(&node55,

                   ((void *)0)

                       ,

                        ((void *)0)

                            ,0);

   initNode(&node15,

                   ((void *)0)

                       ,

                        ((void *)0)

                            ,0);

   avl_Insert(&root,&node35);

   UnityAssertEqualNumber((UNITY_INT64)((&node45)), (UNITY_INT64)((root)), (

  ((void *)0)

  ), (UNITY_UINT)(245), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((&node20)), (UNITY_INT64)((node45.left)), (

  ((void *)0)

  ), (UNITY_UINT)(246), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((&node50)), (UNITY_INT64)((node45.right)), (

  ((void *)0)

  ), (UNITY_UINT)(247), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((&node15)), (UNITY_INT64)((node20.left)), (

  ((void *)0)

  ), (UNITY_UINT)(248), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((&node35)), (UNITY_INT64)((node20.right)), (

  ((void *)0)

  ), (UNITY_UINT)(249), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((node50.left)), (

  ((void *)0)

  ), (UNITY_UINT)(250), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((&node55)), (UNITY_INT64)((node50.right)), (

  ((void *)0)

  ), (UNITY_UINT)(251), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((node15.left)), (

  ((void *)0)

  ), (UNITY_UINT)(252), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((node15.right)), (

  ((void *)0)

  ), (UNITY_UINT)(253), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((node35.left)), (

  ((void *)0)

  ), (UNITY_UINT)(254), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((node35.right)), (

  ((void *)0)

  ), (UNITY_UINT)(255), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((node55.left)), (

  ((void *)0)

  ), (UNITY_UINT)(256), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((node55.right)), (

  ((void *)0)

  ), (UNITY_UINT)(257), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((node50.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(258), UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node55.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(259), UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node45.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(260), UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node35.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(261), UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node20.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(262), UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node15.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(263), UNITY_DISPLAY_STYLE_INT);

 }

 void test_avlInsert_given_15_20_25_40_55_add_35_expect_rotate_right_left_for_a_balance_tree(void){

   Node *root = &node20;

   initNode(&node20,&node15,&node40,1);

   initNode(&node40,&node25,&node55,0);

   initNode(&node25,

                   ((void *)0)

                       ,

                        ((void *)0)

                            ,0);

   initNode(&node55,

                   ((void *)0)

                       ,

                        ((void *)0)

                            ,0);

   initNode(&node15,

                   ((void *)0)

                       ,

                        ((void *)0)

                            ,0);

   avl_Insert(&root,&node35);

   UnityAssertEqualNumber((UNITY_INT64)((&node25)), (UNITY_INT64)((root)), (

  ((void *)0)

  ), (UNITY_UINT)(293), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((&node20)), (UNITY_INT64)((node25.left)), (

  ((void *)0)

  ), (UNITY_UINT)(294), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((node25.right)), (

  ((void *)0)

  ), (UNITY_UINT)(295), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((&node35)), (UNITY_INT64)((node40.left)), (

  ((void *)0)

  ), (UNITY_UINT)(296), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((&node55)), (UNITY_INT64)((node40.right)), (

  ((void *)0)

  ), (UNITY_UINT)(297), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((&node15)), (UNITY_INT64)((node20.left)), (

  ((void *)0)

  ), (UNITY_UINT)(298), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((node20.right)), (

  ((void *)0)

  ), (UNITY_UINT)(299), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((node15.left)), (

  ((void *)0)

  ), (UNITY_UINT)(300), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((node15.right)), (

  ((void *)0)

  ), (UNITY_UINT)(301), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((node35.left)), (

  ((void *)0)

  ), (UNITY_UINT)(302), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((node35.right)), (

  ((void *)0)

  ), (UNITY_UINT)(303), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((node55.left)), (

  ((void *)0)

  ), (UNITY_UINT)(304), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((node55.right)), (

  ((void *)0)

  ), (UNITY_UINT)(305), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(306), UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node55.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(307), UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node35.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(308), UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((node20.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(309), UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node15.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(310), UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node25.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(311), UNITY_DISPLAY_STYLE_INT);

 }

 void test_avlInsert_given_50_60_add_40_expect_rotate_right_for_a_balance_tree(void){

   initNode(&node60,&node50,

                           ((void *)0)

                               ,-1);

   initNode(&node50,

                   ((void *)0)

                       ,

                        ((void *)0)

                            ,0);

   Node *root = &node60;

   avl_Insert(&root,&node40);

   UnityAssertEqualNumber((UNITY_INT64)((&node50)), (UNITY_INT64)((root)), (

  ((void *)0)

  ), (UNITY_UINT)(326), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((node50.left)), (

  ((void *)0)

  ), (UNITY_UINT)(327), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((&node60)), (UNITY_INT64)((node50.right)), (

  ((void *)0)

  ), (UNITY_UINT)(328), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((node40.left)), (

  ((void *)0)

  ), (UNITY_UINT)(329), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((node40.right)), (

  ((void *)0)

  ), (UNITY_UINT)(330), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((node60.left)), (

  ((void *)0)

  ), (UNITY_UINT)(331), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((node60.right)), (

  ((void *)0)

  ), (UNITY_UINT)(332), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node50.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(333), UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(334), UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node60.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(335), UNITY_DISPLAY_STYLE_INT);

 }

 void test_avlInsert_given_10_40_45_60_65_add_50_expect_rotate_left_right_a_balance_tree(void){

   initNode(&node60,&node40,&node65,-1);

   initNode(&node40,&node10,&node45,0);

   initNode(&node45,

                   ((void *)0)

                       ,

                        ((void *)0)

                            ,0);

   initNode(&node10,

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



   avl_Insert(&root,&node50);

   UnityAssertEqualNumber((UNITY_INT64)((&node45)), (UNITY_INT64)((root)), (

  ((void *)0)

  ), (UNITY_UINT)(364), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((node45.left)), (

  ((void *)0)

  ), (UNITY_UINT)(365), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((&node60)), (UNITY_INT64)((node45.right)), (

  ((void *)0)

  ), (UNITY_UINT)(366), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((node40.left)), (

  ((void *)0)

  ), (UNITY_UINT)(367), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((&node50)), (UNITY_INT64)((node60.left)), (

  ((void *)0)

  ), (UNITY_UINT)(368), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((&node65)), (UNITY_INT64)((node60.right)), (

  ((void *)0)

  ), (UNITY_UINT)(369), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((node40.right)), (

  ((void *)0)

  ), (UNITY_UINT)(370), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((node10.left)), (

  ((void *)0)

  ), (UNITY_UINT)(371), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((node10.right)), (

  ((void *)0)

  ), (UNITY_UINT)(372), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((node50.left)), (

  ((void *)0)

  ), (UNITY_UINT)(373), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((node50.right)), (

  ((void *)0)

  ), (UNITY_UINT)(374), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((node65.left)), (

  ((void *)0)

  ), (UNITY_UINT)(375), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((node65.right)), (

  ((void *)0)

  ), (UNITY_UINT)(376), UNITY_DISPLAY_STYLE_HEX64);

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node10.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(377), UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((node40.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(378), UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node45.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(379), UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node50.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(380), UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node60.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(381), UNITY_DISPLAY_STYLE_INT);

   UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node65.balanceFactor)), (

  ((void *)0)

  ), (UNITY_UINT)(382), UNITY_DISPLAY_STYLE_INT);

 }

  void test_avlInsert_given_10_40_50_60_65_add_45_expect_rotate_left_right_a_balance_tree(void){

    initNode(&node60,&node40,&node65,-1);

    initNode(&node40,&node10,&node50,0);

    initNode(&node50,

                    ((void *)0)

                        ,

                         ((void *)0)

                             ,0);

    initNode(&node10,

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



    avl_Insert(&root,&node45);

    UnityAssertEqualNumber((UNITY_INT64)((&node50)), (UNITY_INT64)((root)), (

   ((void *)0)

   ), (UNITY_UINT)(412), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((node50.left)), (

   ((void *)0)

   ), (UNITY_UINT)(413), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node60)), (UNITY_INT64)((node50.right)), (

   ((void *)0)

   ), (UNITY_UINT)(414), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((node40.left)), (

   ((void *)0)

   ), (UNITY_UINT)(415), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node60.left)), (

   ((void *)0)

   ), (UNITY_UINT)(416), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node65)), (UNITY_INT64)((node60.right)), (

   ((void *)0)

   ), (UNITY_UINT)(417), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node45)), (UNITY_INT64)((node40.right)), (

   ((void *)0)

   ), (UNITY_UINT)(418), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node10.left)), (

   ((void *)0)

   ), (UNITY_UINT)(419), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node10.right)), (

   ((void *)0)

   ), (UNITY_UINT)(420), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node45.left)), (

   ((void *)0)

   ), (UNITY_UINT)(421), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node45.right)), (

   ((void *)0)

   ), (UNITY_UINT)(422), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node65.left)), (

   ((void *)0)

   ), (UNITY_UINT)(423), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node65.right)), (

   ((void *)0)

   ), (UNITY_UINT)(424), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node10.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(425), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(426), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node45.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(427), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node50.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(428), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((node60.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(429), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node65.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(430), UNITY_DISPLAY_STYLE_INT);

  }
