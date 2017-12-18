#include "AvlString.h"
#include <string.h>

int compareString(char *str,StringNode *strRef){
  return strcmp(str,(strRef)->str);
}
