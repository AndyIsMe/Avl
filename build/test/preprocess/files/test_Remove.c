#include "build/temp/_test_Remove.c"
#include "AvlInteger.h"
#include "NodeHelper.h"
#include "NodeVerifier.h"
#include "Rotate.h"
#include "Remove.h"
#include "unity.h"






void setUp(void)

{

giveInitdata();

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

  ), (UNITY_UINT)(39), UNITY_DISPLAY_STYLE_HEX64);

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

 ), (UNITY_UINT)(59), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(

 ((void *)0)

 ,&node50,1,&node40,60);

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

), (UNITY_UINT)(77), UNITY_DISPLAY_STYLE_HEX64);

 testAssertEqualNode(&node30,

((void *)0)

,-1,&node40,78);

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

 ), (UNITY_UINT)(116), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node45,117);

  testAssertEqualNode(&node10,&node45,0,&node25,118);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node55,119);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node10,120);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node70,121);

  testAssertEqualNode(&node55,&node70,0,&node60,122);

  testAssertEqualNode(&node25,&node60,0,&node50,123);



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

 ), (UNITY_UINT)(151), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node45,152);

  testAssertEqualNode(&node20,

 ((void *)0)

 ,-1,&node25,153);

  testAssertEqualNode(&node25,&node50,0,&node40,154);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node20,155);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node60,156);

  testAssertEqualNode(&node45,&node60,0,&node50,157);



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

 ), (UNITY_UINT)(178), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(&node10,&node30,1,&node25,179);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node40,180);

  testAssertEqualNode(

 ((void *)0)

 ,&node40,1,&node30,181);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node10,182);

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

 ), (UNITY_UINT)(202), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(&node10,&node40,0,&node30,203);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node40,204);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node10,205);

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

   ), (UNITY_UINT)(258), UNITY_DISPLAY_STYLE_HEX64);

    testAssertEqualNode(&node30,&node70,0,&node55,259);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node35,260);

    testAssertEqualNode(

   ((void *)0)

   ,&node25,1,&node20,261);

    testAssertEqualNode(&node20,&node45,0,&node30,262);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node50,263);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node25,264);

    testAssertEqualNode(&node35,&node50,0,&node45,265);

    testAssertEqualNode(&node60,&node75,-1,&node70,266);

    testAssertEqualNode(

   ((void *)0)

   ,&node65,1,&node60,267);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node75,268);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node65,269);

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

 ), (UNITY_UINT)(302), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(&node30,&node90,0,&node60,303);

  testAssertEqualNode(&node20,&node50,0,&node30,304);

  testAssertEqualNode(

 ((void *)0)

 ,&node80,1,&node75,305);

  testAssertEqualNode(&node10,

 ((void *)0)

 ,-1,&node20,306);

  testAssertEqualNode(&node35,&node55,0,&node50,307);

  testAssertEqualNode(&node75,&node100,-1,&node90,308);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node10,309);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node35,310);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node55,311);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node80,312);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node100,313);



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

 ), (UNITY_UINT)(337), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(&node10,&node40,0,&node25,338);

  testAssertEqualNode(&node30,&node50,0,&node40,339);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node30,340);

  testAssertEqualNode(&node5,

 ((void *)0)

 ,-1,&node10,341);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node50,342);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node5,343);

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

   ), (UNITY_UINT)(365), UNITY_DISPLAY_STYLE_HEX64);

    testAssertEqualNode(&node1,&node20,1,&node5,366);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node1,367);

    testAssertEqualNode(&node10,

   ((void *)0)

   ,-1,&node20,368);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node10,369);

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

 ), (UNITY_UINT)(395), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(&node50,&node90,0,&node60,396);

  testAssertEqualNode(&node20,&node55,0,&node50,397);

  testAssertEqualNode(&node75,&node100,0,&node90,398);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node100,399);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node75,400);



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

 ), (UNITY_UINT)(428), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(&node20,&node55,0,&node45,429);;

  testAssertEqualNode(&node50,&node60,0,&node55,430);

  testAssertEqualNode(&node10,

 ((void *)0)

 ,-1,&node20,431);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node10,432);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node50,433);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node60,434);



}
