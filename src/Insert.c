#include "Insert.h"
#include "stdio.h"
#include "stdlib.h"
#include "Rotate.h"


Node *avl_Insert(Node **rootPtr, Node *nodeToAdd){
    if(*rootPtr == NULL){
      *rootPtr = nodeToAdd;
      (*rootPtr)->left = NULL;
      (*rootPtr)->right = NULL;
      return *rootPtr;
                        }
    else{
      if((*rootPtr)->data > nodeToAdd->data){
        (*rootPtr)->left = avl_Insert((&(*rootPtr)->left),nodeToAdd);
        return *rootPtr;
                                            }
      else if((*rootPtr)->data < nodeToAdd->data){
        (*rootPtr)->right = avl_Insert((&(*rootPtr)->right),nodeToAdd);
        return *rootPtr;
                                                  }
      else{
        return *rootPtr;
          }
        }
}

int avlBalanceRightTree(Node **rootPtr){
  int bf;
  Node *node = *rootPtr;
  Node *child = node->right;
  if((bf = child->balanceFactor)==0){
    node->balanceFactor = 1;
    child->balanceFactor -= 1;
                                    }
  else if((bf = child->balanceFactor)==1){
    node->balanceFactor = 0;
    child->balanceFactor = 0;
                                          }
    *rootPtr = rotateLeft(*rootPtr);
    return 0;
}

int avlBalanceLeftTree(Node **rootPtr){
  int bf;
  Node *node = *rootPtr;
  Node *child = node->left;
  if((bf = child->balanceFactor)==0){
    node->balanceFactor = -1;
    child->balanceFactor = 1;
                                    }
  else if((bf = child->balanceFactor)==-1){
    node->balanceFactor = 0;
    child->balanceFactor = 0;
                                          }
    *rootPtr = rotateRight(*rootPtr);
    return 0;
}

int avlBalanceRightTreeV1(Node **rootPtr){
  int bf;
  Node *node = *rootPtr;
  Node *child = node->right;
  Node *grandchild = node->right->left;
  if((bf = child->balanceFactor)==-1){
    if((bf = grandchild->balanceFactor)==-1){
      node->balanceFactor = 0;
      child->balanceFactor = 1;
      grandchild->balanceFactor = 0;
                                            }
    else if((bf = grandchild->balanceFactor)==0){
      node->balanceFactor = 0;
      child->balanceFactor = 0;
      grandchild->balanceFactor = 0;
                                                }
    else if((bf = grandchild->balanceFactor)==1){
      node->balanceFactor = -1;
      child->balanceFactor = 0;
      grandchild->balanceFactor = 0;
                                                }
      *rootPtr = rotateRightLeft(*rootPtr);
       return 0;
                                    }

  else if((bf = child->balanceFactor)==0){
    node->balanceFactor = 1;
    child->balanceFactor -= 1;
                                          }
  else if((bf = child->balanceFactor)==1){
    node->balanceFactor = 0;
    child->balanceFactor = 0;
                                          }
    *rootPtr = rotateLeft(*rootPtr);
     return 0;
}

int avlBalanceLeftTreeV1(Node **rootPtr){
  int bf;
  Node *node = *rootPtr;
  Node *child = node->left;
  Node *grandchild = node->left->right;
  if((bf = child->balanceFactor)==1){
    if((bf = grandchild->balanceFactor)==1){
      node->balanceFactor = 0;
      child->balanceFactor = -1;
      grandchild->balanceFactor = 0;
                                            }
    else if((bf = grandchild->balanceFactor)==0){
      node->balanceFactor = 0;
      child->balanceFactor = 0;
      grandchild->balanceFactor = 0;
                                                }
    else if((bf = grandchild->balanceFactor)==-1){
      node->balanceFactor = 1;
      child->balanceFactor = 0;
      grandchild->balanceFactor = 0;
                                                  }
     *rootPtr = rotateLeftRight(*rootPtr);
      return 0;
                                     }
  else if((bf = child->balanceFactor)==0){
    node->balanceFactor = -1;
    child->balanceFactor = 1;
                                          }
  else if((bf = child->balanceFactor)==-1){
    node->balanceFactor = 0;
    child->balanceFactor = 0;
                                          }
    *rootPtr = rotateRight(*rootPtr);
     return 0;
}
