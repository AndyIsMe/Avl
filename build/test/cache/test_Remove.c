#include "build/temp/_test_Remove.c"
#include "Rotate.h"
#include "Remove.h"
#include "unity.h"








Node node1,node5 , node10,node15,node20,node25,node30,node35,node40;

Node node45,node50,node55,node60,node65,node70,node75,node80,node90;

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

  node80.data = 80;

  node90.data = 90;

  node100.data = 100;

}

void tearDown(void){}

 void test_remove_50(void)

 {

   initNode(&node50,

                   ((void *)0)

                       ,

                        ((void *)0)

                            ,0);

   Node *root = &node50;

   RemoveN(&root,50);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((root)), (

  ((void *)0)

  ), (UNITY_UINT)(64), UNITY_DISPLAY_STYLE_HEX64);

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



  RemoveN(&root,40);

  UnityAssertEqualNumber((UNITY_INT64)((root)), (UNITY_INT64)((&node50)), (

 ((void *)0)

 ), (UNITY_UINT)(102), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node45.left)), (

 ((void *)0)

 ), (UNITY_UINT)(103), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node45.right)), (

 ((void *)0)

 ), (UNITY_UINT)(104), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((node25.left)), (

 ((void *)0)

 ), (UNITY_UINT)(105), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node45)), (UNITY_INT64)((node25.right)), (

 ((void *)0)

 ), (UNITY_UINT)(106), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node55.left)), (

 ((void *)0)

 ), (UNITY_UINT)(107), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node55.right)), (

 ((void *)0)

 ), (UNITY_UINT)(108), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node10.left)), (

 ((void *)0)

 ), (UNITY_UINT)(109), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node10.right)), (

 ((void *)0)

 ), (UNITY_UINT)(110), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node70.left)), (

 ((void *)0)

 ), (UNITY_UINT)(111), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node70.right)), (

 ((void *)0)

 ), (UNITY_UINT)(112), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node55)), (UNITY_INT64)((node60.left)), (

 ((void *)0)

 ), (UNITY_UINT)(113), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node70)), (UNITY_INT64)((node60.right)), (

 ((void *)0)

 ), (UNITY_UINT)(114), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node25)), (UNITY_INT64)((node50.left)), (

 ((void *)0)

 ), (UNITY_UINT)(115), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node60)), (UNITY_INT64)((node50.right)), (

 ((void *)0)

 ), (UNITY_UINT)(116), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node45.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(117), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node10.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(118), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node55.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(119), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node70.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(120), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node25.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(121), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node50.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(122), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node60.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(123), UNITY_DISPLAY_STYLE_INT);



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

  RemoveN(&root,30);

  UnityAssertEqualNumber((UNITY_INT64)((root)), (UNITY_INT64)((&node40)), (

 ((void *)0)

 ), (UNITY_UINT)(151), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node45.left)), (

 ((void *)0)

 ), (UNITY_UINT)(152), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node45.right)), (

 ((void *)0)

 ), (UNITY_UINT)(153), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node20)), (UNITY_INT64)((node25.left)), (

 ((void *)0)

 ), (UNITY_UINT)(154), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node25.right)), (

 ((void *)0)

 ), (UNITY_UINT)(155), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node25)), (UNITY_INT64)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(156), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node50)), (UNITY_INT64)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(157), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node20.left)), (

 ((void *)0)

 ), (UNITY_UINT)(158), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node20.right)), (

 ((void *)0)

 ), (UNITY_UINT)(159), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node60.left)), (

 ((void *)0)

 ), (UNITY_UINT)(160), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node60.right)), (

 ((void *)0)

 ), (UNITY_UINT)(161), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node45)), (UNITY_INT64)((node50.left)), (

 ((void *)0)

 ), (UNITY_UINT)(162), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node60)), (UNITY_INT64)((node50.right)), (

 ((void *)0)

 ), (UNITY_UINT)(163), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node45.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(164), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((node25.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(165), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(166), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node20.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(167), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node60.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(168), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node50.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(169), UNITY_DISPLAY_STYLE_INT);



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



  RemoveN(&root,20);

  UnityAssertEqualNumber((UNITY_INT64)((&node25)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(191), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((node25.left)), (

 ((void *)0)

 ), (UNITY_UINT)(192), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node30)), (UNITY_INT64)((node25.right)), (

 ((void *)0)

 ), (UNITY_UINT)(193), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(194), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(195), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((node30.right)), (

 ((void *)0)

 ), (UNITY_UINT)(196), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(197), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node10.right)), (

 ((void *)0)

 ), (UNITY_UINT)(198), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node10.left)), (

 ((void *)0)

 ), (UNITY_UINT)(199), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(200), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((node30.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(201), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((node25.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(202), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node10.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(203), UNITY_DISPLAY_STYLE_INT);

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



  RemoveN(&root,20);

  UnityAssertEqualNumber((UNITY_INT64)((&node30)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(224), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((node30.left)), (

 ((void *)0)

 ), (UNITY_UINT)(225), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((node30.right)), (

 ((void *)0)

 ), (UNITY_UINT)(226), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(227), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(228), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node10.right)), (

 ((void *)0)

 ), (UNITY_UINT)(229), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node10.left)), (

 ((void *)0)

 ), (UNITY_UINT)(230), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(231), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node30.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(232), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node10.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(233), UNITY_DISPLAY_STYLE_INT);

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



    RemoveN(&root,40);

    UnityAssertEqualNumber((UNITY_INT64)((&node55)), (UNITY_INT64)((root)), (

   ((void *)0)

   ), (UNITY_UINT)(287), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node30)), (UNITY_INT64)((node55.left)), (

   ((void *)0)

   ), (UNITY_UINT)(288), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node70)), (UNITY_INT64)((node55.right)), (

   ((void *)0)

   ), (UNITY_UINT)(289), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node35.right)), (

   ((void *)0)

   ), (UNITY_UINT)(290), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node35.left)), (

   ((void *)0)

   ), (UNITY_UINT)(291), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node25)), (UNITY_INT64)((node20.right)), (

   ((void *)0)

   ), (UNITY_UINT)(292), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node20.left)), (

   ((void *)0)

   ), (UNITY_UINT)(293), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node45)), (UNITY_INT64)((node30.right)), (

   ((void *)0)

   ), (UNITY_UINT)(294), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node20)), (UNITY_INT64)((node30.left)), (

   ((void *)0)

   ), (UNITY_UINT)(295), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node50.right)), (

   ((void *)0)

   ), (UNITY_UINT)(296), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node50.left)), (

   ((void *)0)

   ), (UNITY_UINT)(297), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node25.right)), (

   ((void *)0)

   ), (UNITY_UINT)(298), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node25.left)), (

   ((void *)0)

   ), (UNITY_UINT)(299), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node50)), (UNITY_INT64)((node45.right)), (

   ((void *)0)

   ), (UNITY_UINT)(300), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node35)), (UNITY_INT64)((node45.left)), (

   ((void *)0)

   ), (UNITY_UINT)(301), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node75)), (UNITY_INT64)((node70.right)), (

   ((void *)0)

   ), (UNITY_UINT)(302), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node60)), (UNITY_INT64)((node70.left)), (

   ((void *)0)

   ), (UNITY_UINT)(303), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node65)), (UNITY_INT64)((node60.right)), (

   ((void *)0)

   ), (UNITY_UINT)(304), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node60.left)), (

   ((void *)0)

   ), (UNITY_UINT)(305), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node75.right)), (

   ((void *)0)

   ), (UNITY_UINT)(306), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node75.left)), (

   ((void *)0)

   ), (UNITY_UINT)(307), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node65.right)), (

   ((void *)0)

   ), (UNITY_UINT)(308), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node65.left)), (

   ((void *)0)

   ), (UNITY_UINT)(309), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node55.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(310), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node35.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(311), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((node20.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(312), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node30.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(313), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node50.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(314), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node25.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(315), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node45.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(316), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((node70.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(317), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((node60.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(318), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node75.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(319), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node65.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(320), UNITY_DISPLAY_STYLE_INT);

  }

void test_remove_given_Avl_tree_remove_60_test2(void){



  initNode(&node60,&node40,&node90,-1);

  initNode(&node40,&node20,&node50,-1);

  initNode(&node90,&node75,&node100,-1);

  initNode(&node20,&node10,&node30,1);

  initNode(&node50,

                  ((void *)0)

                      ,&node55,1);

  initNode(&node75,

                  ((void *)0)

                      ,&node80,1);

  initNode(&node100,

                   ((void *)0)

                       ,

                        ((void *)0)

                            ,0);

  initNode(&node30,

                  ((void *)0)

                      ,&node35,1);

  initNode(&node10,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node55,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node80,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node100,

                   ((void *)0)

                       ,

                        ((void *)0)

                            ,0);





  Node *root = &node60;

  RemoveN(&root,40);

  UnityAssertEqualNumber((UNITY_INT64)((&node60)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(355), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node30)), (UNITY_INT64)((node60.left)), (

 ((void *)0)

 ), (UNITY_UINT)(356), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node90)), (UNITY_INT64)((node60.right)), (

 ((void *)0)

 ), (UNITY_UINT)(357), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node20)), (UNITY_INT64)((node30.left)), (

 ((void *)0)

 ), (UNITY_UINT)(358), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node50)), (UNITY_INT64)((node30.right)), (

 ((void *)0)

 ), (UNITY_UINT)(359), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node75.left)), (

 ((void *)0)

 ), (UNITY_UINT)(360), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node80)), (UNITY_INT64)((node75.right)), (

 ((void *)0)

 ), (UNITY_UINT)(361), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((node20.left)), (

 ((void *)0)

 ), (UNITY_UINT)(362), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node20.right)), (

 ((void *)0)

 ), (UNITY_UINT)(363), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node35)), (UNITY_INT64)((node50.left)), (

 ((void *)0)

 ), (UNITY_UINT)(364), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node55)), (UNITY_INT64)((node50.right)), (

 ((void *)0)

 ), (UNITY_UINT)(365), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node75)), (UNITY_INT64)((node90.left)), (

 ((void *)0)

 ), (UNITY_UINT)(366), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node100)), (UNITY_INT64)((node90.right)), (

 ((void *)0)

 ), (UNITY_UINT)(367), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node10.left)), (

 ((void *)0)

 ), (UNITY_UINT)(368), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node10.right)), (

 ((void *)0)

 ), (UNITY_UINT)(369), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node35.left)), (

 ((void *)0)

 ), (UNITY_UINT)(370), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node35.right)), (

 ((void *)0)

 ), (UNITY_UINT)(371), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node55.left)), (

 ((void *)0)

 ), (UNITY_UINT)(372), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node55.right)), (

 ((void *)0)

 ), (UNITY_UINT)(373), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node80.left)), (

 ((void *)0)

 ), (UNITY_UINT)(374), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node80.right)), (

 ((void *)0)

 ), (UNITY_UINT)(375), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node100.left)), (

 ((void *)0)

 ), (UNITY_UINT)(376), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node100.right)), (

 ((void *)0)

 ), (UNITY_UINT)(377), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node60.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(378), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node30.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(379), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((node90.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(380), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node50.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(381), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((node20.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(382), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((node75.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(383), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node10.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(384), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node35.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(385), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node55.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(386), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node80.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(387), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node100.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(388), UNITY_DISPLAY_STYLE_INT);



}

void test_remove_node_20_replace_by_node_25_v2(void){

  Node *root = &node20;

  initNode(&node10,&node5,

                         ((void *)0)

                             ,-1);

  initNode(&node30,&node25,&node40,1);

  initNode(&node20,&node10,&node30,1);

  initNode(&node40,

                  ((void *)0)

                      ,&node50,1);

  initNode(&node25,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node5,

                 ((void *)0)

                     ,

                      ((void *)0)

                          ,0);

  initNode(&node50,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);



  RemoveN(&root,20);

  UnityAssertEqualNumber((UNITY_INT64)((&node25)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(413), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((node25.left)), (

 ((void *)0)

 ), (UNITY_UINT)(414), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((node25.right)), (

 ((void *)0)

 ), (UNITY_UINT)(415), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node30)), (UNITY_INT64)((node40.left)), (

 ((void *)0)

 ), (UNITY_UINT)(416), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node50)), (UNITY_INT64)((node40.right)), (

 ((void *)0)

 ), (UNITY_UINT)(417), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node30.right)), (

 ((void *)0)

 ), (UNITY_UINT)(418), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node30.left)), (

 ((void *)0)

 ), (UNITY_UINT)(419), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node10.right)), (

 ((void *)0)

 ), (UNITY_UINT)(420), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((&node5)), (UNITY_INT64)((node10.left)), (

 ((void *)0)

 ), (UNITY_UINT)(421), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node50.right)), (

 ((void *)0)

 ), (UNITY_UINT)(422), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node50.left)), (

 ((void *)0)

 ), (UNITY_UINT)(423), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node5.right)), (

 ((void *)0)

 ), (UNITY_UINT)(424), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT64)((

 ((void *)0)

 )), (UNITY_INT64)((node5.left)), (

 ((void *)0)

 ), (UNITY_UINT)(425), UNITY_DISPLAY_STYLE_HEX64);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node40.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(426), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node30.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(427), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node25.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(428), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((node10.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(429), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node50.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(430), UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((node5.balanceFactor)), (

 ((void *)0)

 ), (UNITY_UINT)(431), UNITY_DISPLAY_STYLE_INT);

}

