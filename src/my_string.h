#ifndef _MYSTRING_H
#define _MYSTRING_H

#include <stdlib.h>

/*Analogue of the NULL*/
#define my_NULL ((void *)0)

/*Analogue of the size_t*/
typedef unsigned int my_size_t;

/*Analogue of the strlen: return the length of _str

_str: pointer to string*/
my_size_t my_strlen(const char *_str);

/*Analogue of the memcmp: if memory areas _str* of size n equal return 0 else
return difference of different bytes

_str1: pointer to first memory area
_str2: pointer to second memory area
n: number of bytes*/
int my_memcmp(const void *_str1, const void *_str2, my_size_t n);

/*Analogue of the memchr: return pointer to c in memory area _str of size n

_str: pointer to memory area
c: the search item
n: number of bytes*/
void *my_memchr(const void *_str, int c, my_size_t n);

/*Analogue of the memcpy: return pointer to _dest

_dest: pointer to memory where copy n bytes
_src: pointer to memory from where copy n bytes
n: number of bytes*/
void *my_memcpy(void *_dest, const void *_src, my_size_t n);

/*Analogue of the memmove: return pointer to _dest

_dest: pointer to memory where copy n bytes
_src: pointer to memory from where copy n bytes
n: number of bytes*/
void *my_memmove(void *_dest, const void *_src, my_size_t n);

/*Analogue of the memset: return pointer to _dest

_dest: pointer to memory where set n bytes of c
c: the copy item
n: number of bytes*/
void *my_memset(void *_dest, int c, my_size_t n);

/*Analogue of the strchr: return pointer to c in string _str

_str: pointer to string
c: the search item*/
char *my_strchr(const char *_str, int c);

/*Analogue of the strcmp: if strings _str* equal return 0 else
return difference of different bytes

_str1: pointer to first string
_str2: pointer to second string*/
int my_strcmp(const char *_str1, const char *_str2);

/*Analogue of the strncmp: if n bytes of strings _str* equal return 0 else
return difference of different bytes

_str1: pointer to first string
_str2: pointer to second string
n: number of bytes*/
int my_strncmp(const char *_str1, const char *_str2, my_size_t n);

/*Analogue of the strcpy: return pointer to _dest

_dest: pointer to string where copy
_src: pointer to string from where copy*/
char *my_strcpy(char *_dest, const char *_src);

/*Analogue of the strcat: return pointer to _dest

_dest: pointer to string where copy
_src: pointer to string from where copy*/
char *my_strcat(char *_dest, const char *_src);

/*Analogue of the strncat: return pointer to _dest

_dest: pointer to string where copy n bytes
_src: pointer to string from where copy n bytes
n: number of bytes*/
char *my_strncat(char *_dest, const char *_src, my_size_t n);

/*Analogue of the strncpy: return pointer to _dest

_dest: pointer to string where copy n bytes
_src: pointer to string from where copy n bytes
n: number of bytes*/
char *my_strncpy(char *_dest, const char *_src, my_size_t n);

/*Analogue of the strcspn: return lengh of segment of _str1 that does not
including symbols of _str2

_str1: pointer to first string
_str2: pointer to second string*/
my_size_t my_strcspn(const char *_str1, const char *_str2);

/*Analogue of the strrchr: return pointer to c in string _str

_str: pointer to string
c: the search item*/
char *my_strrchr(const char *str, int c);

/*Analogue of the strpbrk: return pointer to first symbol in _str1 that equal
any symbol of _str2

_str1: pointer to first string
_str2: pointer to second string*/
char *my_strpbrk(const char *_str1, const char *_str2);

/*Analogue of the strtok: return pointers to tokens in _str that separate by
_delim

_str: pointer to string
_delim: pointer to string that include dividing symbols*/
char *my_strtok(char *_str, const char *_delim);

/*Analogue of the strerror: return message of error of number _errnum

_errnum: number of error*/
char *my_strerror(int _errnum);

/*Analogue of the strcspn: return lengh of segment of _str1 that including
symbols of _str2

_str1: pointer to first string
_str2: pointer to second string*/
my_size_t my_strspn(const char *_str1, const char *_str2);

/*Analogue of the strstr: return pointer to _needle in _haystack

_haystack: pointer to string
_needle: the search string*/
char *my_strstr(const char *_haystack, const char *_needle);

