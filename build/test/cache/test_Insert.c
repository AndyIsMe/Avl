#include "build/temp/_test_Insert.c"
#include "AvlString.h"
#include "NodeHelper.h"
#include "NodeVerifier.h"
#include "AvlInteger.h"
#include "Rotate.h"
#include "Insert.h"
#include "unity.h"


void setUp(void){

giveInitdata();

giveInitStrdata();

}

void tearDown(void){}

void test_insert_given_90_50_expect_balance(void){



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

     avl_Insert(&root,&node60 , (Compare)IntCompare);

     UnityAssertEqualNumber((UNITY_INT32)((&node90)), (UNITY_INT32)((root)), (

    ((void *)0)

    ), (UNITY_UINT)(36), UNITY_DISPLAY_STYLE_HEX32);

     testAssertEqualNode(

    ((void *)0)

    ,

    ((void *)0)

    ,0,&node45,37);

     testAssertEqualNode(

    ((void *)0)

    ,

    ((void *)0)

    ,0,&node60,38);

     testAssertEqualNode(&node45,&node60,0,&node50,39);

     testAssertEqualNode(&node50,&node100,-1,&node90,40);

}

void test_Insert_20_with_10_as_root(void){

  Node *root = &node10;

  initNode(&node10,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  avl_Insert(&root,&node20 , (Compare)IntCompare);

  UnityAssertEqualNumber((UNITY_INT32)((&node10)), (UNITY_INT32)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(55), UNITY_DISPLAY_STYLE_HEX32);

  testAssertEqualNode(

 ((void *)0)

 ,&node20,1,&node10,56);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node20,57);

}

void test_Insert_5_with_10_as_root(void){

  Node *root = &node10;

  initNode(&node10,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  avl_Insert(&root,&node5 , (Compare)IntCompare);

  UnityAssertEqualNumber((UNITY_INT32)((&node10)), (UNITY_INT32)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(71), UNITY_DISPLAY_STYLE_HEX32);

  testAssertEqualNode(&node5,

 ((void *)0)

 ,-1,&node10,72);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node5,73);



}

