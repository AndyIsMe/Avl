#ifndef _NODEHELPER_H
#define _NODEHELPER_H
#include "Node.h"

Node node1 ,node5, node10,node15, node20, node25, node30, node35, node40;
Node node45, node50, node55, node60, node65, node70, node75, node80;
Node node85, node90, node95, node100;
StringNode nodeAndy , nodeThengChun , nodeRex , nodeJstan,nodeAlexander;

void initNode (Node *node, Node *left, Node *right, int bf);
void initNodeString(StringNode *str,StringNode *left,StringNode *right,int bf);
void giveInitdata(void);
void giveInitStrdata(void);

#endif // _NODEHELPER_H
