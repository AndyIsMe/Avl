#ifndef _REMOVE_H
#define _REMOVE_H
#include "Node.h"
#include "Rotate.h"

Node *avl_Remove(Node **rootPtr, int nodeToRemove, int *height);
Node *RemoveN(Node **rootPtr, int nodeToRemove);
//Node *avl_Remove(Node **rootPtr, int nodeToRemove);
//Node *Search(Node *rootPtr);
Node *getReplace(Node *rootPtr);
#endif // _REMOVE_H
