#include "Remove.h"
#include "stdio.h"
#include "stdlib.h"
#include "Rotate.h"

Node *Search(Node *rootPtr){
Node *child = rootPtr;

while(child->left != NULL)
child = child->left;
return child;
}


Node *avl_Remove(Node **rootPtr, int nodeToRemove){
  Node *Rchild = (*rootPtr)->right;
  Node *Lchild = (*rootPtr)->left;
  Node *Remove;
  Node *Nearest;
  if((*rootPtr)->data == nodeToRemove){
    Remove = (*rootPtr);
    if(Remove->right != NULL){
      Nearest = Search(Remove->right);
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
      Nearest = Search((*rootPtr)->right);
      avl_Remove(&Remove,Nearest->data);
      (*rootPtr)->left = Nearest;
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
      avl_Remove(&((*rootPtr)->right),Nearest->data);
      (*rootPtr)->left = Nearest;
      /*if(Remove->right != Nearest){
      Nearest->left = Remove->left;
      Nearest->right = Remove->right;
    }*/
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
}
