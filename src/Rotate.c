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
  node->right = node->right->left;
  root->left = node;
  root->left->left = NULL;
  root->right->left = NULL;
  root->right->right = NULL;
  root->left->right->left=NULL;
  root->left->right->right=NULL;       //or  BELOW
  //root->right->left = NULL;
  //root->right->right = NULL;
  return root;

}
