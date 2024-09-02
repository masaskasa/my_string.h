#include "my_string.h"

char *my_strtok(char *_str, const char *_delim) {

  static my_size_t first_call = 0;

  static my_size_t shift = 0;
  static my_size_t first_shift = 0;
  static char *result = my_NULL;

  if (_str != my_NULL) {
    first_call = 1;
  } else {
    first_call = 0;
  }

  if (first_call) {

    if (!*_str) {
      return my_NULL;
    }

    if (!*_delim) {
      return _str;
    }

    shift = 0;
    result = my_NULL;

    my_size_t i = 0;

    while (1) {
      while (_delim[i]) {
        if (_str[shift] == _delim[i]) {
          shift++;
          first_shift++;
          i = 0;
          break;
        }
        i++;
      }
      if (_str[shift] != _delim[i]) {
        i = 0;
        break;
      }
    }

    while (_str[shift]) {
      while (_delim[i]) {
        if (_str[shift] == _delim[i]) {
          _str[shift] = '\0';
          result = _str + first_shift;
          shift++;
          return result;
        }
        i++;
      }
      i = 0;
      shift++;
    }
  }

  if (!first_call) {
    if (!*result) {
      return my_NULL;
    }

    _str = result + shift;
    result = result + shift;

    shift = 0;
    my_size_t i = 0;

    while (1) {
      while (_delim[i]) {
        if (_str[shift] == _delim[i]) {
          shift++;
          result++;
          i = 0;
          break;
        }
        i++;
      }
      if (!_delim[i]) {
        i = 0;
        break;
      }
    }

    while (_str[shift]) {
      while (_delim[i]) {
        if (_str[shift] == _delim[i]) {
          _str[shift] = '\0';
          shift++;
          return result;
        }
        i++;
      }
      i = 0;
      shift++;
    }
    return result;
  }
  return result;
}