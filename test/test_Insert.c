#include "unity.h"
#include "Insert.h"
#include "Rotate.h"
#include "AvlInteger.h"
#include "NodeVerifier.h"
#include "NodeHelper.h"
#include <stdlib.h>
#include "AvlString.h"

void setUp(void){
giveInitdata();
giveInitStrdata();
}
void tearDown(void){}

/**
---------insert   &    rotateleftRight(1)----------------------
*        90(-1)               90 (-1)
*       /  \    add 60        /  \
*     50   100 --------> (1)50   100
*    /                     /  \
*   45                   45     60
*
*
**/

void test_insert_given_90_50_expect_balance(void){

     initNode(&node45,NULL,NULL,0);
     initNode(&node100,NULL,NULL,0);
     initNode(&node90,&node50,&node100,-1);
     initNode(&node50,&node45,NULL,-1);

     Node *root = &node90;
     avlAddInteger(&root,&node60);
     TEST_ASSERT_EQUAL_PTR(&node90,root);
     TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node45);
     TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node60);
     TEST_ASSERT_EQUAL_NODE(&node45,&node60,0,&node50);
     TEST_ASSERT_EQUAL_NODE(&node50,&node100,-1,&node90);
}


/*                    Insert 20
 *    10(0)           --------->        10(1)
 *                                          \
 *                                         20(0)
 *
 */

void test_Insert_20_with_10_as_root(void){
  Node *root = &node10;
  initNode(&node10,NULL,NULL,0);
  avlAddInteger(&root,&node20);
  TEST_ASSERT_EQUAL_PTR(&node10,root);
  TEST_ASSERT_EQUAL_NODE(NULL,&node20,1,&node10);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node20);
}

/*                     Insert 5
 *        10(0)         ------->          10(-1)
 *                                        /
 *                                      5(0)
 *
 */

void test_Insert_5_with_10_as_root(void){
  Node *root = &node10;
  initNode(&node10,NULL,NULL,0);
  avlAddInteger(&root,&node5);
  TEST_ASSERT_EQUAL_PTR(&node10,root);
  TEST_ASSERT_EQUAL_NODE(&node5,NULL,-1,&node10);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node5);

}

/*
 *        10(+1)        Insert 15             15(0)
 *            \         ----------->          /   \
 *            20(0)                       10(0)   20(0)
 *
 */

void test_Insert_20_with_10_as_root_N_15_as_child(void){
  Node *root = &node10;
  initNode(&node10,NULL,&node15,1);
  avlAddInteger(&root,&node20);
  TEST_ASSERT_EQUAL_PTR(&node15,root);
  TEST_ASSERT_EQUAL_NODE(&node10,&node20,0,&node15);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node20);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node10);
}

/*
 *          30(-1)      Insert 10             15(0)
 *         /           ------------>         /    \
 *       15(0)                            10(0)   30(0)
 *
 *
 */

void test_Insert_10_with_30_15_expect_balance_tree(void){
  Node *root = &node30;
  initNode(&node30,&node15,NULL,-1);
  initNode(&node15,NULL,NULL,0);
  avlAddInteger(&root,&node10);
  TEST_ASSERT_EQUAL_PTR(&node15,root);
  TEST_ASSERT_EQUAL_NODE(&node10,&node30,0,&node15);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node10);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node30);
}

/*
 *        40(-1)        Insert 100            50(0)
 *      /               --------->           /    \
 *    50(0)                               40(0)    100(0)
 *
 */

void test_avlInsert_given_40_50_add_100_expect_a_balance_tree(void){
  Node *root = &node40;
  initNode(&node40,NULL,&node50,1);
  initNode(&node50,NULL,NULL,0);
  avlAddInteger(&root,&node100);
  TEST_ASSERT_EQUAL_PTR(&node50,root);
  TEST_ASSERT_EQUAL_NODE(&node40,&node100,0,&node50);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node40);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node100);
}

