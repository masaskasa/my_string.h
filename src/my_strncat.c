#include "my_string.h"

char *my_strncat(char *_dest, const char *_src, my_size_t n) {

  char *p_dest = _dest;

  my_size_t n_fact = my_strlen(_src);

  if (n_fact < n) {
    n = n_fact;
  }

  if (*_dest == '\0') {
    for (my_size_t i = 0; i < n; i++) {
      *(_dest + i) = *(_src + i);
    }

    *(_dest + n) = '\0';
  } else {

    while (*p_dest) {
      p_dest++;
    }

    for (my_size_t i = 0; i < n; i++) {
      *(p_dest + i) = *(_src + i);
    }

    *(p_dest + n) = '\0';
  }

  return _dest;
}