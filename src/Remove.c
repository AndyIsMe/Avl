#include "Remove.h"
#include "stdio.h"
#include "stdlib.h"
#include "Rotate.h"

Node *Search(Node *rootPtr){
Node *child = rootPtr->left;
printf("child%d\n",child );
if(child != NULL){
if(child->left != NULL)
Search(rootPtr->left);
else{
  //printf("val %d\n",child);
  return child;
}
}
else{
  printf("val %d\n",rootPtr);
return rootPtr;
}
}

Node *avl_Remove(Node **rootPtr, int nodeToRemove){
  Node *Remove;
  //Node *Nearest;
  if((*rootPtr) == NULL)
    return *rootPtr;
    if(nodeToRemove < (*rootPtr)->data)
      (*rootPtr)->left = avl_Remove(&((*rootPtr)->left),nodeToRemove);

    else if(nodeToRemove > (*rootPtr)->data)
      (*rootPtr)->right = avl_Remove(&((*rootPtr)->right),nodeToRemove);

    else{
      printf("root = %d\n",nodeToRemove );
      if(((*rootPtr)->left == NULL)||((*rootPtr)->right == NULL)){
        Remove = (*rootPtr)->left ? (*rootPtr)->left :(*rootPtr)->right;
        if(Remove == NULL){
          Remove = *rootPtr;
          *rootPtr = NULL;
      }
        else {
          *rootPtr =  Remove;
      }
    }
      else{
      Remove = Search((*rootPtr)->right);
      (*rootPtr)->right = avl_Remove(&((*rootPtr)->right),Remove->data);
       Remove->left = (*rootPtr)->left;
       //Remove->balanceFactor =  (*rootPtr)->balanceFactor;
       Remove->right = (*rootPtr)->right;
      *rootPtr = Remove;
    }
  }
    return *rootPtr;
}
