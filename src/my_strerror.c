#include "my_string.h"
#include <stdio.h>

char *my_strerror(int _errnum) {

  ERRORS;

  static char unknown_error[30] = {0};
  char c_errnum[15] = {0};

  if (_errnum < 134) {
    return errors[_errnum];
  }

  else {
    for (my_size_t i = 0; i < 14; i++) {
      unknown_error[i] = errors[134][i];
    }

    snprintf(c_errnum, sizeof(c_errnum), "%d", _errnum);

    my_size_t i = 14;

    while (c_errnum[i - 14]) {
      unknown_error[i] = c_errnum[i - 14];
      i++;
    }
    return unknown_error;
  }
}