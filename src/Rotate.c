#include "Rotate.h"
#include "stdio.h"


Node *rotateRight(Node *node){
Node *root;
root = node->left;
node->left = node->left->right;
root->right = node;
return root;
}


/*
Node *rotateLeftVer2(Node *node){
  Node *root;
  root = node->right;
  if((node->balanceFactor == 2)&&(node->right->balanceFactor == 1 | 0){
  if(node->right->left != NULL){
    node->right = node->right->left;
  }
  else{
    node->right->balanceFactor -=1;
  }
}
  else{
    node->right->balanceFactor -=1;
  }
  root->left = node;
  return root;
}*/

Node *rotateLeft(Node *node){
  Node *root;
  root = node->right;
  node->right = node->right->left;
  root->left = node;
  return root;
}

Node *rotateLeftRight(Node *node){
  Node *root;
  node->left =rotateLeft(node->left);
  root = rotateRight(node);
  return root;
}

Node *rotateRightLeft(Node *node){
  Node *root;
  node->right = rotateRight(node->right);
  root = rotateLeft(node);
  return root;
}
