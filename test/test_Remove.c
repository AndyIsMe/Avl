#include "unity.h"
#include "Remove.h"
#include "Rotate.h"
#include "NodeVerifier.h"
#include "NodeHelper.h"
#include "AvlInteger.h"
#include <stdlib.h>
#include "AvlString.h"


void setUp(void)
{
giveInitdata();
giveInitStrdata();
}
void tearDown(void){}

/*void test_findNearest(void)
{

  initNode(&node30,NULL,NULL,0);
  initNode(&node30,&node20,NULL,-1);
  initNode(&node20,&node15,NULL,-1);
  Node *root = &node30;
  getReplace(&root,0);
  TEST_ASSERT_EQUAL(&node15,root->data);

}*/

/*            50      Remove 50         0
 *                    --------->
 *
 *
 *
 */
 void test_remove_50(void)
 {
   initNode(&node50,NULL,NULL,0);
   Node *root = &node50;
   avlRemoveInteger(&root,50);
   TEST_ASSERT_EQUAL_PTR(NULL,root);
 }


 /**
*       40(0)                         40 (1)
*       / \          remove 30         \
*    30    50 (0)  --------------->    50
*
**/
void test_remove_node_30(void){


  initNode(&node30,NULL,NULL,0);
  initNode(&node50,NULL,NULL,0);
  initNode(&node40,&node30,&node50,0);


  Node *root = &node40;
  avlRemoveInteger(&root,30);
  TEST_ASSERT_EQUAL_PTR(&node40,root);
  TEST_ASSERT_EQUAL_NODE(NULL,&node50,1,&node40);
}

/**
*       40(0)                         40 (-1)
*       / \          remove 50       /
*    30    50 (0)  ---------------> 30
*
**/
void test_remove_node_50(void){

 initNode(&node30,NULL,NULL,0);
 initNode(&node50,NULL,NULL,0);
 initNode(&node40,&node30,&node50,0);

 Node *root = &node40;
 avlRemoveInteger(&root,50);
 TEST_ASSERT_EQUAL_PTR(&node40,root);
 TEST_ASSERT_EQUAL_NODE(&node30,NULL,-1,&node40);
}

/*
 *              50                                 50
 *             /  \       Remove 40               /  \
 *          40    60      -------->             45   60
 *          / \   / \                          /    /  \
 *        25  45 55  70                       25   55   70
 *        /                                  /
 *      10                                 10
 *                                                        |
 *               50(0)                                    |
 *              /    \                                   | Rotate Right
 *            25(0)   60(0)                       < ____|
 *           /   \    / \
 *        10(0)45(0)55(0)70(0)
 *
 *
 *
 *
 *
*/

void test_remove_40_replace_by_45_with_rotation(void){

  initNode(&node10,NULL,NULL,0);
  initNode(&node25,&node10,NULL,-1);
  initNode(&node45,NULL,NULL,0);
  initNode(&node40,&node25,&node45,-1);
  initNode(&node55,NULL,NULL,0);
  initNode(&node70,NULL,NULL,0);
  initNode(&node60,&node55,&node70,0);
  initNode(&node50,&node40,&node60,-1);

  Node *root = &node50;

  avlRemoveInteger(&root,40);
  TEST_ASSERT_EQUAL_PTR(&node50,root);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node45);
  TEST_ASSERT_EQUAL_NODE(&node10,&node45,0,&node25);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node55);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node10);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node70);
  TEST_ASSERT_EQUAL_NODE(&node55,&node70,0,&node60);
  TEST_ASSERT_EQUAL_NODE(&node25,&node60,0,&node50);

}

/*
 *              30                                  40
 *             /  \       Remove 30                /  \
 *          25     50      -------->             25   50
 *          /     / \                          /     /  \
 *        20    40  60                       20    45   60
 *                \
 *                 45
 *
 *
*/