/*List of Linux errors for my_strerror*/
#define ERRORS                                                                 \
  char *errors[] = {"Success",                                                 \
                    "Operation not permitted",                                 \
                    "No such file or directory",                               \
                    "No such process",                                         \
                    "Interrupted system call",                                 \
                    "Input/output error",                                      \
                    "No such device or address",                               \
                    "Argument list too long",                                  \
                    "Exec format error",                                       \
                    "Bad file descriptor",                                     \
                    "No child processes",                                      \
                    "Resource temporarily unavailable",                        \
                    "Cannot allocate memory",                                  \
                    "Permission denied",                                       \
                    "Bad address",                                             \
                    "Block device required",                                   \
                    "Device or resource busy",                                 \
                    "File exists",                                             \
                    "Invalid cross-device link",                               \
                    "No such device",                                          \
                    "Not a directory",                                         \
                    "Is a directory",                                          \
                    "Invalid argument",                                        \
                    "Too many open files in system",                           \
                    "Too many open files",                                     \
                    "Inappropriate ioctl for device",                          \
                    "Text file busy",                                          \
                    "File too large",                                          \
                    "No space left on device",                                 \
                    "Illegal seek",                                            \
                    "Read-only file system",                                   \
                    "Too many links",                                          \
                    "Broken pipe",                                             \
                    "Numerical argument out of domain",                        \
                    "Numerical result out of range",                           \
                    "Resource deadlock avoided",                               \
                    "File name too long",                                      \
                    "No locks available",                                      \
                    "Function not implemented",                                \
                    "Directory not empty",                                     \
                    "Too many levels of symbolic links",                       \
                    "Unknown error 41",                                        \
                    "No message of desired type",                              \
                    "Identifier removed",                                      \
                    "Channel number out of range",                             \
                    "Level 2 not synchronized",                                \
                    "Level 3 halted",                                          \
                    "Level 3 reset",                                           \
                    "Link number out of range",                                \
                    "Protocol driver not attached",                            \
                    "No CSI structure available",                              \
                    "Level 2 halted",                                          \
                    "Invalid exchange",                                        \
                    "Invalid request descriptor",                              \
                    "Exchange full",                                           \
                    "No anode",                                                \
                    "Invalid request code",                                    \
                    "Invalid slot",                                            \
                    "Unknown error 58",                                        \
                    "Bad font file format",                                    \
                    "Device not a stream",                                     \
                    "No data available",                                       \
                    "Timer expired",                                           \
                    "Out of streams resources",                                \
                    "Machine is not on the network",                           \
                    "Package not installed",                                   \
                    "Object is remote",                                        \
                    "Link has been severed",                                   \
                    "Advertise error",                                         \
                    "Srmount error",                                           \
                    "Communication error on send",                             \
                    "Protocol error",                                          \
                    "Multihop attempted",                                      \
                    "RFS specific error",                                      \
                    "Bad message",                                             \
                    "Value too large for defined data type",                   \
                    "Name not unique on network",                              \
                    "File descriptor in bad state",                            \
                    "Remote address changed",                                  \
                    "Can not access a needed shared library",                  \
                    "Accessing a corrupted shared library",                    \
                    ".lib section in a.out corrupted",                         \
                    "Attempting to link in too many shared libraries",         \
                    "Cannot exec a shared library directly",                   \
                    "Invalid or incomplete multibyte or wide character",       \
                    "Interrupted system call should be restarted",             \
                    "Streams pipe error",                                      \
                    "Too many users",                                          \
                    "Socket operation on non-socket",                          \
                    "Destination address required",                            \
                    "Message too long",                                        \
                    "Protocol wrong type for socket",                          \
                    "Protocol not available",                                  \
                    "Protocol not supported",                                  \
                    "Socket type not supported",                               \
                    "Operation not supported",                                 \
                    "Protocol family not supported",                           \
                    "Address family not supported by protocol",                \
                    "Address already in use",                                  \
                    "Cannot assign requested address",                         \
                    "Network is down",                                         \
                    "Network is unreachable",                                  \
                    "Network dropped connection on reset",                     \
                    "Software caused connection abort",                        \
                    "Connection reset by peer",                                \
                    "No buffer space available",                               \
                    "Transport endpoint is already connected",                 \
                    "Transport endpoint is not connected",                     \
                    "Cannot send after transport endpoint shutdown",           \
                    "Too many references: cannot splice",                      \
                    "Connection timed out",                                    \
                    "Connection refused",                                      \
                    "Host is down",                                            \
                    "No route to host",                                        \
                    "Operation already in progress",                           \
                    "Operation now in progress",                               \
                    "Stale file handle",                                       \
                    "Structure needs cleaning",                                \
                    "Not a XENIX named type file",                             \
                    "No XENIX semaphores available",                           \
                    "Is a named type file",                                    \
                    "Remote I/O error",                                        \
                    "Disk quota exceeded",                                     \
                    "No medium found",                                         \
                    "Wrong medium type",                                       \
                    "Operation canceled",                                      \
                    "Required key not available",                              \
                    "Key has expired",                                         \
                    "Key has been revoked",                                    \
                    "Key was rejected by service",                             \
                    "Owner died",                                              \
                    "State not recoverable",                                   \
                    "Operation not possible due to RF-kill",                   \
                    "Memory page has hardware error",                          \
                    "Unknown error "}

#endif