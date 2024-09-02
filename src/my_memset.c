#include "my_string.h"

void *my_memset(void *_dest, int c, my_size_t n) {

  char *c_dest = my_NULL;

  c_dest = (char *)_dest;

  for (my_size_t i = 0; i < n; i++) {
    c_dest[i] = c;
  }

  return (void *)c_dest;
}