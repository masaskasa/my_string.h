#include "my_string.h"

char *my_strchr(const char *_str, int c) {

  if (_str == my_NULL || _str[0] == '\0') {
    return my_NULL;
  }

  char *p = my_NULL;
  p = (char *)_str;

  while (*p) {
    if (*p == c) {
      return p;
    }
    p++;
  }

  return my_NULL;
}