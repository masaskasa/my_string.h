#include "my_string.h"

void *my_memchr(const void *_str, int c, my_size_t n) {

  char *p = my_NULL;
  char *c_str = my_NULL;

  c_str = (char *)_str;

  for (my_size_t i = 0; i < n; i++) {
    if (c_str[i] == c) {
      p = c_str + i;
      return (void *)p;
    }
  }
  return (void *)p;
}