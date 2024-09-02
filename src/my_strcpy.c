#include "my_string.h"

char *my_strcpy(char *_dest, const char *_src) {

  int i = 0;
  do {
    *(_dest + i) = *(_src + i);
    i++;
  } while (*(_src + i));

  return _dest;
}