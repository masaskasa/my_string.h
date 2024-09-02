#include "my_string.h"

my_size_t my_strspn(const char *_str1, const char *_str2) {

  my_size_t n1 = my_strlen(_str1);
  my_size_t n2 = my_strlen(_str2);
  my_size_t n_seg = 0;
  my_size_t temp = 0;

  if (!n2) {
    return 0;
  }

  for (my_size_t i = 0; i < n1; i++) {
    for (my_size_t j = 0; j < n2; j++) {
      if (_str1[i] == _str2[j]) {
        temp++;
      }
    }
    if (temp) {
      n_seg++;
    } else if (!temp) {
      return n_seg;
    }
    temp = 0;
  }
  return n_seg;
}