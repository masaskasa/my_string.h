#include "my_string.h"

char *my_strrchr(const char *_str, int c) {

  if (_str == my_NULL || _str[0] == '\0') {
    return my_NULL;
  }

  char *p = my_NULL;
  p = (char *)_str;

  my_size_t n = 0;

  while (*p) {
    p++;
    n++;
  }

  for (my_size_t i = 1; i < n; i++) {
    if (*(p - i) == c) {
      p = p - i;
      return p;
    }
  }

  return my_NULL;
}