void test_Insert_20_with_10_as_root_N_15_as_child(void){

  Node *root = &node10;

  initNode(&node10,

                  ((void *)0)

                      ,&node15,1);

  avl_Insert(&root,&node20 , (Compare)IntCompare);

  UnityAssertEqualNumber((UNITY_INT32)((&node15)), (UNITY_INT32)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(88), UNITY_DISPLAY_STYLE_HEX32);

  testAssertEqualNode(&node10,&node20,0,&node15,89);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node20,90);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node10,91);

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

  avl_Insert(&root,&node10 , (Compare)IntCompare);

  UnityAssertEqualNumber((UNITY_INT32)((&node15)), (UNITY_INT32)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(107), UNITY_DISPLAY_STYLE_HEX32);

  testAssertEqualNode(&node10,&node30,0,&node15,108);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node10,109);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node30,110);

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

  avl_Insert(&root,&node100 , (Compare)IntCompare);

  UnityAssertEqualNumber((UNITY_INT32)((&node50)), (UNITY_INT32)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(125), UNITY_DISPLAY_STYLE_HEX32);

  testAssertEqualNode(&node40,&node100,0,&node50,126);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node40,127);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node100,128);

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

   avl_Insert(&root,&node55 , (Compare)IntCompare);

   UnityAssertEqualNumber((UNITY_INT32)((&node50)), (UNITY_INT32)((root)), (

  ((void *)0)

  ), (UNITY_UINT)(145), UNITY_DISPLAY_STYLE_HEX32);

   testAssertEqualNode(&node40,&node55,0,&node50,146);

   testAssertEqualNode(

  ((void *)0)

  ,

  ((void *)0)

  ,0,&node40,147);

   testAssertEqualNode(

  ((void *)0)

  ,

  ((void *)0)

  ,0,&node55,148);

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

   avl_Insert(&root,&node45 , (Compare)IntCompare);

   UnityAssertEqualNumber((UNITY_INT32)((&node45)), (UNITY_INT32)((root)), (

  ((void *)0)

  ), (UNITY_UINT)(165), UNITY_DISPLAY_STYLE_HEX32);

   testAssertEqualNode(&node40,&node50,0,&node45,166);

   testAssertEqualNode(

  ((void *)0)

  ,

  ((void *)0)

  ,0,&node40,167);

   testAssertEqualNode(

  ((void *)0)

  ,

  ((void *)0)

  ,0,&node50,168);

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

   avl_Insert(&root,&node35 , (Compare)IntCompare);

   UnityAssertEqualNumber((UNITY_INT32)((&node45)), (UNITY_INT32)((root)), (

  ((void *)0)

  ), (UNITY_UINT)(197), UNITY_DISPLAY_STYLE_HEX32);

   testAssertEqualNode(&node20,&node50,0,&node45,198);

   testAssertEqualNode(&node15,&node35,0,&node20,199);

   testAssertEqualNode(

  ((void *)0)

  ,&node55,1,&node50,200);

   testAssertEqualNode(

  ((void *)0)

  ,

  ((void *)0)

  ,0,&node15,201);

   testAssertEqualNode(

  ((void *)0)

  ,

  ((void *)0)

  ,0,&node35,202);

   testAssertEqualNode(

  ((void *)0)

  ,

  ((void *)0)

  ,0,&node55,203);

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

   avl_Insert(&root,&node35 , (Compare)IntCompare);

   UnityAssertEqualNumber((UNITY_INT32)((&node25)), (UNITY_INT32)((root)), (

  ((void *)0)

  ), (UNITY_UINT)(233), UNITY_DISPLAY_STYLE_HEX32);

   testAssertEqualNode(&node20,&node40,0,&node25,234);

   testAssertEqualNode(&node35,&node55,0,&node40,235);

   testAssertEqualNode(&node15,

  ((void *)0)

  ,-1,&node20,236);

   testAssertEqualNode(

  ((void *)0)

  ,

  ((void *)0)

  ,0,&node15,237);

   testAssertEqualNode(

  ((void *)0)

  ,

  ((void *)0)

  ,0,&node35,238);

   testAssertEqualNode(

  ((void *)0)

  ,

  ((void *)0)

  ,0,&node55,239);

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

   avl_Insert(&root,&node40 , (Compare)IntCompare);

   UnityAssertEqualNumber((UNITY_INT32)((&node50)), (UNITY_INT32)((root)), (

  ((void *)0)

  ), (UNITY_UINT)(254), UNITY_DISPLAY_STYLE_HEX32);

   testAssertEqualNode(&node40,&node60,0,&node50,255);

   testAssertEqualNode(

  ((void *)0)

  ,

  ((void *)0)

  ,0,&node40,256);

   testAssertEqualNode(

  ((void *)0)

  ,

  ((void *)0)

  ,0,&node60,257);

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



   avl_Insert(&root,&node50 , (Compare)IntCompare);

   UnityAssertEqualNumber((UNITY_INT32)((&node45)), (UNITY_INT32)((root)), (

  ((void *)0)

  ), (UNITY_UINT)(286), UNITY_DISPLAY_STYLE_HEX32);

   testAssertEqualNode(&node40,&node60,0,&node45,287);

   testAssertEqualNode(&node10,

  ((void *)0)

  ,-1,&node40,288);

   testAssertEqualNode(&node50,&node65,0,&node60,289);

   testAssertEqualNode(

  ((void *)0)

  ,

  ((void *)0)

  ,0,&node10,290);

   testAssertEqualNode(

  ((void *)0)

  ,

  ((void *)0)

  ,0,&node50,291);

   testAssertEqualNode(

  ((void *)0)

  ,

  ((void *)0)

  ,0,&node65,292);

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



    avl_Insert(&root,&node45 , (Compare)IntCompare);

    UnityAssertEqualNumber((UNITY_INT32)((&node50)), (UNITY_INT32)((root)), (

   ((void *)0)

   ), (UNITY_UINT)(322), UNITY_DISPLAY_STYLE_HEX32);

    testAssertEqualNode(&node40,&node60,0,&node50,323);

    testAssertEqualNode(&node10,&node45,0,&node40,324);

    testAssertEqualNode(

   ((void *)0)

   ,&node65,1,&node60,325);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node10,326);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node45,327);

    testAssertEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&node65,328);

  }



