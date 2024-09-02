#include "my_string.h"

my_size_t my_strlen(const char *_str) {

  const char *p = my_NULL;
  my_size_t strlen = 0;

  p = _str;

  while (*p) {
    p++;
    strlen++;
  }

  return strlen;
}