#include "my_string.h"

char *my_strncpy(char *_dest, const char *_src, my_size_t n) {

  my_size_t n_fact = my_strlen(_src);

  if (n_fact < n) {
    n = n_fact;
  }

  for (my_size_t i = 0; i < n; i++) {
    _dest[i] = _src[i];
  }
  return _dest;
}