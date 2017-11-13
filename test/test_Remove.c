#include "unity.h"
#include "Remove.h"
#include "Rotate.h"

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

  initNode(&node30,NULL,NULL,0);
  initNode(&node30,&node20,NULL,-1);
  initNode(&node20,&node15,NULL,-1);
  Node *root;
  root = Search(&node30);
  TEST_ASSERT_EQUAL(15,root->data);

}

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
   avl_Remove(&root,50,0);
   TEST_ASSERT_EQUAL_PTR(NULL,root);
 }

/*
 *              50                                  50
 *             /  \       Remove 40               /  \
 *          40    60      -------->             45   60
 *          / \   / \                          /    /  \
 *        25  45 55  70                       25   55   70
 *        /                                  /
 *      10                                 10
 *                                                        |
 *               50(0)                                  |
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

  avl_Remove(&root,40,0);
  TEST_ASSERT_EQUAL_PTR(root,&node50);
  TEST_ASSERT_EQUAL_PTR(NULL,node45.left);
  TEST_ASSERT_EQUAL_PTR(NULL,node45.right);
  TEST_ASSERT_EQUAL_PTR(&node10,node25.left);
  TEST_ASSERT_EQUAL_PTR(&node45,node25.right);
  TEST_ASSERT_EQUAL_PTR(NULL,node55.left);
  TEST_ASSERT_EQUAL_PTR(NULL,node55.right);
  TEST_ASSERT_EQUAL_PTR(NULL,node10.left);
  TEST_ASSERT_EQUAL_PTR(NULL,node10.right);
  TEST_ASSERT_EQUAL_PTR(NULL,node70.left);
  TEST_ASSERT_EQUAL_PTR(NULL,node70.right);
  TEST_ASSERT_EQUAL_PTR(&node55,node60.left);
  TEST_ASSERT_EQUAL_PTR(&node70,node60.right);
  TEST_ASSERT_EQUAL_PTR(&node25 ,node50.left);
  TEST_ASSERT_EQUAL_PTR(&node60,node50.right);
  TEST_ASSERT_EQUAL(0,node45.balanceFactor);
  TEST_ASSERT_EQUAL(0,node10.balanceFactor);
  TEST_ASSERT_EQUAL(0,node55.balanceFactor);
  TEST_ASSERT_EQUAL(0,node70.balanceFactor);
  TEST_ASSERT_EQUAL(0,node25.balanceFactor);
  TEST_ASSERT_EQUAL(0,node50.balanceFactor);
  TEST_ASSERT_EQUAL(0,node60.balanceFactor);

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
  avl_Remove(&root,30,0);
  TEST_ASSERT_EQUAL_PTR(root,&node40);
  TEST_ASSERT_EQUAL_PTR(NULL,node45.left);
  TEST_ASSERT_EQUAL_PTR(NULL,node45.right);
  TEST_ASSERT_EQUAL_PTR(&node20,node25.left);
  TEST_ASSERT_EQUAL_PTR(NULL,node25.right);
  TEST_ASSERT_EQUAL_PTR(&node25,node40.left);
  TEST_ASSERT_EQUAL_PTR(&node50,node40.right);
  TEST_ASSERT_EQUAL_PTR(NULL,node20.left);
  TEST_ASSERT_EQUAL_PTR(NULL,node20.right);
  TEST_ASSERT_EQUAL_PTR(NULL,node60.left);
  TEST_ASSERT_EQUAL_PTR(NULL,node60.right);
  TEST_ASSERT_EQUAL_PTR(&node45,node50.left);
  TEST_ASSERT_EQUAL_PTR(&node60,node50.right);
  TEST_ASSERT_EQUAL(0,node45.balanceFactor);
  TEST_ASSERT_EQUAL(-1,node25.balanceFactor);
  TEST_ASSERT_EQUAL(0,node40.balanceFactor);
  TEST_ASSERT_EQUAL(0,node20.balanceFactor);
  TEST_ASSERT_EQUAL(0,node60.balanceFactor);
  TEST_ASSERT_EQUAL(0,node50.balanceFactor);

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

  avl_Remove(&root,20,0);
  TEST_ASSERT_EQUAL_PTR(&node25,root);
  TEST_ASSERT_EQUAL_PTR(&node10,node25.left);
  TEST_ASSERT_EQUAL_PTR(&node30,node25.right);
  TEST_ASSERT_EQUAL_PTR(NULL,node40.right);
  TEST_ASSERT_EQUAL_PTR(NULL,node40.left);
  TEST_ASSERT_EQUAL_PTR(&node40,node30.right);
  TEST_ASSERT_EQUAL_PTR(NULL,node40.left);
  TEST_ASSERT_EQUAL_PTR(NULL,node10.right);
  TEST_ASSERT_EQUAL_PTR(NULL,node10.left);
  TEST_ASSERT_EQUAL(0,node40.balanceFactor);
  TEST_ASSERT_EQUAL(1,node30.balanceFactor);
  TEST_ASSERT_EQUAL(1,node25.balanceFactor);
  TEST_ASSERT_EQUAL(0,node10.balanceFactor);
}

/**
*          20(1)                           30(1)
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

  avl_Remove(&root,20,0);
  TEST_ASSERT_EQUAL_PTR(&node30,root);
  TEST_ASSERT_EQUAL_PTR(&node10,node30.left);
  TEST_ASSERT_EQUAL_PTR(&node40,node30.right);
  TEST_ASSERT_EQUAL_PTR(NULL,node40.right);
  TEST_ASSERT_EQUAL_PTR(NULL,node40.left);
  TEST_ASSERT_EQUAL_PTR(NULL,node10.right);
  TEST_ASSERT_EQUAL_PTR(NULL,node10.left);
  TEST_ASSERT_EQUAL(0,node40.balanceFactor);
  TEST_ASSERT_EQUAL(0,node30.balanceFactor);
  TEST_ASSERT_EQUAL(0,node10.balanceFactor);
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
  *                        55
  *                       /  \
  *                    45     70           remove 40
  *                  /   \    / \        <-----------
  *                 35   50  60  75
  *                /  \       \
  *              20   25      65
  *                \
  *                30
  *       |                                       55
  *       |Rotate Right                         /    \
  *       |                                   35      70
  *       |_>                                /  \    /  \
  *                                        25   45  60  75
  *                                      /  \    \   \
  *                                    20   30   50   65
  *
  *
  *
  *
  *
  *
  *
  */

  void test_remove_node_40_replace_by_node_45(void){
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

    avl_Remove(&root,40,0);
    TEST_ASSERT_EQUAL_PTR(&node55,root);
    TEST_ASSERT_EQUAL_PTR(&node35,node55.left);
    TEST_ASSERT_EQUAL_PTR(&node70,node55.right);
    TEST_ASSERT_EQUAL_PTR(&node45,node35.right);
    TEST_ASSERT_EQUAL_PTR(&node25,node35.left);
    TEST_ASSERT_EQUAL_PTR(NULL,node20.right);
    TEST_ASSERT_EQUAL_PTR(NULL,node20.left);
    TEST_ASSERT_EQUAL_PTR(NULL,node30.right);
    TEST_ASSERT_EQUAL_PTR(NULL,node30.left);
    TEST_ASSERT_EQUAL_PTR(NULL,node50.right);
    TEST_ASSERT_EQUAL_PTR(NULL,node50.left);
    TEST_ASSERT_EQUAL_PTR(&node30,node25.right);
    TEST_ASSERT_EQUAL_PTR(&node20,node25.left);
    TEST_ASSERT_EQUAL_PTR(&node50,node45.right);
    TEST_ASSERT_EQUAL_PTR(NULL,node45.left);
    TEST_ASSERT_EQUAL_PTR(&node75,node70.right);
    TEST_ASSERT_EQUAL_PTR(&node60,node70.left);
    TEST_ASSERT_EQUAL_PTR(&node65,node60.right);
    TEST_ASSERT_EQUAL_PTR(NULL,node60.left);
    TEST_ASSERT_EQUAL_PTR(NULL,node75.right);
    TEST_ASSERT_EQUAL_PTR(NULL,node75.left);
    TEST_ASSERT_EQUAL_PTR(NULL,node65.right);
    TEST_ASSERT_EQUAL_PTR(NULL,node65.left);
    TEST_ASSERT_EQUAL(0,node55.balanceFactor);
    TEST_ASSERT_EQUAL(0,node35.balanceFactor);
    TEST_ASSERT_EQUAL(0,node20.balanceFactor);
    TEST_ASSERT_EQUAL(0,node30.balanceFactor);
    TEST_ASSERT_EQUAL(0,node50.balanceFactor);
    TEST_ASSERT_EQUAL(0,node25.balanceFactor);
    TEST_ASSERT_EQUAL(1,node45.balanceFactor);
    TEST_ASSERT_EQUAL(-1,node70.balanceFactor);
    TEST_ASSERT_EQUAL(1,node60.balanceFactor);
    TEST_ASSERT_EQUAL(0,node75.balanceFactor);
    TEST_ASSERT_EQUAL(0,node65.balanceFactor);
  }