/*
 *
 *    40(+1)                  40(+2)                              50(0)
 *      \         Insert 55      \                                /   \
 *       50(0)    --------->    50(+1)       Rotate Left       40(0)  55(0)
 *                                   \       ------------>
 *                                    55(0)
 *
 */
 void test_avlInsert_given_40_50_add_55_expect_rotate_left_for_a_balance_tree(void){
   Node *root = &node40;
   initNode(&node40,NULL,&node50,1);
   initNode(&node50,NULL,NULL,0);
   avlAddInteger(&root,&node55);
   TEST_ASSERT_EQUAL_PTR(&node50,root);
   TEST_ASSERT_EQUAL_NODE(&node40,&node55,0,&node50);
   TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node40);
   TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node55);
 }

/*
 *
 *    40(+1)                  40(+2)                              45(0)
 *      \         Insert 45      \                                /   \
 *       50(0)    --------->    50(-1)       Rotate RightLeft   40(0)  50(0)
 *                              /             ------------>
 *                           45(0)
 *
 */
 void test_avlInsert_given_40_50_add_45_expect_rotate_right_left_for_a_balance_tree(void){
   Node *root = &node40;
   initNode(&node40,NULL,&node50,1);
   initNode(&node50,NULL,NULL,0);
   avlAddInteger(&root,&node45);
   TEST_ASSERT_EQUAL_PTR(&node45,root);
   TEST_ASSERT_EQUAL_NODE(&node40,&node50,0,&node45);
   TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node40);
   TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node50);
 }

 /*                        20(+1)                              20(+2)
  *                        / \                                 /   \
  *                   15(0)  50(0)       Insert 35         15(0)  50(-1)
  *                          /   \         ------------>           /   \
  *                       45(0)   55(0)                         45(-1)  55(0)
  *                                                              /
  *                                                           35(0)
  *                                                                  |
  *                                                                  |
  *                            45(0)                                 |Rotate RL
  *                           /  \                                   |
  *                        20(0)  50(+1)                     <_______|
  *                        / \      \
  *                    15(0) 35(0)  55(0)
  *
  *
 */

 void test_avlInsert_given_15_20_45_50_55_add_35_expect_rotate_right_left_for_a_balance_tree(void){
   Node *root = &node20;
   initNode(&node20,&node15,&node50,1);
   initNode(&node50,&node45,&node55,0);
   initNode(&node45,NULL,NULL,0);
   initNode(&node55,NULL,NULL,0);
   initNode(&node15,NULL,NULL,0);
   avlAddInteger(&root,&node35);
   TEST_ASSERT_EQUAL_PTR(&node45,root);
   TEST_ASSERT_EQUAL_NODE(&node20,&node50,0,&node45);
   TEST_ASSERT_EQUAL_NODE(&node15,&node35,0,&node20);
   TEST_ASSERT_EQUAL_NODE(NULL,&node55,1,&node50);
   TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node15);
   TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node35);
   TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node55);
 }

 /*                        20(+1)                              20(+2)
  *                        / \                                 /   \
  *                   15(0)  40(0)       Insert 35         15(0)  40(-1)
  *                          /   \         ------------>           /   \
  *                       25(0)   55(0)                         25(+1)  55(0)
  *                                                                 \
  *                                                                 35(0)
  *
  *                                                                  |
  *                                                                  |
  *                            25(0)                                 |Rotate RL
  *                           /  \                                   |
  *                       20(-1) 40(0)                     <_______|
  *                        /     /   \
  *                    15(0)   35(0)  55(0)
  *
  *
 */

 void test_avlInsert_given_15_20_25_40_55_add_35_expect_rotate_right_left_for_a_balance_tree(void){
   Node *root = &node20;
   initNode(&node20,&node15,&node40,1);
   initNode(&node40,&node25,&node55,0);
   initNode(&node25,NULL,NULL,0);
   initNode(&node55,NULL,NULL,0);
   initNode(&node15,NULL,NULL,0);
   avlAddInteger(&root,&node35);
   TEST_ASSERT_EQUAL_PTR(&node25,root);
   TEST_ASSERT_EQUAL_NODE(&node20,&node40,0,&node25);
   TEST_ASSERT_EQUAL_NODE(&node35,&node55,0,&node40);
   TEST_ASSERT_EQUAL_NODE(&node15,NULL,-1,&node20);
   TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node15);
   TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node35);
   TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node55);
 }

 /*         60(-1)                     60(-2)                       50(0)
  *          /                          /     Rotate Right          /   \
  *       50(0)        Add 40        50(-1)  ------------->      40(0)  60(0)
  *                  --------->       /
  *                                 40(0)
  *
 */
 void test_avlInsert_given_50_60_add_40_expect_rotate_right_for_a_balance_tree(void){
   initNode(&node60,&node50,NULL,-1);
   initNode(&node50,NULL,NULL,0);
   Node *root = &node60;
   avlAddInteger(&root,&node40);
   TEST_ASSERT_EQUAL_PTR(&node50, root);
   TEST_ASSERT_EQUAL_NODE(&node40,&node60,0,&node50);
   TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node40);
   TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node60);
 }

 /*                        60(-1)                                           60(-2)
  *                        / \                                              /   \
  *                   40(0)   65(0)      Add 50                         40(1)  65(0)
  *                    /  \                ------------>                /   \
  *                 10(0)  45(0)                                    10(0)  45(1)
  *                                                                           \
  *                                                                          50(0)
  *                                                                  |
  *                                                                  |
  *                            45(0)                                 |Rotate LR
  *                           /    \                                 |
  *                        40(-1)   60(0)                     <______|
  *                        /         /  \
  *                    10(0)       50(0) 65(0)
  *
  *
  */
 void test_avlInsert_given_10_40_45_60_65_add_50_expect_rotate_left_right_a_balance_tree(void){
   initNode(&node60,&node40,&node65,-1);
   initNode(&node40,&node10,&node45,0);
   initNode(&node45,NULL,NULL,0);
   initNode(&node10,NULL,NULL,0);
   initNode(&node65,NULL,NULL,0);
   Node *root = &node60;

   avlAddInteger(&root,&node50);
   TEST_ASSERT_EQUAL_PTR(&node45, root);
   TEST_ASSERT_EQUAL_NODE(&node40,&node60,0,&node45);
   TEST_ASSERT_EQUAL_NODE(&node10,NULL,-1,&node40);
   TEST_ASSERT_EQUAL_NODE(&node50,&node65,0,&node60);
   TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node10);
   TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node50);
   TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node65);
 }

 /*                        60(-1)                                           60(-2)
  *                        / \                                              /   \
  *                   40(0)   65(0)      Add 45                         40(1)  65(0)
  *                    /  \                ------------>                /   \
  *                 10(0)  50(0)                                    10(0)  50(-1)
  *                                                                       /
  *                                                                   45(0)
  *
  *                                                                  |
  *                                                                  |
  *                            50(0)                                 |Rotate LR
  *                           /    \                                 |
  *                        40(0)   60(1)                     <______|
  *                        /   \       \
  *                    10(0)  45(0)    65(0)
  *
  *
  */
  void test_avlInsert_given_10_40_50_60_65_add_45_expect_rotate_left_right_a_balance_tree(void){
    initNode(&node60,&node40,&node65,-1);
    initNode(&node40,&node10,&node50,0);
    initNode(&node50,NULL,NULL,0);
    initNode(&node10,NULL,NULL,0);
    initNode(&node65,NULL,NULL,0);
    Node *root = &node60;

    avlAddInteger(&root,&node45);
    TEST_ASSERT_EQUAL_PTR(&node50, root);
    TEST_ASSERT_EQUAL_NODE(&node40,&node60,0,&node50);
    TEST_ASSERT_EQUAL_NODE(&node10,&node45,0,&node40);
    TEST_ASSERT_EQUAL_NODE(NULL,&node65,1,&node60);
    TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node10);
    TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node45);
    TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node65);
  }

  void test_Insert_Add_1_25_40_50_55_expect_rotate_left(void){
  initNode(&node1,NULL,NULL,0);
  initNode(&node25,NULL,NULL,0);
  initNode(&node40,NULL,NULL,0);
  initNode(&node50,NULL,NULL,0);
  initNode(&node55,NULL,NULL,0);
  Node *root = NULL;
  avlAddInteger(&root,&node1);
  avlAddInteger(&root,&node25);
  avlAddInteger(&root,&node40);
  avlAddInteger(&root,&node50);
  avlAddInteger(&root,&node55);
  TEST_ASSERT_EQUAL_PTR(&node25,root);
  TEST_ASSERT_EQUAL_NODE(&node1,&node50,1,&node25);
  TEST_ASSERT_EQUAL_NODE(&node40,&node55,0,&node50);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node1);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node40);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node55);

}

