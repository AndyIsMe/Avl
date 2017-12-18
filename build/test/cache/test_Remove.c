#include "build/temp/_test_Remove.c"
#include "AvlString.h"
#include "AvlInteger.h"
#include "NodeHelper.h"
#include "NodeVerifier.h"
#include "Rotate.h"
#include "Remove.h"
#include "unity.h"






void setUp(void)

{

giveInitdata();

giveInitStrdata();

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

   RemoveN(&root,50,(Compare) IntCompare);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((root)), (

  ((void *)0)

  ), (UNITY_UINT)(41), UNITY_DISPLAY_STYLE_HEX64);

 }

void test_remove_node_30(void){





  initNode(&node30,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node50,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node40,&node30,&node50,0);





  Node *root = &node40;

  RemoveN(&root,30,(Compare) IntCompare);

  UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(61), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(

 ((void *)0)

 ,&node50,1,&node40,62);

}















void test_remove_node_50(void){



 initNode(&node30,

                 ((void *)0)

                     ,

                      ((void *)0)

                          ,0);

 initNode(&node50,

                 ((void *)0)

                     ,

                      ((void *)0)

                          ,0);

 initNode(&node40,&node30,&node50,0);



 Node *root = &node40;

 RemoveN(&root,50,(Compare) IntCompare);

 UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((root)), (

((void *)0)

), (UNITY_UINT)(79), UNITY_DISPLAY_STYLE_HEX64);

 testAssertEqualNode(&node30,

((void *)0)

,-1,&node40,80);

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



  RemoveN(&root,40,(Compare) IntCompare);

  UnityAssertEqualNumber((UNITY_INT64)((&node50)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(118), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node45,119);

  testAssertEqualNode(&node10,&node45,0,&node25,120);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node55,121);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node10,122);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node70,123);

  testAssertEqualNode(&node55,&node70,0,&node60,124);

  testAssertEqualNode(&node25,&node60,0,&node50,125);



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

  RemoveN(&root,30,(Compare) IntCompare);

  UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(153), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node45,154);

  testAssertEqualNode(&node20,

 ((void *)0)

 ,-1,&node25,155);

  testAssertEqualNode(&node25,&node50,0,&node40,156);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node20,157);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node60,158);

  testAssertEqualNode(&node45,&node60,0,&node50,159);



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



  RemoveN(&root,20,(Compare) IntCompare);

  UnityAssertEqualNumber((UNITY_INT64)((&node25)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(180), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(&node10,&node30,1,&node25,181);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node40,182);

  testAssertEqualNode(

 ((void *)0)

 ,&node40,1,&node30,183);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node10,184);

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



  RemoveN(&root,20,(Compare) IntCompare);

  UnityAssertEqualNumber((UNITY_INT64)((&node30)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(204), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(&node10,&node40,0,&node30,205);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node40,206);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node10,207);

}

  void test_remove_node_40_replace_by_node_45_with_rotation(void){

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



    RemoveN(&root,40,(Compare) IntCompare);

    UnityAssertEqualNumber((UNITY_INT64)((&node55)), (UNITY_INT64)((root)), (

   ((void *)0)

   ), (UNITY_UINT)(260), UNITY_DISPLAY_STYLE_HEX64);

    testAssertEqualNode(&node30,&node70,0,&node55,261);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node35,262);

    testAssertEqualNode(

   ((void *)0)

   ,&node25,1,&node20,263);

    testAssertEqualNode(&node20,&node45,0,&node30,264);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node50,265);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node25,266);

    testAssertEqualNode(&node35,&node50,0,&node45,267);

    testAssertEqualNode(&node60,&node75,-1,&node70,268);

    testAssertEqualNode(

   ((void *)0)

   ,&node65,1,&node60,269);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node75,270);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node65,271);

  }

