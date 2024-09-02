#include "my_string.h"

int my_memcmp(const void *_str1, const void *_str2, my_size_t n) {

  char *c_str1 = my_NULL;
  char *c_str2 = my_NULL;

  c_str1 = (char *)_str1;
  c_str2 = (char *)_str2;

  for (my_size_t i = 0; i < n; i++) {
    if (c_str1[i] != c_str2[i])
      return c_str1[i] - c_str2[i];
  }

  return 0;
}