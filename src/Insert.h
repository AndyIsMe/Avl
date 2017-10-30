#ifndef _INSERT_H
#define _INSERT_H
#include "Node.h"
#include "Rotate.h"

//Node createNode(int node);
Node *avl_Insert(Node **rootPtr, Node *nodeToAdd);
int avlBalanceRightTree(Node **rootPtr);
int avlBalanceLeftTree(Node **rootPtr);
int avlBalanceRightTreeV1(Node **rootPtr);
int avlBalanceLeftTreeV1(Node **rootPtr);

#endif // _INSERT_H
