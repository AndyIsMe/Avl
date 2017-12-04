#include "AvlInteger.h"

int IntCompare(int data,Node *refNode)
{
  if(data < refNode->data)
  {
  return 1;
}
  else if(data > refNode->data)
  {
  return -1;
}
  else
  return 0;
}