void test_remove_30_replace_by_40(void){

  initNode(&node20,NULL,NULL,0);
  initNode(&node25,&node20,NULL,-1);
  initNode(&node45,NULL,NULL,0);
  initNode(&node40,NULL,&node45,1);
  initNode(&node60,NULL,NULL,0);
  initNode(&node50,&node40,&node60, -1);
  initNode(&node30,&node25,&node50,1);

  Node *root = &node30;
  avlRemoveInteger(&root,30);
  TEST_ASSERT_EQUAL_PTR(&node40,root);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0, &node45);
  TEST_ASSERT_EQUAL_NODE(&node20,NULL,-1,&node25);
  TEST_ASSERT_EQUAL_NODE(&node25,&node50,0,&node40);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0, &node20);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0, &node60);
  TEST_ASSERT_EQUAL_NODE(&node45,&node60,0,&node50);

}

/**
*          20(1)                           25(1)
*          /   \           remove 20       /   \
*        10(0) 30(0)        ----->     10(0)    30(1)
*              /  \                               \
*           25(0) 40(0)                         40(0)
*
**/
void test_remove_node_20_replace_by_node_25(void){
  Node *root = &node20;
  initNode(&node10,NULL,NULL,0);
  initNode(&node30,&node25,&node40,0);
  initNode(&node20,&node10,&node30,1);
  initNode(&node40,NULL,NULL,0);
  initNode(&node25,NULL,NULL,0);

  avlRemoveInteger(&root,20);
  TEST_ASSERT_EQUAL_PTR(&node25,root);
  TEST_ASSERT_EQUAL_NODE(&node10,&node30,1, &node25);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0, &node40);
  TEST_ASSERT_EQUAL_NODE(NULL,&node40,1, &node30);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0, &node10);
}

/**
*          20(1)                           30(0)
*          /   \           remove 20       /   \
*        10(0) 30(1)        ----->     10(0)    40(0)
*                \
*                 40(0)
*
**/

void test_remove_node_20_replace_by_node_30(void){
  Node *root = &node20;
  initNode(&node10,NULL,NULL,0);
  initNode(&node30,NULL,&node40,1);
  initNode(&node20,&node10,&node30,1);
  initNode(&node40,NULL,NULL,0);

  avlRemoveInteger(&root,20);
  TEST_ASSERT_EQUAL_PTR(&node30,root);
  TEST_ASSERT_EQUAL_NODE(&node10,&node40,0, &node30);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0, &node40);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0, &node10);
}

/*
 *                         55                                       *                        55
  *                      /    \
  *                    40      70
  *                  /   \    /  \
  *                 30   50  60  75
  *                /  \   /    \
  *              20   35 45     65
  *                \
  *                25
  *                       55
  *                      /  \
  *                    45    70           remove 40
  *                  /   \   / \        <-----------
  *                 30   50 60  75
  *                /  \       \
  *              20   35      65
  *                \
  *                 25
  *       |                                       55
  *       |Rotate Right                         /    \
  *       |                                   30      70
  *       |_>                                /  \    /  \
  *                                        20   45  60  75
  *                                         \  /  \   \
  *                                        25 35   50  65
  *
  *
  *
  *
  *
  *
  *
  */
  void test_remove_node_40_replace_by_node_45_with_rotation(void){
    Node *root = &node55;
    initNode(&node55,&node40,&node70,-1);
    initNode(&node40,&node30,&node50,-1);
    initNode(&node30,&node20,&node35,-1);
    initNode(&node20,NULL,&node25,1);
    initNode(&node35,NULL,NULL,0);
    initNode(&node50,&node45,NULL,-1);
    initNode(&node25,NULL,NULL,0);
    initNode(&node45,NULL,NULL,0);
    initNode(&node70,&node60,&node75,-1);
    initNode(&node60,NULL,&node65,1);
    initNode(&node75,NULL,NULL,0);
    initNode(&node65,NULL,NULL,0);

    avlRemoveInteger(&root,40);
    TEST_ASSERT_EQUAL_PTR(&node55,root);
    TEST_ASSERT_EQUAL_NODE(&node30,&node70,0,&node55);
    TEST_ASSERT_EQUAL_NODE(NULL,NULL,0, &node35);
    TEST_ASSERT_EQUAL_NODE(NULL,&node25,1, &node20);
    TEST_ASSERT_EQUAL_NODE(&node20,&node45,0, &node30);
    TEST_ASSERT_EQUAL_NODE(NULL,NULL,0, &node50);
    TEST_ASSERT_EQUAL_NODE(NULL,NULL,0, &node25);
    TEST_ASSERT_EQUAL_NODE(&node35,&node50,0, &node45);
    TEST_ASSERT_EQUAL_NODE(&node60,&node75,-1, &node70);
    TEST_ASSERT_EQUAL_NODE(NULL,&node65,1, &node60);
    TEST_ASSERT_EQUAL_NODE(NULL,NULL,0, &node75);
    TEST_ASSERT_EQUAL_NODE(NULL,NULL,0, &node65);
  }

