#ifndef _AVLINTEGER_H
#define _AVLINTEGER_H
#include "Node.h"
typedef int(*Compare)(void *data,Node *refNode);
int IntCompare(int data,Node *refNode);
#endif // _AVLINTEGER_H
