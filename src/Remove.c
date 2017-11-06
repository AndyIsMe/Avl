#include "Remove.h"
#include "stdio.h"
#include "stdlib.h"
#include "Rotate.h"

Node *Search(Node **rootPtr){
  if(*rootPtr->left == NULL){
    Search((&(*rootPtr)->left));
  }
}

Node *avl_Remove(Node **rootPtr, Node *nodeToRemove){
  if(*rootPtr == NULL){
    *rootPtr = nodeToRemove;
    (*rootPtr)->left = NULL;
    (*rootPtr)->right = NULL;
  }
  else{
    if((*rootPtr)->left->data == nodeToRemove->data){
      (*rootPtr)->left = avl_Remove((&(*rootPtr)->left),nodeToRemove);
      (*rootPtr)->balanceFactor += 1;
    }
    else if((*rootPtr)->right->data == nodeToRemove->data) {
      (*rootPtr)->right = avl_Remove((&(*rootPtr)->right),nodeToRemove);
      (*rootPtr)->balanceFactor -= 1;
    }
  }
  if((*rootPtr)->balanceFactor >= 2)
    avlBalanceRightTreeV1(&(*rootPtr));
  else if((*rootPtr)->balanceFactor <= -2)
    avlBalanceLeftTreeV1(&(*rootPtr));
  else{
    *rootPtr = *rootPtr;
  }
  return *rootPtr;
}
