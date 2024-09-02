#include "my_string.h"

char *my_strstr(const char *_haystack, const char *_needle) {

  char *p = (char *)_haystack;

  if (_haystack == my_NULL) {
    return my_NULL;
  }

  if (_needle == my_NULL || !*_needle) {
    return p;
  }

  while (*p) {
    while (*p != *_needle && *p) {
      p++;
    }

    my_size_t i = 0;

    while (_needle[i]) {
      if (p[i] != _needle[i]) {
        p++;
        i = 0;
        break;
      }
      i++;
    }

    if (!_needle[i]) {
      return p;
    }
  }

  if (!*p) {
    return my_NULL;
  }

  return p;
}