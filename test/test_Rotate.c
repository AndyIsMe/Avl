#include "unity.h"
#include "Rotate.h"
#include "Insert.h"

Node node1,node5 , node10,node15,node20,node25,node30,node35,node40;
Node node45,node50,node55,node60,node65,node90;
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
  node90.data = 90;
  node100.data = 100;
}
void tearDown(void)
{
}
/**
 *        10            30
 *          \          /  \
 *          30  ---> 10    40
 *         /  \        \
 *       25    40       25
 *
 */
 void test_rotateLeft(void)
 {
     initNode(&node25,NULL,NULL,0);
     initNode(&node40,NULL,NULL,0);
     initNode(&node30,&node25,&node40,0);
     initNode(&node10,NULL,&node30,2);

     Node *root = rotateLeft(&node10);
     TEST_ASSERT_EQUAL_PTR(&node30,root);
     TEST_ASSERT_EQUAL_PTR(NULL,node10.left);
     TEST_ASSERT_EQUAL_PTR(NULL,node25.right);
     TEST_ASSERT_EQUAL_PTR(NULL,node25.left);
     TEST_ASSERT_EQUAL_PTR(NULL,node40.left);
     TEST_ASSERT_EQUAL_PTR(NULL,node40.right);
     TEST_ASSERT_EQUAL_PTR(&node10,node30.left);
     TEST_ASSERT_EQUAL_PTR(&node40,node30.right);
     TEST_ASSERT_EQUAL_PTR(&node25,node10.right);

 }
/**
 *        30            10
 *       /             /  \
 *     10       ---> 5    30
 *    /  \               /
 *  5     20           20
 *
 */
void test_rotateRight(void)
{
    initNode(&node5,NULL,NULL,0);
    initNode(&node20,NULL,NULL,0);
    initNode(&node10,&node5,&node20,0);
    initNode(&node30,&node10,NULL,-2);

    Node *root = rotateRight(&node30);
    TEST_ASSERT_EQUAL_PTR(&node10,root);
    TEST_ASSERT_EQUAL_PTR(NULL,node20.left);
    TEST_ASSERT_EQUAL_PTR(NULL,node20.right);
    TEST_ASSERT_EQUAL_PTR(NULL,node5.left);
    TEST_ASSERT_EQUAL_PTR(NULL,node5.right);
    TEST_ASSERT_EQUAL_PTR(&node20,node30.left);
    TEST_ASSERT_EQUAL_PTR(NULL,node30.right);
    TEST_ASSERT_EQUAL_PTR(&node5,node10.left);
    TEST_ASSERT_EQUAL_PTR(&node30,node10.right);

}

/**
 *            45                 45
 *          /   \              /   \
 *        10    50   --->    30    50
 *          \               /  \
 *           30           10    40
 *          /  \           \
 *        25    40          25
 *
 *          30                    |
 *         /  \                   |
 *      10     45                 |
 *       \    / \               <_|
 *       25 40  50
 *
 */

void test_rotateLeftRight(void){

  initNode(&node30,&node25,&node40,0);
  initNode(&node40,NULL,NULL,0);
  initNode(&node50,NULL,NULL,0);
  initNode(&node25,NULL,NULL,0);
  initNode(&node10,NULL,&node30,2);
  initNode(&node45,&node10,&node50,-2);

  Node *root = rotateLeftRight(&node45);
  TEST_ASSERT_EQUAL_PTR(&node30,root);
  TEST_ASSERT_EQUAL_PTR(NULL,node10.left);
  TEST_ASSERT_EQUAL_PTR(NULL,node25.left);
  TEST_ASSERT_EQUAL_PTR(NULL,node25.right);
  TEST_ASSERT_EQUAL_PTR(NULL,node40.left);
  TEST_ASSERT_EQUAL_PTR(NULL,node40.right);
  TEST_ASSERT_EQUAL_PTR(NULL,node50.left);
  TEST_ASSERT_EQUAL_PTR(NULL,node50.right);
  TEST_ASSERT_EQUAL_PTR(&node25,node10.right);
  TEST_ASSERT_EQUAL_PTR(&node10,node30.left);
  TEST_ASSERT_EQUAL_PTR(&node40,node45.left);
  TEST_ASSERT_EQUAL_PTR(&node50,node45.right);
  TEST_ASSERT_EQUAL_PTR(&node45,node30.right);

}

