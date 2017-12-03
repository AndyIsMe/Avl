#include "Remove.h"
#include "stdio.h"
#include "stdlib.h"
#include "Rotate.h"

Node *getReplace(Node **rootPtr,int *heightstatus)
{
Node *temp;
Node *child = (*rootPtr)->left;
  if(child != NULL)
  {
    if(child->left != NULL)
      getReplace(&(*rootPtr)->left,heightstatus);
      else
      {
        if(child->right != NULL)
        {
          (*rootPtr)->left = child->right;
          (*rootPtr)->balanceFactor++;
          child->right = NULL;
          *heightstatus = 1;
        }
        else
        {
          (*rootPtr)->left = NULL;
          (*rootPtr)->balanceFactor++;
          if((*rootPtr)->balanceFactor >= 2)
            avlBalanceRightTreeV1(&(*rootPtr));
          else if((*rootPtr)->balanceFactor <= -2)
            avlBalanceLeftTreeV1(&(*rootPtr));
          else{
            *rootPtr = *rootPtr;
          }
          if((*rootPtr)->balanceFactor !=0)
          *heightstatus = 0;
          else
          *heightstatus = 1;
        }
        return child;
      }
    }
  else
    {
      temp = *rootPtr;
      *rootPtr = NULL;
      *heightstatus = 1;
      return temp;
    }
}

Node *RemoveN(Node **rootPtr, int nodeToRemove)
{
  int heightstatus;
  Node *RemoveN = avl_Remove(rootPtr,nodeToRemove, &heightstatus);
  return RemoveN;
}

Node *avl_Remove(Node **rootPtr, int nodeToRemove, int *heightstatus)
{
  if((*rootPtr) == NULL){
    return *rootPtr;
  }
      if(nodeToRemove < (*rootPtr)->data)
      {
        avl_Remove(&((*rootPtr)->left),nodeToRemove,heightstatus);
        if(*heightstatus == 1)
        {
          (*rootPtr)->balanceFactor += 1;
            if((*rootPtr)->balanceFactor != 0)
            *heightstatus = 0;
        }
      }
      else if(nodeToRemove > (*rootPtr)->data)
      {
        avl_Remove(&((*rootPtr)->right),nodeToRemove,heightstatus);
        if(*heightstatus == 1)
        {
          (*rootPtr)->balanceFactor = 1;
            if((*rootPtr)->balanceFactor != 0)
            *heightstatus = 0;
        }
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
                  //*heightstatus = 1;

                }
                else
                {
                  //*heightstatus = 1;
                  *rootPtr =  Remove;
                }
              }
            else
            {
              Node *Replacer = getReplace(&(*rootPtr)->right,heightstatus);
              if(*heightstatus == 1)
              {
                (*rootPtr)->balanceFactor--;
                if((*rootPtr)->balanceFactor !=0)
                heightstatus = 0;
              }
              else
              (*rootPtr)->balanceFactor=(*rootPtr)->balanceFactor;
                if(Replacer->right != NULL)
                {
                    Replacer->left = (*rootPtr)->left;
                    Replacer->balanceFactor = (*rootPtr)->balanceFactor;
                    *rootPtr = Replacer;
                }
                else
                {
                  Replacer->right = (*rootPtr)->right;
                  Replacer->left = (*rootPtr)->left;
                  Replacer->balanceFactor = (*rootPtr)->balanceFactor;
                  *rootPtr = Replacer;
                }
            }
          }
    if((*rootPtr)==NULL)
    {
      return *rootPtr;
    }
    if((*rootPtr)->balanceFactor >= 2)
      avlBalanceRightTreeV1(&(*rootPtr));
    else if((*rootPtr)->balanceFactor <= -2){
      avlBalanceLeftTreeV1(&(*rootPtr));
    }
    else
    {
      *rootPtr = *rootPtr;
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
