#include "my_string.h"

int my_strcmp(const char *_str1, const char *_str2) {

  const char *p1 = _str1;
  const char *p2 = _str2;

  while (*p1 || *p2) {
    if (*p1 != *p2) {
      return *p1 - *p2;
    }
    p1++;
    p2++;
  }

  return 0;
}