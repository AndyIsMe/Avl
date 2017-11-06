#include "Insert.h"
#include "stdio.h"
#include "stdlib.h"
#include "Rotate.h"


Node *avl_Insert(Node **rootPtr, Node *nodeToAdd){
    if(*rootPtr == NULL){
      *rootPtr = nodeToAdd;
      (*rootPtr)->left = NULL;
      (*rootPtr)->right = NULL;

                        }
    else{
      if((*rootPtr)->data > nodeToAdd->data){
        (*rootPtr)->left = avl_Insert((&(*rootPtr)->left),nodeToAdd);
        (*rootPtr)->balanceFactor -= 1;
                                            }
      else if((*rootPtr)->data < nodeToAdd->data){
        (*rootPtr)->right = avl_Insert((&(*rootPtr)->right),nodeToAdd);
        (*rootPtr)->balanceFactor += 1;
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
