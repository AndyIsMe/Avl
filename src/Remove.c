#include "Remove.h"
#include "stdio.h"
#include "stdlib.h"
#include "Rotate.h"

Node *getReplace(Node *rootPtr)
{
Node *temp;
Node *child = rootPtr->left;
  if(child != NULL)
  {
    if(child->left != NULL)
      getReplace(rootPtr->left);
      else
      {
        return child;
      }
    }
  else
    {
      temp = rootPtr;
      rootPtr = NULL;
      return temp;
    }
}
Node *RemoveN(Node **rootPtr, int nodeToRemove)
{
  int height;
  Node *RemoveN = avl_Remove(rootPtr,nodeToRemove, &height);
  return RemoveN;
}

Node *avl_Remove(Node **rootPtr, int nodeToRemove, int *height)
{
  //Node *Remove;
  if((*rootPtr) == NULL){
    //height = 1;
    return *rootPtr;
  }
      if(nodeToRemove < (*rootPtr)->data)
      {
        avl_Remove(&((*rootPtr)->left),nodeToRemove,height);
        if(*height == 1)
        {
          (*rootPtr)->balanceFactor += 1;
            if((*rootPtr)->balanceFactor != 0)
              *height = 0;
        }
        if((*rootPtr)->balanceFactor == -1)
        (*rootPtr)->balanceFactor +=1;
        if((*rootPtr)->balanceFactor >= 2)
          avlBalanceRightTreeV1(&(*rootPtr));
        else if((*rootPtr)->balanceFactor <= -2){
          avlBalanceLeftTreeV1(&(*rootPtr));
        }
        else
        {
          *rootPtr = *rootPtr;
        }
      }
      else if(nodeToRemove > (*rootPtr)->data)
      {
        avl_Remove(&((*rootPtr)->right),nodeToRemove,height);
        if(*height == 1)
        {
          (*rootPtr)->balanceFactor -= 1;
            if((*rootPtr)->balanceFactor != 0)
            *height = 0;
        }
        //if((*rootPtr)->balanceFactor == 1)
        //(*rootPtr)->balanceFactor -= 1;

      }
      else
      {
          /*  if(((*rootPtr)->left == NULL)||((*rootPtr)->right == NULL))
            {
              Node *Remove = (*rootPtr)->left ? (*rootPtr)->left :(*rootPtr)->right;
                if(Remove == NULL)
                {

                  Remove = *rootPtr;
                  *rootPtr = NULL;
                  //*height = 1;

                }
                else
                {
                    //*height = 1;
                  *rootPtr =  Remove;
                }
              }
            else
            {*/
              Node *Rgrandchild = (*rootPtr)->right;
              *height = 1;
              Node *Replacer = getReplace((*rootPtr)->right);
              Replacer->left = (*rootPtr)->left;
              Replacer->right = (*rootPtr)->right;
              //Near->balanceFactor = ((*rootPtr)->balanceFactor);
              if(Rgrandchild->right != 0)
              {
              Replacer->balanceFactor = ((*rootPtr)->balanceFactor);
              }
              else
              {
              Replacer->balanceFactor = ((*rootPtr)->balanceFactor) - 1;
              }
              *rootPtr = Replacer;
              if((*rootPtr)->balanceFactor >= 2)
                avlBalanceRightTreeV1(&(*rootPtr));
              else if((*rootPtr)->balanceFactor <= -2)
              {
                avlBalanceLeftTreeV1(&(*rootPtr));
              }
              else
              {
                *rootPtr = *rootPtr;
                //if((*rootPtr)->balanceFactor == 1)
                //(*rootPtr)->balanceFactor -= 1;
              }
            //}
      }
    if((*rootPtr)==NULL)
    {
      return *rootPtr;
    }
    return *rootPtr;
}

/*
Node *avl_Remove(Node **rootPtr, int nodeToRemove, int *height)
{
  //Node *Remove;
  if((*rootPtr) == NULL){
    //height = 1;
    return *rootPtr;
  }
      if(nodeToRemove < (*rootPtr)->data)
      {
        avl_Remove(&((*rootPtr)->left),nodeToRemove,height);
        if(*height == 1)
        {
          (*rootPtr)->balanceFactor += 1;
            if((*rootPtr)->balanceFactor != 0)
              *height = 0;
        }
        if((*rootPtr)->balanceFactor == -1)
        (*rootPtr)->balanceFactor +=1;
        if((*rootPtr)->balanceFactor >= 2)
          avlBalanceRightTreeV1(&(*rootPtr));
        else if((*rootPtr)->balanceFactor <= -2){
          avlBalanceLeftTreeV1(&(*rootPtr));
        }
        else
        {
          *rootPtr = *rootPtr;
        }
      }
      else if(nodeToRemove > (*rootPtr)->data)
      {
        avl_Remove(&((*rootPtr)->right),nodeToRemove,height);
        if(*height == 1)
        {
          (*rootPtr)->balanceFactor -= 1;
            if((*rootPtr)->balanceFactor != 0)
            *height = 0;
        }
        //if((*rootPtr)->balanceFactor == 1)
        //(*rootPtr)->balanceFactor -= 1;

      }
      else
      {
            if(((*rootPtr)->left == NULL)||((*rootPtr)->right == NULL))
            {
              Node *Remove = (*rootPtr)->left ? (*rootPtr)->left :(*rootPtr)->right;
                if(Remove == NULL)
                {

                  Remove = *rootPtr;
                  *rootPtr = NULL;
                  //*height = 1;

                }
                else
                {
                    //*height = 1;
                  *rootPtr =  Remove;
                }
              }
            else
            {
              Node *Rgrandchild = (*rootPtr)->right;
              *height = 1;
              Node *Near = Search((*rootPtr)->right);
              avl_Remove(&((*rootPtr)),Near->data,height);
              Near->left = (*rootPtr)->left;
              Near->right = (*rootPtr)->right;
              //Near->balanceFactor = ((*rootPtr)->balanceFactor);
              if(Rgrandchild->right != 0)
              {
              Near->balanceFactor = ((*rootPtr)->balanceFactor);
              }
              else
              {
              Near->balanceFactor = ((*rootPtr)->balanceFactor) - 1;
              }
              *rootPtr = Near;
              if((*rootPtr)->balanceFactor >= 2)
                avlBalanceRightTreeV1(&(*rootPtr));
              else if((*rootPtr)->balanceFactor <= -2){
                avlBalanceLeftTreeV1(&(*rootPtr));
              }
              else
              {
                *rootPtr = *rootPtr;
                //if((*rootPtr)->balanceFactor == 1)
                //(*rootPtr)->balanceFactor -= 1;
              }
            }
      }
    if((*rootPtr)==NULL)
    {
      return *rootPtr;
    }
    return *rootPtr;
}
*/
