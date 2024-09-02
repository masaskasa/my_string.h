my_string.h is analogue of string.h

my_string.h define:

1. Analogue of the NULL
    my_NULL ((void *)0)

2. Analogue of the size_t
    typedef unsigned int my_size_t

3. Analogue of the strlen:
    my_size_t my_strlen(const char *_str)

4. Analogue of the memcmp:
    int my_memcmp(const void *_str1, const void *_str2, my_size_t n)

5. Analogue of the memchr:
void *my_memchr(const void *_str, int c, my_size_t n);

6. Analogue of the memcpy:
void *my_memcpy(void *_dest, const void *_src, my_size_t n)

7. Analogue of the memmove:
void *my_memmove(void *_dest, const void *_src, my_size_t n)

8. Analogue of the memset:
void *my_memset(void *_dest, int c, my_size_t n)

9. Analogue of the strchr:
char *my_strchr(const char *_str, int c)

10. Analogue of the strcmp:
int my_strcmp(const char *_str1, const char *_str2)

11. Analogue of the strncmp:
int my_strncmp(const char *_str1, const char *_str2, my_size_t n)

12. Analogue of the strcpy:
char *my_strcpy(char *_dest, const char *_src)

13. Analogue of the strcat:
char *my_strcat(char *_dest, const char *_src)

14. Analogue of the strncat:
char *my_strncat(char *_dest, const char *_src, my_size_t n)

15. Analogue of the strncpy:
char *my_strncpy(char *_dest, const char *_src, my_size_t n)

16. Analogue of the strcspn:
my_size_t my_strcspn(const char *_str1, const char *_str2)

17. Analogue of the strrchr:
char *my_strrchr(const char *str, int c)

18. Analogue of the strpbrk:
char *my_strpbrk(const char *_str1, const char *_str2)

19. Analogue of the strtok:
char *my_strtok(char *_str, const char *_delim)

20. Analogue of the strerror:
char *my_strerror(int _errnum)

21. Analogue of the strcspn:
my_size_t my_strspn(const char *_str1, const char *_str2)

22. Analogue of the strstr:
char *my_strstr(const char *_haystack, const char *_needle)

23. List of Linux errors for my_strerror