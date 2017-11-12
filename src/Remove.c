#include "Remove.h"
#include "stdio.h"
#include "stdlib.h"
#include "Rotate.h"

Node *Search(Node *rootPtr)
{
Node *child = rootPtr->left;
printf("child%d\n",child );
  if(child != NULL)
  {
    if(child->left != NULL)
      Search(rootPtr->left);
      else
      {
  //printf("val %d\n",child);
        return child;
      }
    }
  else
    {
      return rootPtr;
    }
}

Node *avl_Remove(Node **rootPtr, int nodeToRemove){
  Node *Remove;
  if((*rootPtr) == NULL)
    return *rootPtr;
      if(nodeToRemove < (*rootPtr)->data)
      {
        (*rootPtr)->left = avl_Remove(&((*rootPtr)->left),nodeToRemove);
        (*rootPtr)->balanceFactor += 1;
      }
      else if(nodeToRemove > (*rootPtr)->data)
      {
        (*rootPtr)->right = avl_Remove(&((*rootPtr)->right),nodeToRemove);
        (*rootPtr)->balanceFactor -= 1;
      }
      else
      {
            if(((*rootPtr)->left == NULL)||((*rootPtr)->right == NULL))
            {
              Remove = (*rootPtr)->left ? (*rootPtr)->left :(*rootPtr)->right;
                if(Remove == NULL)
                {
                  Remove = *rootPtr;
                  *rootPtr = NULL;
                }
                else
                  *rootPtr =  Remove;

              }
            else
            {
              Remove = Search((*rootPtr)->right);
              (*rootPtr)->right = avl_Remove(&((*rootPtr)->right),Remove->data);
              Remove->left = (*rootPtr)->left;
              Remove->right = (*rootPtr)->right;
              Remove->balanceFactor = ((*rootPtr)->balanceFactor);
              *rootPtr = Remove;
            }
      }
    if((*rootPtr)==NULL)
    {
      return *rootPtr;
    }
    if((*rootPtr)->balanceFactor >= 2)
      avlBalanceRightTreeV1(&(*rootPtr));
    else if((*rootPtr)->balanceFactor <= -2)
      avlBalanceLeftTreeV1(&(*rootPtr));
    else
    {
      *rootPtr = *rootPtr;
    }
    return *rootPtr;
}
