#include "my_string.h"

int my_strncmp(const char *_str1, const char *_str2, my_size_t n) {

  for (my_size_t i = 0; i < n; i++) {
    if (_str1[i] != _str2[i]) {
      return _str1[i] - _str2[i];
    }
  }

  return 0;
}