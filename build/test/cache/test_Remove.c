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

  RemoveN(&root,30);

  UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(56), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(

 ((void *)0)

 ,&node50,1,&node40,57);

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

 RemoveN(&root,50);

 UnityAssertEqualNumber((UNITY_INT64)((&node40)), (UNITY_INT64)((root)), (

((void *)0)

), (UNITY_UINT)(74), UNITY_DISPLAY_STYLE_HEX64);

 testAssertEqualNode(&node30,

((void *)0)

,-1,&node40,75);

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

 ), (UNITY_UINT)(113), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node45,114);

  testAssertEqualNode(&node10,&node45,0,&node25,115);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node55,116);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node10,117);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node70,118);

  testAssertEqualNode(&node55,&node70,0,&node60,119);

  testAssertEqualNode(&node25,&node60,0,&node50,120);



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

 ), (UNITY_UINT)(148), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node45,149);

  testAssertEqualNode(&node20,

 ((void *)0)

 ,-1,&node25,150);

  testAssertEqualNode(&node25,&node50,0,&node40,151);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node20,152);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node60,153);

  testAssertEqualNode(&node45,&node60,0,&node50,154);



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

 ), (UNITY_UINT)(175), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(&node10,&node30,1,&node25,176);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node40,177);

  testAssertEqualNode(

 ((void *)0)

 ,&node40,1,&node30,178);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node10,179);

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

 ), (UNITY_UINT)(199), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(&node10,&node40,0,&node30,200);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node40,201);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node10,202);

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

   ), (UNITY_UINT)(255), UNITY_DISPLAY_STYLE_HEX64);

    testAssertEqualNode(&node30,&node70,-1,&node55,256);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node35,257);

    testAssertEqualNode(

   ((void *)0)

   ,&node25,1,&node20,258);

    testAssertEqualNode(&node20,&node45,0,&node30,259);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node50,260);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node25,261);

    testAssertEqualNode(&node35,&node50,0,&node45,262);

    testAssertEqualNode(&node60,&node75,-1,&node70,263);

    testAssertEqualNode(

   ((void *)0)

   ,&node65,1,&node60,264);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node75,265);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node65,266);

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

 ), (UNITY_UINT)(299), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(&node30,&node90,0,&node60,300);

  testAssertEqualNode(&node20,&node50,0,&node30,301);

  testAssertEqualNode(

 ((void *)0)

 ,&node80,1,&node75,302);

  testAssertEqualNode(&node10,

 ((void *)0)

 ,-1,&node20,303);

  testAssertEqualNode(&node35,&node55,0,&node50,304);

  testAssertEqualNode(&node75,&node100,-1,&node90,305);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node10,306);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node35,307);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node55,308);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node80,309);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node100,310);



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

 ), (UNITY_UINT)(334), UNITY_DISPLAY_STYLE_HEX64);

  testAssertEqualNode(&node10,&node40,0,&node25,335);

  testAssertEqualNode(&node30,&node50,0,&node40,336);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node30,337);

  testAssertEqualNode(&node5,

 ((void *)0)

 ,-1,&node10,338);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node50,339);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node5,340);

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

    printf("5 %x\n",&node5);

    printf("15 %x\n",&node15);

    printf("10 %x\n",&node10);

    printf("20 %x\n",&node20);

    Node *root = &node5;



    RemoveN(&root,15);

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

  RemoveN(&root,40);

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

  RemoveN(&root,30);

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