void test_remove_node_40_replace_by_node_50_with_rotation(void){



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

  RemoveN(&root,40,(Compare) IntCompare);

  UnityAssertEqualNumber((UNITY_INT64)((&node60)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(304), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(&node30,&node90,0,&node60,305);

  testAssertEqualNode(&node20,&node50,0,&node30,306);

  testAssertEqualNode(

 ((void *)0)

 ,&node80,1,&node75,307);

  testAssertEqualNode(&node10,

 ((void *)0)

 ,-1,&node20,308);

  testAssertEqualNode(&node35,&node55,0,&node50,309);

  testAssertEqualNode(&node75,&node100,-1,&node90,310);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node10,311);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node35,312);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node55,313);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node80,314);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node100,315);



}

void test_remove_node_20_replace_by_node_25_with_rotation(void){

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



  RemoveN(&root,20,(Compare) IntCompare);

  UnityAssertEqualNumber((UNITY_INT64)((&node25)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(339), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(&node10,&node40,0,&node25,340);

  testAssertEqualNode(&node30,&node50,0,&node40,341);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node30,342);

  testAssertEqualNode(&node5,

 ((void *)0)

 ,-1,&node10,343);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node50,344);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node5,345);

}

void test_remove_node_15_replace_by_node_20(void)

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



    RemoveN(&root,15,(Compare) IntCompare);

    UnityAssertEqualNumber((UNITY_INT64)((&node5)), (UNITY_INT64)((root)), (

   ((void *)0)

   ), (UNITY_UINT)(367), UNITY_DISPLAY_STYLE_HEX64);

    testAssertEqualNode(&node1,&node20,1,&node5,368);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node1,369);

    testAssertEqualNode(&node10,

   ((void *)0)

   ,-1,&node20,370);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node10,371);

}

void test_remove_node_40_replace_by_node_50(void){



  initNode(&node60,&node40,&node90,-1);

  initNode(&node40,&node20,&node50,1);

  initNode(&node90,&node75,&node100,0);

  initNode(&node50,

                  ((void *)0)

                      ,&node55,1);

  initNode(&node75,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node20,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node100,

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

  RemoveN(&root,40,(Compare) IntCompare);

  UnityAssertEqualNumber((UNITY_INT64)((&node60)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(397), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(&node50,&node90,0,&node60,398);

  testAssertEqualNode(&node20,&node55,0,&node50,399);

  testAssertEqualNode(&node75,&node100,0,&node90,400);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node100,401);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node75,402);



}

void test_remove_node_30_replace_by_node_45_with_rotation(void){



  initNode(&node30,&node20,&node50,1);

  initNode(&node20,&node10,

                          ((void *)0)

                              ,-1);

  initNode(&node50,&node45,&node55,1);

  initNode(&node55,

                  ((void *)0)

                      ,&node60,1);

  initNode(&node10,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node45,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node60,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);



  Node *root = &node30;

  RemoveN(&root,30,(Compare) IntCompare);

  UnityAssertEqualNumber((UNITY_INT64)((&node45)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(430), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(&node20,&node55,0,&node45,431);;

  testAssertEqualNode(&node50,&node60,0,&node55,432);

  testAssertEqualNode(&node10,

 ((void *)0)

 ,-1,&node20,433);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node10,434);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node50,435);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node60,436);



}



void test_remove_Alexander_given_Rex_ThengChun_Andy(void)

{

  initNodeString(&nodeRex,&nodeThengChun,&nodeAndy,1);

  initNodeString(&nodeThengChun, 

                                ((void *)0)

                                    ,

                                     ((void *)0)

                                         ,0);

  initNodeString(&nodeAndy,

                          ((void *)0)

                              ,&nodeAlexander,1);

  initNodeString(&nodeAlexander,

                               ((void *)0)

                                   ,

                                    ((void *)0)

                                        ,0);

  StringNode *root = (StringNode *)&nodeRex;

  RemoveN((Node **)&root,(char *)"Alexander",(Compare) compareString);

  UnityAssertEqualNumber((UNITY_INT64)((&nodeRex)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(448), UNITY_DISPLAY_STYLE_HEX64);

  testAssertStringEqualNode(&nodeThengChun,&nodeAndy,0,&nodeRex,449);

  testAssertStringEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&nodeAndy,450);

  testAssertStringEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&nodeThengChun,451);



}
