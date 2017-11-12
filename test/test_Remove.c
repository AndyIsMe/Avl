#include "unity.h"
#include "Remove.h"

Node node1,node5 , node10,node15,node20,node25,node30,node35,node40;
Node node45,node50,node55,node60,node65,node70,node90;
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

/*
              50                                  50
            /   \       Remove 40                /  \
          40    60      -------->              45   60
          / \   /\                            /    /  \
        25  45 55  70                       25   55   70
        /                                  /
      10                                 10
*/

void test_remove_40(void){

  initNode(&node10,NULL,NULL,0);
  initNode(&node25,&node10,NULL,0);
  initNode(&node45,NULL,NULL,0);
  initNode(&node40,&node25,&node45,-1);
  initNode(&node55,NULL,NULL,0);
  initNode(&node70,NULL,NULL,0);
  initNode(&node60,&node55,&node70,0);
  initNode(&node50,&node40,&node60,-1);

  Node *root = &node50;
  printf("45 %d\n",&node45 );
  printf("40 %d\n",&node40 );
  printf("25  %d\n",&node10 );
  avl_Remove(&root,40);
  TEST_ASSERT_EQUAL_PTR(root,&node50);
  TEST_ASSERT_EQUAL_PTR(&node25,node45.left);
  TEST_ASSERT_EQUAL_PTR(NULL,node45.right);
  TEST_ASSERT_EQUAL_PTR(&node10,node25.left);
  TEST_ASSERT_EQUAL_PTR(NULL,node25.right);
  TEST_ASSERT_EQUAL_PTR(NULL,node55.left);
  TEST_ASSERT_EQUAL_PTR(NULL,node55.right);
  TEST_ASSERT_EQUAL_PTR(NULL,node10.left);
  TEST_ASSERT_EQUAL_PTR(NULL,node10.right);
  TEST_ASSERT_EQUAL_PTR(NULL,node70.left);
  TEST_ASSERT_EQUAL_PTR(NULL,node70.right);
  TEST_ASSERT_EQUAL_PTR(&node55,node60.left);
  TEST_ASSERT_EQUAL_PTR(&node70,node60.right);
  TEST_ASSERT_EQUAL_PTR(&node40 ,node50.left);
  TEST_ASSERT_EQUAL_PTR(&node55,node50.right);
}
