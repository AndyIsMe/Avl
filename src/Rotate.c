#include "Rotate.h"
#include "stdio.h"

Node *rotateRight(Node *node){
Node *root;
root = node->left;
node->left = node->left->right;
root->right = node;
return root;
}

Node *rotateLeft(Node *node){
  Node *root;
  root = node->right;
  if(node->right->left != NULL){
    node->right = node->right->left;
  }
  root->left = node;
  return root;
}

Node *rotateLeftRight(Node *node){
  Node *root;
  node->left =rotateLeft(node->left);
  root = rotateRight(node);
  return root;
}
