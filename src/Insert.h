#ifndef _INSERT_H
#define _INSERT_H
#include "Node.h"
#include "Rotate.h"
#include "AvlInteger.h"

//Node createNode(int node);
typedef int(*compare)(void *data,Node *refdata);

#define avlAddInteger(rootPtr,nodeToAdd) avl_Insert(rootPtr,nodeToAdd , (Compare)IntCompare)
#define avlAddString(rootPtr,nodeToAdd) avl_Insert(rootPtr,nodeToAdd , (Compare)compareString)
int avl_Insert(Node **rootPtr, Node *nodeToAdd,Compare IntCompare);

#endif // _INSERT_H
