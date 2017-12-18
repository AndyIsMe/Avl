#ifndef _REMOVE_H
#define _REMOVE_H
#include "Node.h"
#include "Rotate.h"
#include "AvlInteger.h"
#include "AvlString.h"

#define avlRemoveString(rootPtr,nodeToRemove) RemoveN((Node **)rootPtr,(char *)nodeToRemove,(Compare) compareString)
#define avlRemoveInteger(rootPtr,nodeToRemove) RemoveN(rootPtr,nodeToRemove,(Compare) IntCompare)
Node *avl_Remove(Node **rootPtr, int nodeToRemove, int *heightstatus,Compare compareFunc);
//Node *avl_Remove(Node **rootPtr, int nodeToRemove, int *heightstatus);
Node *RemoveN(Node **rootPtr, int nodeToRemove,Compare compareFunc);
//Node *avl_Remove(Node **rootPtr, int nodeToRemove);
//Node *Search(Node *rootPtr);
Node *getReplace(Node **rootPtr,int *heightstatus);
#endif // _REMOVE_H
