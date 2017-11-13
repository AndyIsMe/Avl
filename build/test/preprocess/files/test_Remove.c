#include "build/temp/_test_Remove.c"
#include "Rotate.h"
#include "Remove.h"
#include "unity.h"


Node node1,node5 , node10,node15,node20,node25,node30,node35,node40;

Node node45,node50,node55,node60,node65,node70,node75,node90;

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

  node75.data = 75;

  node90.data = 90;

  node100.data = 100;

}

void tearDown(void){}



void test_findNearest(void)

{



  initNode(&node30,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node30,&node20,

                          ((void *)0)

                              ,-1);

  initNode(&node20,&node15,

                          ((void *)0)

                              ,-1);

  Node *root;

  root = Search(&node30);

  UnityAssertEqualNumber((UNITY_INT)((15)), (UNITY_INT)((root->data)), (

 ((void *)0)

 ), (UNITY_UINT)(45), UNITY_DISPLAY_STYLE_INT);



}















 void test_remove_50(void)

 {

   initNode(&node50,

                   ((void *)0)

                       ,

                        ((void *)0)

                            ,0);

   Node *root = &node50;

   avl_Remove(&root,50,0);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((root)), (

  ((void *)0)

  ), (UNITY_UINT)(60), UNITY_DISPLAY_STYLE_HEX64);

 }

void test_remove_40_replace_by_45_with_rotation(void){



  initNode(&node10,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node25,&node10,

                          ((void *)0)

                              ,-1);

  initNode(&node45,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node40,&node25,&node45,-1);

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

  initNode(&node50,&node40,&node60,-1);



  Node *root = &node50;



  avl_Remove(&root,40,0);

  UnityAssertEqualNumber((UNITY_INT64)((root)), (UNITY_INT64)((&node50)), (

 ((void *)0)

 ), (UNITY_UINT)(98), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node45.left)), (

 ((void *)0)

 ), (UNITY_UINT)(99), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node45.right)), (

 ((void *)0)

 ), (UNITY_UINT)(100), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((node25.left)), (

 ((void *)0)

 ), (UNITY_UINT)(101), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node45)), (UNITY_INT64)((node25.right)), (

 ((void *)0)

 ), (UNITY_UINT)(102), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node55.left)), (

 ((void *)0)

 ), (UNITY_UINT)(103), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node55.right)), (

 ((void *)0)

 ), (UNITY_UINT)(104), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node10.left)), (

 ((void *)0)

 ), (UNITY_UINT)(105), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node10.right)), (

 ((void *)0)

 ), (UNITY_UINT)(106), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node70.left)), (

 ((void *)0)

 ), (UNITY_UINT)(107), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node70.right)), (

 ((void *)0)

 ), (UNITY_UINT)(108), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node55)), (UNITY_INT64)((node60.left)), (

 ((void *)0)

 ), (UNITY_UINT)(109), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node70)), (UNITY_INT64)((node60.right)), (

 ((void *)0)

 ), (UNITY_UINT)(110), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node25)), (UNITY_INT64)((node50.left)), (

 ((void *)0)

 ), (UNITY_UINT)(111), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node60)), (UNITY_INT64)((node50.right)), (

 ((void *)0)

 ), (UNITY_UINT)(112), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node45.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(113), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node10.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(114), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node55.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(115), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node70.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(116), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node25.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(117), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node50.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(118), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node60.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(119), UNITY_DISPLAY_STYLE_INT);



}

void test_remove_30_replace_by_40(void){



  initNode(&node20,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node25,&node20,

                          ((void *)0)

                              ,-1);

  initNode(&node45,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node40,

                  ((void *)0)

                      ,&node45,1);

  initNode(&node60,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node50,&node40,&node60, -1);

  initNode(&node30,&node25,&node50,1);



  Node *root = &node30;

  avl_Remove(&root,30,0);

  UnityAssertEqualNumber((UNITY_INT64)((root)), (UNITY_INT64)((&node40)), (

 ((void *)0)

 ), (UNITY_UINT)(147), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node45.left)), (

 ((void *)0)

 ), (UNITY_UINT)(148), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node45.right)), (

 ((void *)0)

 ), (UNITY_UINT)(149), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node20)), (UNITY_INT64)((node25.left)), (

 ((void *)0)

 ), (UNITY_UINT)(150), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node25.right)), (

 ((void *)0)

 ), (UNITY_UINT)(151), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node25)), (UNITY_INT64)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(152), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node50)), (UNITY_INT64)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(153), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node20.left)), (

 ((void *)0)

 ), (UNITY_UINT)(154), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node20.right)), (

 ((void *)0)

 ), (UNITY_UINT)(155), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node60.left)), (

 ((void *)0)

 ), (UNITY_UINT)(156), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node60.right)), (

 ((void *)0)

 ), (UNITY_UINT)(157), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node45)), (UNITY_INT64)((node50.left)), (

 ((void *)0)

 ), (UNITY_UINT)(158), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node60)), (UNITY_INT64)((node50.right)), (

 ((void *)0)

 ), (UNITY_UINT)(159), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node45.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(160), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((node25.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(161), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(162), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node20.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(163), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node60.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(164), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node50.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(165), UNITY_DISPLAY_STYLE_INT);



}

