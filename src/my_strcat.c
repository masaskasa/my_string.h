#include "my_string.h"

char *my_strcat(char *_dest, const char *_src) {

  char *p_dest = _dest;

  my_size_t n = my_strlen(_src);

  while (*p_dest++)
    ;

  for (my_size_t i = 0; i < n; i++) {
    *(p_dest + i) = *(_src + i);
  }

  *(p_dest + n) = '\0';

  return _dest;
}