void test_Insert_Add_1_25_40_50_55_expect_rotate_left(void){

  initNode(&node1,

                 ((void *)0)

                     ,

                      ((void *)0)

                          ,0);

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

  initNode(&node50,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  initNode(&node55,

                  ((void *)0)

                      ,

                       ((void *)0)

                           ,0);

  Node *root = 

              ((void *)0)

                  ;

  avl_Insert(&root,&node1 , (Compare)IntCompare);

  avl_Insert(&root,&node25 , (Compare)IntCompare);

  avl_Insert(&root,&node40 , (Compare)IntCompare);

  avl_Insert(&root,&node50 , (Compare)IntCompare);

  avl_Insert(&root,&node55 , (Compare)IntCompare);

  UnityAssertEqualNumber((UNITY_INT32)((&node25)), (UNITY_INT32)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(343), UNITY_DISPLAY_STYLE_HEX32);

  testAssertEqualNode(&node1,&node50,1,&node25,344);

  testAssertEqualNode(&node40,&node55,0,&node50,345);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node1,346);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node40,347);

  testAssertEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&node55,348);



}



void test_insert_Rex(void)

{





    StringNode *root = 

                      ((void *)0)

                          ;

    avl_Insert(&root,&nodeRex , (Compare)compareString);

    UnityAssertEqualNumber((UNITY_INT32)((&nodeRex)), (UNITY_INT32)((root)), (

   ((void *)0)

   ), (UNITY_UINT)(358), UNITY_DISPLAY_STYLE_HEX32);

    testAssertStringEqualNode(

   ((void *)0)

   ,

   ((void *)0)

   ,0,&nodeRex,359);

}



void test_insert_Jstan_given_Rex(void)

{

  initNodeString(&nodeRex,

                         ((void *)0)

                             ,

                              ((void *)0)

                                  ,0);



  StringNode *root = (StringNode *)&nodeRex;

  avl_Insert(&root,&nodeJstan , (Compare)compareString);

  UnityAssertEqualNumber((UNITY_INT32)((&nodeRex)), (UNITY_INT32)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(368), UNITY_DISPLAY_STYLE_HEX32);

  testAssertStringEqualNode(

 ((void *)0)

 ,&nodeJstan,1,&nodeRex,369);

  testAssertStringEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&nodeJstan,370);

}



void test_insert_Jstan_given_ThengChun(void)

{

  initNodeString(&nodeThengChun,

                               ((void *)0)

                                   ,

                                    ((void *)0)

                                        ,0);



  StringNode *root = (StringNode *)&nodeThengChun;

  avl_Insert(&root,&nodeJstan , (Compare)compareString);

  UnityAssertEqualNumber((UNITY_INT32)((&nodeThengChun)), (UNITY_INT32)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(379), UNITY_DISPLAY_STYLE_HEX32);

  testAssertStringEqualNode(

 ((void *)0)

 ,&nodeJstan,1,&nodeThengChun,380);

  testAssertStringEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&nodeJstan,381);

}



void test_insert_Alexander_given_Rex_ThengChun_Andy(void)

{

  initNodeString(&nodeRex,&nodeThengChun,&nodeAndy,0);

  initNodeString(&nodeThengChun, 

                                ((void *)0)

                                    ,

                                     ((void *)0)

                                         ,0);

  initNodeString(&nodeAndy,

                          ((void *)0)

                              ,

                               ((void *)0)

                                   ,0);

  StringNode *root = (StringNode *)&nodeRex;

  avl_Insert(&root,&nodeAlexander , (Compare)compareString);

  UnityAssertEqualNumber((UNITY_INT32)((&nodeRex)), (UNITY_INT32)((root)), (

 ((void *)0)

 ), (UNITY_UINT)(391), UNITY_DISPLAY_STYLE_HEX32);

  testAssertStringEqualNode(&nodeThengChun,&nodeAndy,1,&nodeRex,392);

  testAssertStringEqualNode(

 ((void *)0)

 ,&nodeAlexander,1,&nodeAndy,393);

  testAssertStringEqualNode(

 ((void *)0)

 ,

 ((void *)0)

 ,0,&nodeThengChun,394);

}