/**
*                  60                           60 (0)
*                /    \       remove 40        /   \
*               40      90    ---------->     30    90(1)
*              /  \    /   \                 / \   /  \
*            20   50  75   100             20  50  75  100
*           / \    \   \                   /   / \   \
*         10   30   55  80               10   35  55  80
*               \
*               35
*
**/
void test_remove_node_40_replace_by_node_50_with_rotation(void){

  initNode(&node60,&node40,&node90,-1);
  initNode(&node40,&node20,&node50,-1);
  initNode(&node90,&node75,&node100,-1);
  initNode(&node20,&node10,&node30,1);
  initNode(&node50,NULL,&node55,1);
  initNode(&node75,NULL,&node80,1);
  initNode(&node100,NULL,NULL,0);
  initNode(&node30,NULL,&node35,1);
  initNode(&node10,NULL,NULL,0);
  initNode(&node55,NULL,NULL,0);
  initNode(&node80,NULL,NULL,0);
  initNode(&node100,NULL,NULL,0);


  Node *root = &node60;
  avlRemoveInteger(&root,40);
  TEST_ASSERT_EQUAL_PTR(&node60,root);
  TEST_ASSERT_EQUAL_NODE(&node30,&node90,0, &node60);
  TEST_ASSERT_EQUAL_NODE(&node20,&node50,0, &node30);
  TEST_ASSERT_EQUAL_NODE(NULL,&node80,1, &node75);
  TEST_ASSERT_EQUAL_NODE(&node10,NULL,-1, &node20);
  TEST_ASSERT_EQUAL_NODE(&node35,&node55,0, &node50);
  TEST_ASSERT_EQUAL_NODE(&node75,&node100,-1, &node90);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0, &node10);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0, &node35);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0, &node55);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0, &node80);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0, &node100);

}

/**
*          20(1)                           25(0)
*          /   \           remove 20       /   \
*       10(-1) 30(1)        ----->     10(-1)  40(0)
*       /      /  \                     /       /  \
*     5(0)   25(0) 40(1)             5(0)    30(0) 50(0)
*                    \
*                    50(0)
**/
void test_remove_node_20_replace_by_node_25_with_rotation(void){
  Node *root = &node20;
  initNode(&node10,&node5,NULL,-1);
  initNode(&node30,&node25,&node40,1);
  initNode(&node20,&node10,&node30,1);
  initNode(&node40,NULL,&node50,1);
  initNode(&node25,NULL,NULL,0);
  initNode(&node5,NULL,NULL,0);
  initNode(&node50,NULL,NULL,0);

  avlRemoveInteger(&root,20);
  TEST_ASSERT_EQUAL_PTR(&node25,root);
  TEST_ASSERT_EQUAL_NODE(&node10,&node40,0, &node25);
  TEST_ASSERT_EQUAL_NODE(&node30,&node50,0, &node40);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0, &node30);
  TEST_ASSERT_EQUAL_NODE(&node5,NULL,-1, &node10);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0, &node50);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0, &node5);
}

/**
 *
 *         5(1)                             5(1)
 *       /  \                              /  \
 *      1   15(0)     delete node 15     1     20(-1)
 *         /  \          ---->                /
 *        10  20                            10
 */
