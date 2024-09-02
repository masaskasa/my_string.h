#include "my_string.h"

char *my_strpbrk(const char *_str1, const char *_str2) {

  if (_str1 == my_NULL || _str2 == my_NULL) {
    return my_NULL;
  }

  my_size_t n1 = my_strlen(_str1);
  my_size_t n2 = my_strlen(_str2);

  if (!n2) {
    return my_NULL;
  }

  for (my_size_t i = 0; i < n1; i++) {
    for (my_size_t j = 0; j < n2; j++) {
      if (_str1[i] == _str2[j]) {
        return (char *)_str1 + i;
      }
    }
  }
  return my_NULL;
}