void test_insert_Rex(void)
{
    //initNodeString(&nodeRex,NULL,NULL,0);

    StringNode *root = NULL;
    avlAddString(&root,&nodeRex);
    TEST_ASSERT_EQUAL_PTR(&nodeRex,root);
    TEST_ASSERT_EQUAL_STRING_NODE(NULL,NULL,0,&nodeRex);
}

void test_insert_Jstan_given_Rex(void)
{
  initNodeString(&nodeRex,NULL,NULL,0);
  //char *string = "Alexander";
  StringNode *root = (StringNode *)&nodeRex;
  avlAddString(&root,&nodeJstan);
  TEST_ASSERT_EQUAL_PTR(&nodeRex,root);
  TEST_ASSERT_EQUAL_STRING_NODE(NULL,&nodeJstan,1,&nodeRex);
  TEST_ASSERT_EQUAL_STRING_NODE(NULL,NULL,0,&nodeJstan);
}

void test_insert_Jstan_given_ThengChun(void)
{
  initNodeString(&nodeThengChun,NULL,NULL,0);
  //char *string = "Alexander";
  StringNode *root = (StringNode *)&nodeThengChun;
  avlAddString(&root,&nodeJstan);
  TEST_ASSERT_EQUAL_PTR(&nodeThengChun,root);
  TEST_ASSERT_EQUAL_STRING_NODE(NULL,&nodeJstan,1,&nodeThengChun);
  TEST_ASSERT_EQUAL_STRING_NODE(NULL,NULL,0,&nodeJstan);
}