void test_deleteLeaf_given_deletedNode_left_right_Not_null_delete_15(void)

{

    initNode(&node5, &node1, &node15, 1);

    initNode(&node15, &node10, &node20, 0);

    initNode(&node10, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , 0);

    initNode(&node20, 

                     ((void *)0)

                         , 

                           ((void *)0)

                               , 0);

    initNode(&node1, 

                    ((void *)0)

                        , 

                          ((void *)0)

                              , 0);



    Node *root = &node5;



    RemoveN(&root,15);

    UnityAssertEqualNumber((UNITY_INT64)((&node5)), (UNITY_INT64)((root)), (

   ((void *)0)

   ), (UNITY_UINT)(453), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node1)), (UNITY_INT64)((node5.left)), (

   ((void *)0)

   ), (UNITY_UINT)(454), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node10)), (UNITY_INT64)((node5.right)), (

   ((void *)0)

   ), (UNITY_UINT)(455), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((node20.balanceFactor)), (

   ((void *)0)

   ), (UNITY_UINT)(456), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT64)((

   ((void *)0)

   )), (UNITY_INT64)((node10.left)), (

   ((void *)0)

   ), (UNITY_UINT)(457), UNITY_DISPLAY_STYLE_HEX64);

    UnityAssertEqualNumber((UNITY_INT64)((&node20)), (UNITY_INT64)((node10.right)), (

   ((void *)0)

   ), (UNITY_UINT)(458), UNITY_DISPLAY_STYLE_HEX64);



}