void test_remove_node_20_replace_by_node_25(void){

  Node *root = &node20;

  initNode(&node10,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node30,&node25,&node40,0);

  initNode(&node20,&node10,&node30,1);

  initNode(&node40,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node25,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);



  avl_Remove(&root,20,0);

  UnityAssertEqualNumber((UNITY_INT64)((&node25)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(187), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((node25.left)), (

 ((void *)0)

 ), (UNITY_UINT)(188), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node30)), (UNITY_INT64)((node25.right)), (

 ((void *)0)

 ), (UNITY_UINT)(189), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(190), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(191), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((node30.right)), (

 ((void *)0)

 ), (UNITY_UINT)(192), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(193), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node10.right)), (

 ((void *)0)

 ), (UNITY_UINT)(194), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node10.left)), (

 ((void *)0)

 ), (UNITY_UINT)(195), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(196), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((node30.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(197), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((node25.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(198), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node10.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(199), UNITY_DISPLAY_STYLE_INT);

}

void test_remove_node_20_replace_by_node_30(void){

  Node *root = &node20;

  initNode(&node10,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node30,

                  ((void *)0)

                      ,&node40,1);

  initNode(&node20,&node10,&node30,1);

  initNode(&node40,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);



  avl_Remove(&root,20,0);

  UnityAssertEqualNumber((UNITY_INT64)((&node30)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(220), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((node30.left)), (

 ((void *)0)

 ), (UNITY_UINT)(221), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((node30.right)), (

 ((void *)0)

 ), (UNITY_UINT)(222), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(223), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(224), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node10.right)), (

 ((void *)0)

 ), (UNITY_UINT)(225), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node10.left)), (

 ((void *)0)

 ), (UNITY_UINT)(226), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(227), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node30.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(228), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node10.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(229), UNITY_DISPLAY_STYLE_INT);

}

  void test_remove_node_40_replace_by_node_45(void){

    Node *root = &node55;

    initNode(&node55,&node40,&node70,-1);

    initNode(&node40,&node30,&node50,-1);

    initNode(&node30,&node20,&node35,-1);

    initNode(&node20,

                    ((void *)0)

                        ,&node25,1);

    initNode(&node35,

                    ((void *)0)

                        ,

                         ((void *)0)

                             ,0);

    initNode(&node50,&node45,

                            ((void *)0)

                                ,-1);

    initNode(&node25,

                    ((void *)0)

                        ,

                         ((void *)0)

                             ,0);

    initNode(&node45,

                    ((void *)0)

                        ,

                         ((void *)0)

                             ,0);

    initNode(&node70,&node60,&node75,-1);

    initNode(&node60,

                    ((void *)0)

                        ,&node65,1);

    initNode(&node75,

                    ((void *)0)

                        ,

                         ((void *)0)

                             ,0);

    initNode(&node65,

                    ((void *)0)

                        ,

                         ((void *)0)

                             ,0);



    avl_Remove(&root,40,0);

    UnityAssertEqualNumber((UNITY_INT64)((&node55)), (UNITY_INT64)((root)), (

   ((void *)0)

   ), (UNITY_UINT)(283), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node35)), (UNITY_INT64)((node55.left)), (

   ((void *)0)

   ), (UNITY_UINT)(284), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node70)), (UNITY_INT64)((node55.right)), (

   ((void *)0)

   ), (UNITY_UINT)(285), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node45)), (UNITY_INT64)((node35.right)), (

   ((void *)0)

   ), (UNITY_UINT)(286), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node25)), (UNITY_INT64)((node35.left)), (

   ((void *)0)

   ), (UNITY_UINT)(287), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node20.right)), (

   ((void *)0)

   ), (UNITY_UINT)(288), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node20.left)), (

   ((void *)0)

   ), (UNITY_UINT)(289), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node30.right)), (

   ((void *)0)

   ), (UNITY_UINT)(290), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node30.left)), (

   ((void *)0)

   ), (UNITY_UINT)(291), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node50.right)), (

   ((void *)0)

   ), (UNITY_UINT)(292), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node50.left)), (

   ((void *)0)

   ), (UNITY_UINT)(293), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node30)), (UNITY_INT64)((node25.right)), (

   ((void *)0)

   ), (UNITY_UINT)(294), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node20)), (UNITY_INT64)((node25.left)), (

   ((void *)0)

   ), (UNITY_UINT)(295), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node50)), (UNITY_INT64)((node45.right)), (

   ((void *)0)

   ), (UNITY_UINT)(296), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node45.left)), (

   ((void *)0)

   ), (UNITY_UINT)(297), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node75)), (UNITY_INT64)((node70.right)), (

   ((void *)0)

   ), (UNITY_UINT)(298), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node60)), (UNITY_INT64)((node70.left)), (

   ((void *)0)

   ), (UNITY_UINT)(299), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node65)), (UNITY_INT64)((node60.right)), (

   ((void *)0)

   ), (UNITY_UINT)(300), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node60.left)), (

   ((void *)0)

   ), (UNITY_UINT)(301), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node75.right)), (

   ((void *)0)

   ), (UNITY_UINT)(302), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node75.left)), (

   ((void *)0)

   ), (UNITY_UINT)(303), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node65.right)), (

   ((void *)0)

   ), (UNITY_UINT)(304), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node65.left)), (

   ((void *)0)

   ), (UNITY_UINT)(305), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node55.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(306), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node35.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(307), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node20.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(308), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node30.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(309), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node50.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(310), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node25.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(311), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((node45.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(312), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((node70.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(313), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((node60.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(314), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node75.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(315), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node65.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(316), UNITY_DISPLAY_STYLE_INT);

  }
