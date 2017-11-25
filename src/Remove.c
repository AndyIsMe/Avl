#include "Remove.h"
#include "stdio.h"
#include "stdlib.h"
#include "Rotate.h"

Node *Search(Node *rootPtr)
{
Node *child = rootPtr->left;
  if(child != NULL)
  {
    if(child->left != NULL)
      Search(rootPtr->left);
      else
      {
        return child;/*
        if(child->right == NULL)
        {
          return child;
        }
        else
        {

          child->balanceFactor -= 1;
          return child;
        }*/
      }
    }
  else
    {
      return rootPtr;
    }
}

Node *avl_Remove(Node **rootPtr, int nodeToRemove, int height)
{
  Node *Remove;
  if((*rootPtr) == NULL){
    //height = 1;
    return height;
  }
      if(nodeToRemove < (*rootPtr)->data)
      {
        avl_Remove(&((*rootPtr)->left),nodeToRemove,height);
        if(height == 1)
        {
        (*rootPtr)->balanceFactor += 1;
        if((*rootPtr)->balanceFactor != 0)
          height = 0;
        }
      }
      else if(nodeToRemove > (*rootPtr)->data)
      {
        avl_Remove(&((*rootPtr)->right),nodeToRemove,height);
        if(height == 1)
        {
        (*rootPtr)->balanceFactor -= 1;
        if((*rootPtr)->balanceFactor != 0)
          height = 0;
        }
      }
      else
      {
            if(((*rootPtr)->left == NULL)||((*rootPtr)->right == NULL))
            {
              Remove = (*rootPtr)->left ? (*rootPtr)->left :(*rootPtr)->right;
                if(Remove == NULL)
                {
                  //height = 1;
                  Remove = *rootPtr;
                  *rootPtr = NULL;
                }
                else
                {
                    //height = 1;
                  *rootPtr =  Remove;
                }
              }
            else
            {
              height = 1;
              Remove = Search((*rootPtr)->right);
              avl_Remove(&((*rootPtr)),Remove->data,height);
              Remove->left = (*rootPtr)->left;
              Remove->right = (*rootPtr)->right;
              Remove->balanceFactor = ((*rootPtr)->balanceFactor);
              *rootPtr = Remove;
              if((*rootPtr)->balanceFactor >= 2)
                avlBalanceRightTreeV1(&(*rootPtr));
              else if((*rootPtr)->balanceFactor <= -2){
                printf("height : %d\n",height);
                printf("balance factor : %d\n",(*rootPtr)->balanceFactor);
                avlBalanceLeftTreeV1(&(*rootPtr));
                printf("balance factor : %d\n",(*rootPtr)->balanceFactor);
              }
              else
              {
                *rootPtr = *rootPtr;
              }
            }
      }
    if((*rootPtr)==NULL)
    {
      return height;
    }
    return height;
}
