#include "unity.h"
#include "Insert.h"


Node node1,node5 , node10,node15,node20,node25,node30,node35,node40;
Node node45,node50,node55,node60;

void initNode(Node *node,Node *left,Node *right){
  node->left = left;
  node->right = right;
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
}
void tearDown(void){}

void test_Insert_20_with_10_as_root(void){
  Node *root = &node10;
  initNode(&node10,NULL,NULL);
  avl_Insert(&root,&node20);
  TEST_ASSERT_EQUAL_PTR(&node10,root);
  TEST_ASSERT_EQUAL_PTR(&node20,node10.right);

}

void test_Insert_5_with_10_as_root(void){
  Node *root = &node10;
  initNode(&node10,NULL,NULL);
  avl_Insert(&root,&node5);
  TEST_ASSERT_EQUAL_PTR(&node10,root);
  TEST_ASSERT_EQUAL_PTR(&node5,node10.left);

}

void test_Insert_20_with_10_as_root_N_15_as_child(void){
  Node *root = &node10;
  initNode(&node10,NULL,&node15);
  avl_Insert(&root,&node20);
  TEST_ASSERT_EQUAL_PTR(&node10,root);
  TEST_ASSERT_EQUAL_PTR(&node15,node10.right);
  TEST_ASSERT_EQUAL_PTR(&node20,node15.right);

}

void test_Insert_10_with_30_as_root_N_15_as_child(void){
  Node *root = &node30;
  initNode(&node30,&node15,NULL);
  avl_Insert(&root,&node10);
  TEST_ASSERT_EQUAL_PTR(&node30,root);
  TEST_ASSERT_EQUAL_PTR(&node15,node30.left);
  TEST_ASSERT_EQUAL_PTR(&node10,node15.left);

}