void test_remove_node_15_replace_by_node_20(void)
{
    initNode(&node5, &node1, &node15, 1);
    initNode(&node15, &node10, &node20, 0);
    initNode(&node10, NULL, NULL, 0);
    initNode(&node20, NULL, NULL, 0);
    initNode(&node1, NULL, NULL, 0);

    Node *root = &node5;

    avlRemoveInteger(&root,15);
    TEST_ASSERT_EQUAL_PTR(&node5,root);
    TEST_ASSERT_EQUAL_NODE(&node1,&node20,1,&node5);
    TEST_ASSERT_EQUAL_NODE(NULL,NULL,0, &node1);
    TEST_ASSERT_EQUAL_NODE(&node10,NULL,-1, &node20);
    TEST_ASSERT_EQUAL_NODE(NULL,NULL,0, &node10);
}
/**
*         60                                60
*      /     \       remove 40            /   \
*    40        90    ---------->        50    90
*    / \     /   \                     / \   /  \
*   20  50  75    100                20  55 75  100
*         \
*          55
**/

void test_remove_node_40_replace_by_node_50(void){

  initNode(&node60,&node40,&node90,-1);
  initNode(&node40,&node20,&node50,1);
  initNode(&node90,&node75,&node100,0);
  initNode(&node50,NULL,&node55,1);
  initNode(&node75,NULL,NULL,0);
  initNode(&node20,NULL,NULL,0);
  initNode(&node100,NULL,NULL,0);
  initNode(&node55,NULL,NULL,0);


  Node *root = &node60;
  avlRemoveInteger(&root,40);
  TEST_ASSERT_EQUAL_PTR(&node60,root);
  TEST_ASSERT_EQUAL_NODE(&node50,&node90,0,&node60);
  TEST_ASSERT_EQUAL_NODE(&node20,&node55,0,&node50);
  TEST_ASSERT_EQUAL_NODE(&node75,&node100,0,&node90);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node100);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node75);

}
/**
*
*                               remove 30                           rotateleft at 50
*               30        ------------------->      45            ---------------->         45
*              /  \                                 / \                                    / \
*            20   50                               20  50                                 20  55
*           /    /  \                             /     \                                 /   / \
*         10    45   55                          10      55                             10   50  60
*                      \                                   \
*                       60                                 60
*
**/

void test_remove_node_30_replace_by_node_45_with_rotation(void){

  initNode(&node30,&node20,&node50,1);
  initNode(&node20,&node10,NULL,-1);
  initNode(&node50,&node45,&node55,1);
  initNode(&node55,NULL,&node60,1);
  initNode(&node10,NULL,NULL,0);
  initNode(&node45,NULL,NULL,0);
  initNode(&node60,NULL,NULL,0);

  Node *root = &node30;
  avlRemoveInteger(&root,30);
  TEST_ASSERT_EQUAL_PTR(&node45,root);
  TEST_ASSERT_EQUAL_NODE(&node20,&node55,0,&node45);;
  TEST_ASSERT_EQUAL_NODE(&node50,&node60,0,&node55);
  TEST_ASSERT_EQUAL_NODE(&node10,NULL,-1,&node20);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node10);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node50);
  TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&node60);

}

void test_Remove_40(void){
initNode(&node1,NULL,NULL,0);
initNode(&node25,&node1,&node50,1);
initNode(&node40,NULL,NULL,0);
initNode(&node50,&node40,&node55,0);
initNode(&node55,NULL,NULL,0);
Node *root = &node25;
avlRemoveInteger(&root,40);
TEST_ASSERT_EQUAL_NODE(&node1,&node50,1,&node25);
TEST_ASSERT_EQUAL_NODE(NULL,&node55,1,&node50);

}



void test_remove_Alexander_given_Rex_ThengChun_Andy(void)
{
  initNodeString(&nodeRex,&nodeThengChun,&nodeAndy,1);
  initNodeString(&nodeThengChun, NULL,NULL,0);
  initNodeString(&nodeAndy,NULL,&nodeAlexander,1);
  initNodeString(&nodeAlexander,NULL,NULL,0);
  StringNode *root = (StringNode *)&nodeRex;
  avlRemoveString(&root,"Alexander");
  TEST_ASSERT_EQUAL_PTR(&nodeRex,root);
  TEST_ASSERT_EQUAL_STRING_NODE(&nodeThengChun,&nodeAndy,0,&nodeRex);
  TEST_ASSERT_EQUAL_STRING_NODE(NULL,NULL,0,&nodeAndy);
  TEST_ASSERT_EQUAL_STRING_NODE(NULL,NULL,0,&nodeThengChun);
  //TEST_ASSERT_EQUAL_NODE(NULL,NULL,0,&string);
}
