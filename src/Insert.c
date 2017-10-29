#include "Insert.h"
#include "stdio.h"
#include "stdlib.h"



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