/**
---------rotaterightleft-----------------
*         5                   5                   25
*       /  \      RL"40"    /   \      RR"5"     /   \
*      1   40  ------->   1     25  ----------> 5     40
*          /                    / \            /  \   /
*        25                    20 40          1   20  35
*       /  \                     /
*      20   35                  35
*
**/

 void test_rotateRightLeft(void){
       initNode(&node1,NULL,NULL,0);
       initNode(&node20,NULL,NULL,0);
       initNode(&node35,NULL,NULL,0);
       initNode(&node25,&node20,&node35,0);
       initNode(&node40,&node25,NULL,-2);
       initNode(&node5,&node1,&node40,2);

       Node *root =  rotateRightLeft(&node5);
       TEST_ASSERT_EQUAL_PTR(&node25,root);
       TEST_ASSERT_EQUAL_PTR(NULL,node1.left);
       TEST_ASSERT_EQUAL_PTR(NULL,node1.right);
       TEST_ASSERT_EQUAL_PTR(NULL,node20.left);
       TEST_ASSERT_EQUAL_PTR(NULL,node20.right);
       TEST_ASSERT_EQUAL_PTR(NULL,node35.left);
       TEST_ASSERT_EQUAL_PTR(NULL,node35.right);
       TEST_ASSERT_EQUAL_PTR(&node1,node5.left);
       TEST_ASSERT_EQUAL_PTR(&node20,node5.right);
       TEST_ASSERT_EQUAL_PTR(&node40,node25.right);
       TEST_ASSERT_EQUAL_PTR(&node5,node25.left);
       TEST_ASSERT_EQUAL_PTR(&node35,node40.left);
       TEST_ASSERT_EQUAL_PTR(NULL,node40.right);

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

/*                        40(+2)                              50(0)
 *                         \                                  /   \
 *                          50(+1)      Rotate Left        40(0)  100(0)
 *                            \          ------------>
 *                            100(0)
 *
*/
void test_avlBalanceRightTree_given_40_50_100_expect_a_balance_tree(void){
  initNode(&node100,NULL,NULL,0);
  initNode(&node50,NULL,&node100,1);
  initNode(&node40,NULL,&node50,2);
  Node *root = &node40;

  avlBalanceRightTreeV1(&root);
  TEST_ASSERT_EQUAL_PTR(&node50, root);
  TEST_ASSERT_EQUAL_PTR(&node40,node50.left);
  TEST_ASSERT_EQUAL_PTR(&node100,node50.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node40.left);
  TEST_ASSERT_EQUAL_PTR(NULL, node40.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node100.left);
  TEST_ASSERT_EQUAL_PTR(NULL, node100.right);
  TEST_ASSERT_EQUAL(0 ,node50.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node40.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node100.balanceFactor);
}

/*                        40(+2)                              50(-1)
 *                         \                                  /   \
 *                          50(0)       Rotate Left        40(1)  100(0)
 *                         /  \          ------------>        \
 *                    45(0)   100(0)                          45(0)
 *
*/
void test_avlBalanceRightTree_given_40_50_100_45_expect_a_balance_tree(void){
  initNode(&node45,NULL,NULL,0);
  initNode(&node100,NULL,NULL,0);
  initNode(&node50,&node45,&node100,0);
  initNode(&node40,NULL,&node50,2);
  Node *root = &node40;

  avlBalanceRightTreeV1(&root);
  TEST_ASSERT_EQUAL_PTR(&node50, root);
  TEST_ASSERT_EQUAL_PTR(&node40,node50.left);
  TEST_ASSERT_EQUAL_PTR(&node100,node50.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node40.left);
  TEST_ASSERT_EQUAL_PTR(&node45, node40.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node100.left);
  TEST_ASSERT_EQUAL_PTR(NULL, node100.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node45.left);
  TEST_ASSERT_EQUAL_PTR(NULL, node45.right);
  TEST_ASSERT_EQUAL(-1 ,node50.balanceFactor);
  TEST_ASSERT_EQUAL(1 ,node40.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node45.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node100.balanceFactor);
}

/*                        20(+2)                              20(+2)
 *                        / \                                 /   \
 *                   15(0)  50(-1)      Rotate Right       15(0)  45(+2)
 *                          /   \         ------------>           /   \
 *                       45(-1)  55(0)                         35(0)  50(+1)
 *                        /                                             \
 *                      35(0)                                            55(0)
 *                                                                  |
 *                                                                  |
 *                            45(0)                                 |Rotate Left
 *                           /  \                                   |
 *                        20(0)  50(+1)                     <_______|
 *                        / \      \
 *                    15(0) 35(0)  55(0)
 *
 *
*/

void test_avlBalanceRightTreeV1_given_15_20_35_45_50_55_expect_a_balance_tree(void){
  initNode(&node15,NULL,NULL,0);
  initNode(&node50,&node45,&node55,-1);
  initNode(&node45,&node35,NULL,-1);
  initNode(&node35,NULL,NULL,0);
  initNode(&node55,NULL,NULL,0);
  initNode(&node20,&node15,&node50,2);
  Node *root = &node20;

  avlBalanceRightTreeV1(&root);

  TEST_ASSERT_EQUAL_PTR(&node45, root);
  TEST_ASSERT_EQUAL_PTR(NULL,node50.left);
  TEST_ASSERT_EQUAL_PTR(&node55,node50.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node55.left);
  TEST_ASSERT_EQUAL_PTR(NULL, node55.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node35.left);
  TEST_ASSERT_EQUAL_PTR(NULL, node35.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node15.left);
  TEST_ASSERT_EQUAL_PTR(NULL, node15.right);
  TEST_ASSERT_EQUAL_PTR(&node15, node20.left);
  TEST_ASSERT_EQUAL_PTR(&node35, node20.right);
  TEST_ASSERT_EQUAL_PTR(&node20, node45.left);
  TEST_ASSERT_EQUAL_PTR(&node50, node45.right);
  TEST_ASSERT_EQUAL(0 ,node15.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node20.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node35.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node45.balanceFactor);
  TEST_ASSERT_EQUAL(1 ,node50.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node55.balanceFactor);
}

/*                        20(+2)                              20(+2)
 *                        / \                                 /   \
 *                   15(0)  45(-1)      Rotate Right       15(0)  35(0)
 *                          /   \         ------------>           /   \
 *                       35(0)  55(0)                         30(+1)  45(+1)
 *                        /   \                                   \       \
 *                      30(0) 40(0)                              40(0)    55(0)
 *                                                                  |
 *                                                                  |
 *                            35(0)                                 |Rotate Left
 *                           /     \                                |
 *                        20(0)    45(0)                   <_______|
 *                        / \      /   \
 *                    15(0) 30(0) 40(0) 55(0)
 *
 *
*/

void test_avlBalanceRightTreeV1_given_15_20_30_35_40_45_55_expect_a_balance_tree(void){
  initNode(&node15,NULL,NULL,0);
  initNode(&node30,NULL,NULL,0);
  initNode(&node40,NULL,NULL,0);
  initNode(&node55,NULL,NULL,0);
  initNode(&node35,&node30,&node40,0);
  initNode(&node45,&node35,&node55,-1);
  initNode(&node20,&node15,&node45,+2);
  Node *root = &node20;

  avlBalanceRightTreeV1(&root);
  TEST_ASSERT_EQUAL_PTR(&node35, root);
  TEST_ASSERT_EQUAL_PTR(NULL,node55.left);
  TEST_ASSERT_EQUAL_PTR(NULL,node55.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node40.left);
  TEST_ASSERT_EQUAL_PTR(NULL, node40.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node30.left);
  TEST_ASSERT_EQUAL_PTR(NULL, node30.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node15.left);
  TEST_ASSERT_EQUAL_PTR(NULL, node15.right);
  TEST_ASSERT_EQUAL_PTR(&node15, node20.left);
  TEST_ASSERT_EQUAL_PTR(&node30, node20.right);
  TEST_ASSERT_EQUAL_PTR(&node40, node45.left);
  TEST_ASSERT_EQUAL_PTR(&node55, node45.right);
  TEST_ASSERT_EQUAL_PTR(&node20, node35.left);
  TEST_ASSERT_EQUAL_PTR(&node45, node35.right);
  TEST_ASSERT_EQUAL(0 ,node15.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node20.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node30.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node35.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node40.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node45.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node55.balanceFactor);
}

/*                        20(+2)                              20(+2)
 *                        / \                                 /   \
 *                   15(0)  40(-1)      Rotate Right       15(0)  25(+1)
 *                          /   \         ------------>              \
 *                       25(+1)  55(0)                               40(0)
 *                           \                                      /    \
 *                           35(0)                               35(0)   55(0)
 *
 *                                                                   |
 *                                                                  |
 *                            25(0)                                 |Rotate Left
 *                           /     \                                |
 *                        20(-1)   40(0)                   <_______|
 *                        /       /   \
 *                    15(0)    35(0) 55(0)
 *
 *
*/

void test_avlBalanceRightTreeV1_given_15_20_35_40_45_55_expect_a_balance_tree(void){
  initNode(&node15,NULL,NULL,0);
  initNode(&node35,NULL,NULL,0);
  initNode(&node55,NULL,NULL,0);
  initNode(&node25,NULL,&node35,1);
  initNode(&node40,&node25,&node55,-1);
  initNode(&node20,&node15,&node40,+2);
  Node *root = &node20;

  avlBalanceRightTreeV1(&root);
  TEST_ASSERT_EQUAL_PTR(&node25, root);
  TEST_ASSERT_EQUAL_PTR(NULL,node55.left);
  TEST_ASSERT_EQUAL_PTR(NULL,node55.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node35.left);
  TEST_ASSERT_EQUAL_PTR(NULL, node35.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node15.left);
  TEST_ASSERT_EQUAL_PTR(NULL, node15.right);
  TEST_ASSERT_EQUAL_PTR(&node15, node20.left);
  TEST_ASSERT_EQUAL_PTR(NULL, node20.right);
  TEST_ASSERT_EQUAL_PTR(&node35, node40.left);
  TEST_ASSERT_EQUAL_PTR(&node55, node40.right);
  TEST_ASSERT_EQUAL_PTR(&node20, node25.left);
  TEST_ASSERT_EQUAL_PTR(&node40, node25.right);
  TEST_ASSERT_EQUAL(0 ,node15.balanceFactor);
  TEST_ASSERT_EQUAL(-1 ,node20.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node35.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node40.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node45.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node55.balanceFactor);
}


/*                        60(-2)                              50(0)
 *                         /                                  /   \
 *                      50(-1)       Rotate Right        40(0)  60(0)
 *                      /            ------------>
 *                  40(0)
 *
*/
void test_avlBalanceLeftTree_given_40_50_60_expect_a_balance_tree(void){
  initNode(&node60,&node50,NULL,-2);
  initNode(&node50,&node40,NULL,-1);
  initNode(&node40,NULL,NULL,0);
  Node *root = &node60;

  avlBalanceLeftTree(&root);
  TEST_ASSERT_EQUAL_PTR(&node50, root);
  TEST_ASSERT_EQUAL_PTR(&node40,node50.left);
  TEST_ASSERT_EQUAL_PTR(&node60,node50.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node40.left);
  TEST_ASSERT_EQUAL_PTR(NULL, node40.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node60.left);
  TEST_ASSERT_EQUAL_PTR(NULL, node60.right);
  TEST_ASSERT_EQUAL(0 ,node50.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node40.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node60.balanceFactor);
}

/*                        60(-2)                              50(1)
 *                         /                                  /   \
 *                      50(0)       Rotate Right         40(0)    60(-1)
 *                      /   \         ------------>                /
 *                  40(0)    55(0)                              55(0)
 *
*/
void test_avlBalanceLeftTree_given_40_55_50_60_expect_a_balance_tree(void){
  initNode(&node60,&node50,NULL,-2);
  initNode(&node50,&node40,&node55,0);
  initNode(&node40,NULL,NULL,0);
  initNode(&node55,NULL,NULL,0);
  Node *root = &node60;

  avlBalanceLeftTree(&root);
  TEST_ASSERT_EQUAL_PTR(&node50, root);
  TEST_ASSERT_EQUAL_PTR(&node40,node50.left);
  TEST_ASSERT_EQUAL_PTR(&node60,node50.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node40.left);
  TEST_ASSERT_EQUAL_PTR(NULL,node40.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node55.left);
  TEST_ASSERT_EQUAL_PTR(NULL, node55.right);
  TEST_ASSERT_EQUAL_PTR(&node55, node60.left);
  TEST_ASSERT_EQUAL_PTR(NULL, node60.right);
  TEST_ASSERT_EQUAL(1 ,node50.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node40.balanceFactor);
  TEST_ASSERT_EQUAL(-1 ,node60.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node55.balanceFactor);
}


/*                        60(-2)                                           60(-2)
 *                        / \                                              /   \
 *                   40(+1)  65(0)      Rotate Left                    45(-1)  65(0)
 *                    /  \                ------------>                /   \
 *                 10(0)  45(+1)                                    40(-1) 50(0)
 *                          \                                       /
 *                           50(0)                                10(0)
 *                                                                  |
 *                                                                  |
 *                            45(0)                                 |Rotate Left
 *                           /    \                                   |
 *                        40(-1)   60(0)                     <_______|
 *                        /         /  \
 *                    10(0)       50(0) 65(0)
 *
 *
 */
void test_avlBalanceLeftTreeV1_given_10_40_45_50_60_65_expect_a_balance_tree(void){
  initNode(&node60,&node40,&node65,-2);
  initNode(&node40,&node10,&node45,1);
  initNode(&node45,NULL,&node50,1);
  initNode(&node10,NULL,NULL,0);
  initNode(&node50,NULL,NULL,0);
  initNode(&node65,NULL,NULL,0);
  Node *root = &node60;

  avlBalanceLeftTreeV1(&root);
  TEST_ASSERT_EQUAL_PTR(&node45, root);
  TEST_ASSERT_EQUAL_PTR(&node40,node45.left);
  TEST_ASSERT_EQUAL_PTR(&node60,node45.right);
  TEST_ASSERT_EQUAL_PTR(&node10, node40.left);
  TEST_ASSERT_EQUAL_PTR(&node50,node60.left);
  TEST_ASSERT_EQUAL_PTR(&node65,node60.right);
  TEST_ASSERT_EQUAL_PTR(NULL,node40.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node10.left);
  TEST_ASSERT_EQUAL_PTR(NULL, node10.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node50.left);
  TEST_ASSERT_EQUAL_PTR(NULL, node50.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node65.left);
  TEST_ASSERT_EQUAL_PTR(NULL, node65.right);
  TEST_ASSERT_EQUAL(0 ,node10.balanceFactor);
  TEST_ASSERT_EQUAL(-1 ,node40.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node45.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node50.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node60.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node65.balanceFactor);
}

/*                        60(-2)                                           60(-2)
 *                        / \                                              /   \
 *                   30(+1)  65(0)      Rotate Left                    45(0)  65(0)
 *                    /  \                ------------>                /   \
 *                 10(0)  45(0)                                    30(-1) 50(-1)
 *                        /   \                                     /     /
 *                     40(0) 50(0)                               10(0)  40(0)
 *
 *                                                                        |
 *                                                                       |
 *                            45(0)                                     |Rotate Left
 *                           /     \                                   |
 *                        30(0)     60(0)                     <_______|
 *                        /  \       /  \
 *                    10(0)  40(0) 50(0) 65(0)
 *
 *
 */
void test_avlBalanceLeftTreeV1_given_10_30_40_45_50_60_65_expect_a_balance_tree(void){
  initNode(&node60,&node30,&node65,-2);
  initNode(&node30,&node10,&node45,1);
  initNode(&node45,&node40,&node50,0);
  initNode(&node10,NULL,NULL,0);
  initNode(&node40,NULL,NULL,0);
  initNode(&node50,NULL,NULL,0);
  initNode(&node65,NULL,NULL,0);
  Node *root = &node60;

  avlBalanceLeftTreeV1(&root);
  TEST_ASSERT_EQUAL_PTR(&node45, root);
  TEST_ASSERT_EQUAL_PTR(&node10,node30.left);
  TEST_ASSERT_EQUAL_PTR(&node40,node30.right);
  TEST_ASSERT_EQUAL_PTR(&node30,node45.left);
  TEST_ASSERT_EQUAL_PTR(&node60,node45.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node40.left);
  TEST_ASSERT_EQUAL_PTR(NULL,node40.right);
  TEST_ASSERT_EQUAL_PTR(&node50,node60.left);
  TEST_ASSERT_EQUAL_PTR(&node65,node60.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node10.left);
  TEST_ASSERT_EQUAL_PTR(NULL, node10.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node50.left);
  TEST_ASSERT_EQUAL_PTR(NULL, node50.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node65.left);
  TEST_ASSERT_EQUAL_PTR(NULL, node65.right);
  TEST_ASSERT_EQUAL(0 ,node10.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node30.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node40.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node45.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node50.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node60.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node65.balanceFactor);
}

/*                        60(-2)                                           60(-2)
 *                        / \                                              /   \
 *                   30(+1)  65(0)      Rotate Left                    45(0)  65(0)
 *                    /  \                ------------>                /
 *                 10(0)  45(-1)                                    30(-1)
 *                         /                                       /     /
 *                     40(0)                                   10(0)  40(0)
 *
 *                                                                        |
 *                                                                       |
 *                            45(0)                                     |Rotate Left
 *                           /     \                                   |
 *                        30(0)     60(+1)                     <_______|
 *                        /  \         \
 *                    10(0)  40(0)     65(0)
 *
 *
 */
void test_avlBalanceLeftTreeV1_given_10_30_40_45_60_65_expect_a_balance_tree(void){
  initNode(&node60,&node30,&node65,-2);
  initNode(&node30,&node10,&node45,1);
  initNode(&node45,&node40,NULL,-1);
  initNode(&node10,NULL,NULL,0);
  initNode(&node40,NULL,NULL,0);
  initNode(&node65,NULL,NULL,0);
  Node *root = &node60;

  avlBalanceLeftTreeV1(&root);
  TEST_ASSERT_EQUAL_PTR(&node45, root);
  TEST_ASSERT_EQUAL_PTR(&node10,node30.left);
  TEST_ASSERT_EQUAL_PTR(&node40,node30.right);
  TEST_ASSERT_EQUAL_PTR(&node30,node45.left);
  TEST_ASSERT_EQUAL_PTR(&node60,node45.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node40.left);
  TEST_ASSERT_EQUAL_PTR(NULL,node40.right);
  TEST_ASSERT_EQUAL_PTR(NULL,node60.left);
  TEST_ASSERT_EQUAL_PTR(&node65,node60.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node10.left);
  TEST_ASSERT_EQUAL_PTR(NULL, node10.right);
  TEST_ASSERT_EQUAL_PTR(NULL, node65.left);
  TEST_ASSERT_EQUAL_PTR(NULL, node65.right);
  TEST_ASSERT_EQUAL(0 ,node10.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node30.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node40.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node45.balanceFactor);
  TEST_ASSERT_EQUAL(1 ,node60.balanceFactor);
  TEST_ASSERT_EQUAL(0 ,node65.balanceFactor);
}
