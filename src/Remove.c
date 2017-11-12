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
      (*rootPtr)->left = Remove->left;
      (*rootPtr)->right = Remove->right;
      *rootPtr = Remove;
    }
  }
    return *rootPtr;
}


/*
Node *avl_Remove(Node **rootPtr, int nodeToRemove){
  Node *Rchild = (*rootPtr)->right;
  Node *Lchild = (*rootPtr)->left;
  Node *Remove;
  Node *Nearest;
  if((*rootPtr)->data == nodeToRemove){
    Remove = (*rootPtr);
    if(Remove->right != NULL){
      Nearest = Search(Remove->right);
      *rootPtr = Nearest;
    }
    else {
      *rootPtr = NULL;
      Nearest->left = Remove->left;
      Nearest->right = Remove->right;
    }
  }
  else if((*rootPtr)->left != NULL){
    if(Lchild->data == nodeToRemove){
      Remove = (*rootPtr)->left;
    if(Remove->right != NULL){
      printf("address %d\n",Remove->right );
      Nearest = Search(Remove->right);
      (*rootPtr)->left = Nearest;
      printf("root left %d\n",(*rootPtr)->left->left );
      printf("data %d\n",&(Remove->right));
      avl_Remove(&((*rootPtr)->right),Nearest->data);

      if(Remove->right != Nearest){
      Nearest->left = Remove->left;
      Nearest->right = Remove->right;
    }
  }
    else{
      (*rootPtr)->left = NULL;
    }
  }
}
  else if((*rootPtr)->right != NULL){
    if(Rchild->data == nodeToRemove){
      Remove = (*rootPtr)->right;
    if(Remove->right !=NULL){
      Nearest = Search(Remove->right);
      //avl_Remove(&((*rootPtr)->right),Nearest->data);
      (*rootPtr)->left = Nearest;
      /*if(Remove->right != Nearest){
      Nearest->left = Remove->left;
      Nearest->right = Remove->right;
    }
    }
    else{
      (*rootPtr)->right = NULL;
    }
  }
}
  else if(nodeToRemove < (*rootPtr)->data){
    avl_Remove(&(*rootPtr)->left,nodeToRemove);
  }
  else if(nodeToRemove > (*rootPtr)->data){
    avl_Remove(&(*rootPtr)->right,nodeToRemove);
  }
  return *rootPtr;
}*/