void test_insert_Alexander_given_Rex_ThengChun_Andy(void)
{
  initNodeString(&nodeRex,&nodeThengChun,&nodeAndy,0);
  initNodeString(&nodeThengChun, NULL,NULL,0);
  initNodeString(&nodeAndy,NULL,NULL,0);
  StringNode *root = (StringNode *)&nodeRex;
  avlAddString(&root,&nodeAlexander);
  TEST_ASSERT_EQUAL_PTR(&nodeRex,root);
  TEST_ASSERT_EQUAL_STRING_NODE(&nodeThengChun,&nodeAndy,1,&nodeRex);
  TEST_ASSERT_EQUAL_STRING_NODE(NULL,&nodeAlexander,1,&nodeAndy);
  TEST_ASSERT_EQUAL_STRING_NODE(NULL,NULL,0,&nodeThengChun);
}


/*      ___________________________________________________________________________________________
 *     |_Current_Node_|__Child_Node_| G.Child_Node |________Action________|_Root_|_Child_|_G.Child_|
 *     |_______+2_____|_(R)__+1_____|______X_______|________Rotate_Left___|___0__|___0___|____X____|
 *     |_______+2_____|_(R)___0_____|______X_______|________Rotate_Left___|__-1__|___1___|____X____|
 *     |_______+2_____|_(R)__-1_____|_____-1_______|___Rotate_RightLeft___|___0__|___1___|____0____|
 *     |_______+2_____|_(R)__-1_____|______0_______|___Rotate_RightLeft___|___0__|___0___|____0____|
 *     |_______+2_____|_(R)__-1_____|_____+1_______|___Rotate_RightLeft___|__-1__|___0___|____0____|
 *     |_______-2_____|_(L)__-1_____|______X_______|________Rotate_Right__|___0__|___0___|____X____|
 *     |_______-2_____|_(L)___0_____|______X_______|________Rotate_Right__|__-1__|___1___|____X____|
 *     |_______-2_____|_(L)__+1_____|_____+1_______|___Rotate_LeftRight___|___0__|__-1___|_________|
 *     |_______-2_____|_(L)__+1_____|______0_______|___Rotate_LeftRight___|___0__|___0___|____X____|
 *     |_______-2_____|_(L)__+1_____|_____-1_______|___Rotate_LeftRight___|___1__|___0___|____0____|
 *
 *
 */
