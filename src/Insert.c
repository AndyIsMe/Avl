#include "Insert.h"
#include "stdio.h"
#include "stdlib.h"
#include "Rotate.h"


int avl_Insert(Node **rootPtr, Node *nodeToAdd){
  int height;
    if(*rootPtr == NULL){
      *rootPtr = nodeToAdd;
      (*rootPtr)->left = NULL;
      (*rootPtr)->right = NULL;
      return height = 1;
                        }
    else{
      if((*rootPtr)->data > nodeToAdd->data){
        height = avl_Insert((&(*rootPtr)->left),nodeToAdd);
        if(height == 1){
        //(*rootPtr)->left = avl_Insert((&(*rootPtr)->left),nodeToAdd);
        (*rootPtr)->balanceFactor -= 1;
          if((*rootPtr)->balanceFactor == 0)
            height = 0;
        }
        else{
          (*rootPtr)->balanceFactor = (*rootPtr)->balanceFactor;
        }
                                            }
      else if((*rootPtr)->data < nodeToAdd->data){
        height = avl_Insert((&(*rootPtr)->right),nodeToAdd);
        if(height == 1){
        //(*rootPtr)->right = avl_Insert((&(*rootPtr)->right),nodeToAdd);
        (*rootPtr)->balanceFactor += 1;
          if((*rootPtr)->balanceFactor == 0)
            height = 0;
        }
        else
          (*rootPtr)->balanceFactor = (*rootPtr)->balanceFactor;
                                                  }
        }
      if((*rootPtr)->balanceFactor >= 2)
        avlBalanceRightTreeV1(&(*rootPtr));
      else if((*rootPtr)->balanceFactor <= -2)
        avlBalanceLeftTreeV1(&(*rootPtr));
      else{
        *rootPtr = *rootPtr;
      }
      return height;
}
