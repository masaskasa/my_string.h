#include "my_string.h"

void *my_memmove(void *_dest, const void *_src, my_size_t n) {

  if (_dest == my_NULL && _src == my_NULL) {
    return my_NULL;
  }

  char *c_dest = my_NULL;
  char *c_src = my_NULL;
  char *tmp = malloc(n);

  c_dest = (char *)_dest;
  c_src = (char *)_src;

  for (my_size_t i = 0; i < n; i++) {
    tmp[i] = c_src[i];
  }

  for (my_size_t i = 0; i < n; i++) {
    c_dest[i] = tmp[i];
  }

  free(tmp);

  return (void *)c_dest;
}