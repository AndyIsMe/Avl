#include "build/temp/_test_Remove.c"
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

   RemoveN(&root,50);

   UnityAssertEqualNumber((UNITY_INT64)((

  ((void *)0)

  )), (UNITY_INT64)((root)), (

  ((void *)0)

  ), (UNITY_UINT)(38), UNITY_DISPLAY_STYLE_HEX64);

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

  UnityAssertEqualNumber((UNITY_INT64)((&node50)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(76), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node45,77);

  testAssertEqualNode(&node10,&node45,0,&node25,78);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node55,79);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node10,80);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node70,81);

  testAssertEqualNode(&node55,&node70,0,&node60,82);

  testAssertEqualNode(&node25,&node60,0,&node50,83);



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

  UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(111), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node45,112);

  testAssertEqualNode(&node20,

 ((void *)0)

 ,-1,&node25,113);

  testAssertEqualNode(&node25,&node50,0,&node40,114);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node20,115);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node60,116);

  testAssertEqualNode(&node45,&node60,0,&node50,117);



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

 ), (UNITY_UINT)(138), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(&node10,&node30,1,&node25,139);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node40,140);

  testAssertEqualNode(

 ((void *)0)

 ,&node40,1,&node30,141);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node10,142);

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

 ), (UNITY_UINT)(162), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(&node10,&node40,0,&node30,163);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node40,164);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node10,165);

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



    RemoveN(&root,40);

    UnityAssertEqualNumber((UNITY_INT64)((&node55)), (UNITY_INT64)((root)), (

   ((void *)0)

   ), (UNITY_UINT)(218), UNITY_DISPLAY_STYLE_HEX64);

    testAssertEqualNode(&node30,&node70,0,&node55,219);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node35,220);

    testAssertEqualNode(

   ((void *)0)

   ,&node25,1,&node20,221);

    testAssertEqualNode(&node20,&node45,0,&node30,222);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node50,223);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node25,224);

    testAssertEqualNode(&node35,&node50,0,&node45,225);

    testAssertEqualNode(&node60,&node75,-1,&node70,226);

    testAssertEqualNode(

   ((void *)0)

   ,&node65,1,&node60,227);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node75,228);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node65,229);

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

  RemoveN(&root,40);

  UnityAssertEqualNumber((UNITY_INT64)((&node60)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(263), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(&node30,&node90,0,&node60,264);

  testAssertEqualNode(&node20,&node50,0,&node30,265);

  testAssertEqualNode(

 ((void *)0)

 ,&node80,1,&node75,266);

  testAssertEqualNode(&node10,

 ((void *)0)

 ,-1,&node20,267);

  testAssertEqualNode(&node35,&node55,0,&node50,268);

  testAssertEqualNode(&node75,&node100,-1,&node90,269);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node10,270);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node35,271);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node55,272);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node80,273);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node100,274);



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



  RemoveN(&root,20);

  UnityAssertEqualNumber((UNITY_INT64)((&node25)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(298), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(&node10,&node40,0,&node25,299);

  testAssertEqualNode(&node30,&node50,0,&node40,300);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node30,301);

  testAssertEqualNode(&node5,

 ((void *)0)

 ,-1,&node10,302);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node50,303);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node5,304);

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



    RemoveN(&root,15);

    UnityAssertEqualNumber((UNITY_INT64)((&node5)), (UNITY_INT64)((root)), (

   ((void *)0)

   ), (UNITY_UINT)(326), UNITY_DISPLAY_STYLE_HEX64);

    testAssertEqualNode(&node1,&node20,1,&node5,327);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node1,328);

    testAssertEqualNode(&node10,

   ((void *)0)

   ,-1,&node20,329);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node10,330);

}
