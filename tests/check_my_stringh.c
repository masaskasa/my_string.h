#include "../src/my_string.h"
#include <check.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

// #include <stdlib.h>

// Tests for my_srtlen
START_TEST(test_my_strlen_1) {
  extern my_size_t my_strlen(const char *);

  ck_assert_int_eq(strlen(""), my_strlen(""));
}
END_TEST

START_TEST(test_my_strlen_2) {
  extern my_size_t my_strlen(const char *);

  ck_assert_int_eq(strlen("a"), my_strlen("a"));
}
END_TEST

START_TEST(test_my_strlen_3) {
  extern my_size_t my_strlen(const char *);

  ck_assert_int_eq(strlen("12345!@#$^"), my_strlen("12345!@#$^"));
}
END_TEST

START_TEST(test_my_strlen_4) {
  extern my_size_t my_strlen(const char *);

  ck_assert_int_eq(strlen("  "), my_strlen("  "));
}
END_TEST

START_TEST(test_my_strlen_5) {
  extern my_size_t my_strlen(const char *);

  ck_assert_int_eq(strlen("aboba"), my_strlen("aboba"));
}
END_TEST

Suite *my_strlen_suite(void) {
  Suite *s;

  s = suite_create("my_strlen");

  TCase *tc_my_strlen_1;
  TCase *tc_my_strlen_2;
  TCase *tc_my_strlen_3;
  TCase *tc_my_strlen_4;
  TCase *tc_my_strlen_5;

  tc_my_strlen_1 = tcase_create("test_my_strlen_1");
  tc_my_strlen_2 = tcase_create("test_my_strlen_2");
  tc_my_strlen_3 = tcase_create("test_my_strlen_3");
  tc_my_strlen_4 = tcase_create("test_my_strlen_4");
  tc_my_strlen_5 = tcase_create("test_my_strlen_5");

  tcase_add_test(tc_my_strlen_1, test_my_strlen_1);
  suite_add_tcase(s, tc_my_strlen_1);
  tcase_add_test(tc_my_strlen_2, test_my_strlen_2);
  suite_add_tcase(s, tc_my_strlen_2);
  tcase_add_test(tc_my_strlen_3, test_my_strlen_3);
  suite_add_tcase(s, tc_my_strlen_3);
  tcase_add_test(tc_my_strlen_4, test_my_strlen_4);
  suite_add_tcase(s, tc_my_strlen_4);
  tcase_add_test(tc_my_strlen_5, test_my_strlen_5);
  suite_add_tcase(s, tc_my_strlen_5);

  return s;
}

// Tests for my_memcmp
START_TEST(test_my_memcmp_1) {
  extern int my_memcmp(const void *_str1, const void *_str2, my_size_t n);

  const char *str1 = "aboba";
  const char *str2 = "aboba";

  size_t n = 5;

  ck_assert_int_eq(memcmp(str1, str2, n), my_memcmp(str1, str2, n));
}
END_TEST

START_TEST(test_my_memcmp_3) {
  extern int my_memcmp(const void *_str1, const void *_str2, my_size_t n);

  int str1[5] = {0, 1, 2, 3, 4};
  int str2[5] = {0, 1, 2, 3, 4};

  size_t n = 5;

  ck_assert_int_eq(memcmp(str1, str2, n), my_memcmp(str1, str2, n));
}
END_TEST

START_TEST(test_my_memcmp_4) {
  extern int my_memcmp(const void *_str1, const void *_str2, my_size_t n);

  int str1[5] = {0, 1, 6, 3, 4};
  int str2[5] = {0, 1, 2, 3, 4};

  size_t n = 5;

  ck_assert_int_eq(memcmp(str1, str2, n), my_memcmp(str1, str2, n));
}
END_TEST

START_TEST(test_my_memcmp_5) {
  extern int my_memcmp(const void *_str1, const void *_str2, my_size_t n);

  int str1[5] = {};
  int str2[5] = {};

  size_t n = 5;

  ck_assert_int_eq(memcmp(str1, str2, n), my_memcmp(str1, str2, n));
}
END_TEST

Suite *my_memcmp_suite(void) {
  Suite *s;

  s = suite_create("my_memcmp");

  TCase *tc_my_memcmp_1;
  // TCase *tc_my_memcmp_2;
  TCase *tc_my_memcmp_3;
  TCase *tc_my_memcmp_4;
  TCase *tc_my_memcmp_5;

  tc_my_memcmp_1 = tcase_create("test_my_memcmp_1");
  // tc_my_memcmp_2 = tcase_create("test_my_memcmp_2");
  tc_my_memcmp_3 = tcase_create("test_my_memcmp_3");
  tc_my_memcmp_4 = tcase_create("test_my_memcmp_4");
  tc_my_memcmp_5 = tcase_create("test_my_memcmp_5");

  tcase_add_test(tc_my_memcmp_1, test_my_memcmp_1);
  suite_add_tcase(s, tc_my_memcmp_1);
  // tcase_add_test(tc_my_memcmp_2, test_my_memcmp_2);
  // suite_add_tcase(s, tc_my_memcmp_2);
  tcase_add_test(tc_my_memcmp_3, test_my_memcmp_3);
  suite_add_tcase(s, tc_my_memcmp_3);
  tcase_add_test(tc_my_memcmp_4, test_my_memcmp_4);
  suite_add_tcase(s, tc_my_memcmp_4);
  tcase_add_test(tc_my_memcmp_5, test_my_memcmp_5);
  suite_add_tcase(s, tc_my_memcmp_5);

  return s;
}

// Tests for my_memchr
START_TEST(test_my_memchr_1) {
  extern void *my_memchr(const void *_str, int c, my_size_t n);

  const char *str = "aboba";

  size_t n = 5;

  _ck_assert_ptr(memchr(str, 'o', n), ==, my_memchr(str, 'o', n));
}
END_TEST

START_TEST(test_my_memchr_2) {
  extern void *my_memchr(const void *_str, int c, my_size_t n);

  const char *str = "aboba";

  size_t n = 5;

  _ck_assert_ptr(memchr(str, ',', n), ==, my_memchr(str, ',', n));
}
END_TEST

START_TEST(test_my_memchr_3) {
  extern void *my_memchr(const void *_str, int c, my_size_t n);

  int str[5] = {1, 2, 3, 4, 5};

  size_t n = 5;

  _ck_assert_ptr(memchr(str, 4, n * sizeof(int)), ==,
                 my_memchr(str, 4, n * sizeof(int)));
}
END_TEST

START_TEST(test_my_memchr_4) {
  extern void *my_memchr(const void *_str, int c, my_size_t n);

  int str[5] = {1, 2, 3, 4, 5};

  size_t n = 5;

  _ck_assert_ptr(memchr(str, 0, n * sizeof(int)), ==,
                 my_memchr(str, 0, n * sizeof(int)));
}
END_TEST

START_TEST(test_my_memchr_5) {
  extern void *my_memchr(const void *_str, int c, my_size_t n);

  int str[5] = {1, 2, 3, 4, 5};

  size_t n = 5;

  _ck_assert_ptr(memchr(str, 6, n * sizeof(int)), ==,
                 my_memchr(str, 6, n * sizeof(int)));
}
END_TEST

Suite *my_memchr_suite(void) {
  Suite *s;

  s = suite_create("my_memchr");

  TCase *tc_my_memchr_1;
  TCase *tc_my_memchr_2;
  TCase *tc_my_memchr_3;
  TCase *tc_my_memchr_4;
  TCase *tc_my_memchr_5;

  tc_my_memchr_1 = tcase_create("test_my_memchr_1");
  tc_my_memchr_2 = tcase_create("test_my_memchr_2");
  tc_my_memchr_3 = tcase_create("test_my_memchr_3");
  tc_my_memchr_4 = tcase_create("test_my_memchr_4");
  tc_my_memchr_5 = tcase_create("test_my_memchr_5");

  tcase_add_test(tc_my_memchr_1, test_my_memchr_1);
  suite_add_tcase(s, tc_my_memchr_1);
  tcase_add_test(tc_my_memchr_2, test_my_memchr_2);
  suite_add_tcase(s, tc_my_memchr_2);
  tcase_add_test(tc_my_memchr_3, test_my_memchr_3);
  suite_add_tcase(s, tc_my_memchr_3);
  tcase_add_test(tc_my_memchr_4, test_my_memchr_4);
  suite_add_tcase(s, tc_my_memchr_4);
  tcase_add_test(tc_my_memchr_5, test_my_memchr_5);
  suite_add_tcase(s, tc_my_memchr_5);

  return s;
}

// Tests for my_memcpy
START_TEST(test_my_memcpy_1) {
  extern void *my_memcpy(void *_dest, const void *_src, my_size_t n);

  char src[] = "Hello, world!";
  char dest[20];

  _ck_assert_ptr(memcpy(dest, src, sizeof(src)), ==,
                 my_memcpy(dest, src, sizeof(src)));
}
END_TEST

START_TEST(test_my_memcpy_2) {
  extern void *my_memcpy(void *_dest, const void *_src, my_size_t n);

  int src[] = {1, 2, 3, 4, 5};
  int dest[5];

  _ck_assert_ptr(memcpy(dest, src, sizeof(src)), ==,
                 my_memcpy(dest, src, sizeof(src)));
}
END_TEST

START_TEST(test_my_memcpy_3) {
  extern void *my_memcpy(void *_dest, const void *_src, my_size_t n);

  char src[] = "Hello, world!";

  _ck_assert_ptr(memcpy(src + 6, src, 6), ==, my_memcpy(src + 6, src, 6));
}
END_TEST

START_TEST(test_my_memcpy_4) {
  extern void *my_memcpy(void *_dest, const void *_src, my_size_t n);

  char src[] = "Hello, world!";
  char dest[10];

  _ck_assert_ptr(memcpy(dest, src, 5), ==, my_memcpy(dest, src, 5));
}
END_TEST

START_TEST(test_my_memcpy_5) {
  extern void *my_memcpy(void *_dest, const void *_src, my_size_t n);

  int *src = NULL;
  int *dest = NULL;

  _ck_assert_ptr(memcpy(dest, src, 2), ==, my_memcpy(dest, src, 2));
}
END_TEST

Suite *my_memcpy_suite(void) {
  Suite *s;

  s = suite_create("my_memcpy");

  TCase *tc_my_memcpy_1;
  TCase *tc_my_memcpy_2;
  TCase *tc_my_memcpy_3;
  TCase *tc_my_memcpy_4;
  TCase *tc_my_memcpy_5;

  tc_my_memcpy_1 = tcase_create("test_my_memcpy_1");
  tc_my_memcpy_2 = tcase_create("test_my_memcpy_2");
  tc_my_memcpy_3 = tcase_create("test_my_memcpy_3");
  tc_my_memcpy_4 = tcase_create("test_my_memcpy_4");
  tc_my_memcpy_5 = tcase_create("test_my_memcpy_5");

  tcase_add_test(tc_my_memcpy_1, test_my_memcpy_1);
  suite_add_tcase(s, tc_my_memcpy_1);
  tcase_add_test(tc_my_memcpy_2, test_my_memcpy_2);
  suite_add_tcase(s, tc_my_memcpy_2);
  tcase_add_test(tc_my_memcpy_3, test_my_memcpy_3);
  suite_add_tcase(s, tc_my_memcpy_3);
  tcase_add_test(tc_my_memcpy_4, test_my_memcpy_4);
  suite_add_tcase(s, tc_my_memcpy_4);
  tcase_add_test(tc_my_memcpy_5, test_my_memcpy_5);
  suite_add_tcase(s, tc_my_memcpy_5);

  return s;
}

// Tests for my_memmove
START_TEST(test_my_memmove_1) {
  extern void *my_memmove(void *_dest, const void *_src, my_size_t n);

  char src[] = "Hello, world!";
  char dest[20];

  _ck_assert_ptr(memmove(dest, src, sizeof(src)), ==,
                 my_memmove(dest, src, sizeof(src)));
}
END_TEST

START_TEST(test_my_memmove_2) {
  extern void *my_memmove(void *_dest, const void *_src, my_size_t n);

  int src[] = {1, 2, 3, 4, 5};
  int dest[5];

  _ck_assert_ptr(memmove(dest, src, sizeof(src)), ==,
                 my_memmove(dest, src, sizeof(src)));
}
END_TEST

START_TEST(test_my_memmove_3) {
  extern void *my_memmove(void *_dest, const void *_src, my_size_t n);

  char src[] = "Hello, world!";

  _ck_assert_ptr(memmove(src + 6, src, 6), ==, my_memmove(src + 6, src, 6));
}
END_TEST

START_TEST(test_my_memmove_4) {
  extern void *my_memmove(void *_dest, const void *_src, my_size_t n);

  char src[] = "Hello, world!";
  char dest[10];

  _ck_assert_ptr(memmove(dest, src, 5), ==, my_memmove(dest, src, 5));
}
END_TEST

START_TEST(test_my_memmove_5) {
  extern void *my_memmove(void *_dest, const void *_src, my_size_t n);

  int *src = NULL;
  int *dest = NULL;

  _ck_assert_ptr(memmove(dest, src, 2), ==, my_memmove(dest, src, 2));
}
END_TEST

Suite *my_memmove_suite(void) {
  Suite *s;

  s = suite_create("my_memmove");

  TCase *tc_my_memmove_1;
  TCase *tc_my_memmove_2;
  TCase *tc_my_memmove_3;
  TCase *tc_my_memmove_4;
  TCase *tc_my_memmove_5;

  tc_my_memmove_1 = tcase_create("test_my_memmove_1");
  tc_my_memmove_2 = tcase_create("test_my_memmove_2");
  tc_my_memmove_3 = tcase_create("test_my_memmove_3");
  tc_my_memmove_4 = tcase_create("test_my_memmove_4");
  tc_my_memmove_5 = tcase_create("test_my_memmove_5");

  tcase_add_test(tc_my_memmove_1, test_my_memmove_1);
  suite_add_tcase(s, tc_my_memmove_1);
  tcase_add_test(tc_my_memmove_2, test_my_memmove_2);
  suite_add_tcase(s, tc_my_memmove_2);
  tcase_add_test(tc_my_memmove_3, test_my_memmove_3);
  suite_add_tcase(s, tc_my_memmove_3);
  tcase_add_test(tc_my_memmove_4, test_my_memmove_4);
  suite_add_tcase(s, tc_my_memmove_4);
  tcase_add_test(tc_my_memmove_5, test_my_memmove_5);
  suite_add_tcase(s, tc_my_memmove_5);

  return s;
}

// Tests for my_memset
START_TEST(test_my_memset_1) {
  extern void *my_memset(void *_dest, int c, my_size_t n);

  size_t n = 5;
  char str[5] = "aboba";

  _ck_assert_ptr(memset(str, 'o', n), ==, my_memset(str, 'o', n));
}
END_TEST

START_TEST(test_my_memset_2) {
  extern void *my_memset(void *_dest, int c, my_size_t n);

  size_t n = 5;
  char str[5] = "aboba";

  _ck_assert_ptr(memset(str, ',', n), ==, my_memset(str, ',', n));
}
END_TEST

START_TEST(test_my_memset_3) {
  extern void *my_memset(void *_dest, int c, my_size_t n);

  int str[5] = {1, 2, 3, 4, 5};

  size_t n = 5;

  _ck_assert_ptr(memset(str, 4, n * sizeof(int)), ==,
                 my_memset(str, 4, n * sizeof(int)));
}
END_TEST

START_TEST(test_my_memset_4) {
  extern void *my_memset(void *_dest, int c, my_size_t n);

  int str[5] = {1, 2, 3, 4, 5};

  size_t n = 5;

  _ck_assert_ptr(memset(str, 0, n * sizeof(int)), ==,
                 my_memset(str, 0, n * sizeof(int)));
}
END_TEST

START_TEST(test_my_memset_5) {
  extern void *my_memset(void *_dest, int c, my_size_t n);

  int str[5] = {1, 2, 3, 4, 5};

  size_t n = 5;

  _ck_assert_ptr(memset(str, 6, n * sizeof(int)), ==,
                 my_memset(str, 6, n * sizeof(int)));
}
END_TEST

Suite *my_memset_suite(void) {
  Suite *s;

  s = suite_create("my_memset");

  TCase *tc_my_memset_1;
  TCase *tc_my_memset_2;
  TCase *tc_my_memset_3;
  TCase *tc_my_memset_4;
  TCase *tc_my_memset_5;

  tc_my_memset_1 = tcase_create("test_my_memset_1");
  tc_my_memset_2 = tcase_create("test_my_memset_2");
  tc_my_memset_3 = tcase_create("test_my_memset_3");
  tc_my_memset_4 = tcase_create("test_my_memset_4");
  tc_my_memset_5 = tcase_create("test_my_memset_5");

  tcase_add_test(tc_my_memset_1, test_my_memset_1);
  suite_add_tcase(s, tc_my_memset_1);
  tcase_add_test(tc_my_memset_2, test_my_memset_2);
  suite_add_tcase(s, tc_my_memset_2);
  tcase_add_test(tc_my_memset_3, test_my_memset_3);
  suite_add_tcase(s, tc_my_memset_3);
  tcase_add_test(tc_my_memset_4, test_my_memset_4);
  suite_add_tcase(s, tc_my_memset_4);
  tcase_add_test(tc_my_memset_5, test_my_memset_5);
  suite_add_tcase(s, tc_my_memset_5);

  return s;
}

// Tests for my_strchr
START_TEST(test_my_strchr_1) {
  extern char *my_strchr(const char *_str, int c);

  const char *str = "aboba";

  _ck_assert_ptr(strchr(str, 'o'), ==, my_strchr(str, 'o'));
}
END_TEST

START_TEST(test_my_strchr_2) {
  extern char *my_strchr(const char *_str, int c);

  const char *str = "aboba";

  _ck_assert_ptr(strchr(str, ','), ==, my_strchr(str, ','));
}
END_TEST

Suite *my_strchr_suite(void) {
  Suite *s;

  s = suite_create("my_strchr");

  TCase *tc_my_strchr_1;
  TCase *tc_my_strchr_2;

  tc_my_strchr_1 = tcase_create("test_my_strchr_1");
  tc_my_strchr_2 = tcase_create("test_my_strchr_2");

  tcase_add_test(tc_my_strchr_1, test_my_strchr_1);
  suite_add_tcase(s, tc_my_strchr_1);
  tcase_add_test(tc_my_strchr_2, test_my_strchr_2);
  suite_add_tcase(s, tc_my_strchr_2);

  return s;
}

// Tests for my_strcmp
START_TEST(test_my_strcmp_1) {
  extern int my_strcmp(const char *_str1, const char *_str2);

  const char *str1 = "aboba";
  const char *str2 = "aboba";

  ck_assert_int_eq(strcmp(str1, str2), my_strcmp(str1, str2));
}
END_TEST

START_TEST(test_my_strcmp_2) {
  extern int my_strcmp(const char *_str1, const char *_str2);

  const char *str1 = "aboba";
  const char *str2 = "acoba";

  ck_assert_int_eq(strcmp(str1, str2), my_strcmp(str1, str2));
}
END_TEST

START_TEST(test_my_strcmp_3) {
  extern int my_strcmp(const char *_str1, const char *_str2);

  const char *str1 = "";
  const char *str2 = "";

  ck_assert_int_eq(strcmp(str1, str2), my_strcmp(str1, str2));
}
END_TEST

Suite *my_strcmp_suite(void) {
  Suite *s;

  s = suite_create("my_strcmp");

  TCase *tc_my_strcmp_1;
  TCase *tc_my_strcmp_2;
  TCase *tc_my_strcmp_3;

  tc_my_strcmp_1 = tcase_create("test_my_strcmp_1");
  tc_my_strcmp_2 = tcase_create("test_my_strcmp_2");
  tc_my_strcmp_3 = tcase_create("test_my_strcmp_3");

  tcase_add_test(tc_my_strcmp_1, test_my_strcmp_1);
  suite_add_tcase(s, tc_my_strcmp_1);
  tcase_add_test(tc_my_strcmp_2, test_my_strcmp_2);
  suite_add_tcase(s, tc_my_strcmp_2);
  tcase_add_test(tc_my_strcmp_3, test_my_strcmp_3);
  suite_add_tcase(s, tc_my_strcmp_3);

  return s;
}

// Tests for my_strncmp
START_TEST(test_my_strncmp_1) {
  extern int my_strncmp(const char *_str1, const char *_str2, my_size_t n);

  const char *str1 = "aboba";
  const char *str2 = "aboba";

  size_t n = 5;

  ck_assert_int_eq(strncmp(str1, str2, n), my_strncmp(str1, str2, n));
}
END_TEST

START_TEST(test_my_strncmp_2) {
  extern int my_strncmp(const char *_str1, const char *_str2, my_size_t n);

  const char *str1 = "aboba";
  const char *str2 = "acoba";

  size_t n = 5;

  ck_assert_int_eq(strncmp(str1, str2, n), my_strncmp(str1, str2, n));
}
END_TEST

START_TEST(test_my_strncmp_3) {
  extern int my_strncmp(const char *_str1, const char *_str2, my_size_t n);

  const char *str1 = "";
  const char *str2 = "";

  size_t n = 5;

  ck_assert_int_eq(strncmp(str1, str2, n), my_strncmp(str1, str2, n));
}
END_TEST

Suite *my_strncmp_suite(void) {
  Suite *s;

  s = suite_create("my_strncmp");

  TCase *tc_my_strncmp_1;
  TCase *tc_my_strncmp_2;
  TCase *tc_my_strncmp_3;

  tc_my_strncmp_1 = tcase_create("test_my_strncmp_1");
  tc_my_strncmp_2 = tcase_create("test_my_strncmp_2");
  tc_my_strncmp_3 = tcase_create("test_my_strncmp_3");

  tcase_add_test(tc_my_strncmp_1, test_my_strncmp_1);
  suite_add_tcase(s, tc_my_strncmp_1);
  tcase_add_test(tc_my_strncmp_2, test_my_strncmp_2);
  suite_add_tcase(s, tc_my_strncmp_2);
  tcase_add_test(tc_my_strncmp_3, test_my_strncmp_3);
  suite_add_tcase(s, tc_my_strncmp_3);

  return s;
}

// Tests for my_strcpy
START_TEST(test_my_strcpy_1) {
  extern char *my_strcpy(char *_dest, const char *_src);

  char src[] = "";
  char dest[20];

  _ck_assert_ptr(strcpy(dest, src), ==, my_strcpy(dest, src));
}
END_TEST

START_TEST(test_my_strcpy_2) {
  extern char *my_strcpy(char *_dest, const char *_src);

  char src[] = "Hello, world!";
  char dest[14];

  _ck_assert_ptr(strcpy(dest, src), ==, my_strcpy(dest, src));
}
END_TEST

START_TEST(test_my_strcpy_3) {
  extern char *my_strcpy(char *_dest, const char *_src);

  char src[] = "\n\a\0\0\n";
  char dest[20];

  _ck_assert_ptr(strcpy(dest, src), ==, my_strcpy(dest, src));
}
END_TEST

Suite *my_strcpy_suite(void) {
  Suite *s;

  s = suite_create("my_strcpy");

  TCase *tc_my_strcpy_1;
  TCase *tc_my_strcpy_2;
  TCase *tc_my_strcpy_3;

  tc_my_strcpy_1 = tcase_create("test_my_strcpy_1");
  tc_my_strcpy_2 = tcase_create("test_my_strcpy_2");
  tc_my_strcpy_3 = tcase_create("test_my_strcpy_3");

  tcase_add_test(tc_my_strcpy_1, test_my_strcpy_1);
  suite_add_tcase(s, tc_my_strcpy_1);
  tcase_add_test(tc_my_strcpy_2, test_my_strcpy_2);
  suite_add_tcase(s, tc_my_strcpy_2);
  tcase_add_test(tc_my_strcpy_3, test_my_strcpy_3);
  suite_add_tcase(s, tc_my_strcpy_3);

  return s;
}

// Tests for my_strcat
START_TEST(test_my_strcat_1) {
  extern char *my_strcat(char *_dest, const char *_src);

  char src[] = "world!";
  char dest[20] = "Hello, ";

  _ck_assert_ptr(strcat(dest, src), ==, my_strcat(dest, src));
}
END_TEST

START_TEST(test_my_strcat_2) {
  extern char *my_strcat(char *_dest, const char *_src);

  char src[] = "";
  char dest[] = "Hello, world!";

  _ck_assert_ptr(strcat(dest, src), ==, my_strcat(dest, src));
}
END_TEST

Suite *my_strcat_suite(void) {
  Suite *s;

  s = suite_create("my_strcat");

  TCase *tc_my_strcat_1;
  TCase *tc_my_strcat_2;

  tc_my_strcat_1 = tcase_create("test_my_strcat_1");
  tc_my_strcat_2 = tcase_create("test_my_strcat_2");

  tcase_add_test(tc_my_strcat_1, test_my_strcat_1);
  suite_add_tcase(s, tc_my_strcat_1);
  tcase_add_test(tc_my_strcat_2, test_my_strcat_2);
  suite_add_tcase(s, tc_my_strcat_2);

  return s;
}

// Tests for my_strncat
START_TEST(test_my_strncat_1) {
  extern char *my_strncat(char *_dest, const char *_src, my_size_t n);

  char src[] = "world!";
  char dest[30] = "Hello, ";

  _ck_assert_ptr(strncat(dest, src, 5), ==, my_strncat(dest, src, 5));
}
END_TEST

START_TEST(test_my_strncat_2) {
  extern char *my_strncat(char *_dest, const char *_src, my_size_t n);

  char src[] = "Hello";
  char dest[20] = "";

  _ck_assert_ptr(strncat(dest, src, 3), ==, my_strncat(dest, src, 3));
}
END_TEST

START_TEST(test_my_strncat_3) {
  extern char *my_strncat(char *_dest, const char *_src, my_size_t n);

  char src[20] = "";
  char dest[] = "Hello, world!";

  _ck_assert_ptr(strncat(dest, src, 5), ==, my_strncat(dest, src, 5));
}
END_TEST

START_TEST(test_my_strncat_4) {
  extern char *my_strncat(char *_dest, const char *_src, my_size_t n);

  char src[] = "aboba";
  char dest[30] = "Hello, world!";

  _ck_assert_ptr(strncat(dest, src, 10), ==, my_strncat(dest, src, 10));
}
END_TEST

Suite *my_strncat_suite(void) {
  Suite *s;

  s = suite_create("my_strncat");

  TCase *tc_my_strncat_1;
  TCase *tc_my_strncat_2;
  TCase *tc_my_strncat_3;
  TCase *tc_my_strncat_4;

  tc_my_strncat_1 = tcase_create("test_my_strncat_1");
  tc_my_strncat_2 = tcase_create("test_my_strncat_2");
  tc_my_strncat_3 = tcase_create("test_my_strncat_3");
  tc_my_strncat_4 = tcase_create("test_my_strncat_4");

  tcase_add_test(tc_my_strncat_1, test_my_strncat_1);
  suite_add_tcase(s, tc_my_strncat_1);
  tcase_add_test(tc_my_strncat_2, test_my_strncat_2);
  suite_add_tcase(s, tc_my_strncat_2);
  tcase_add_test(tc_my_strncat_3, test_my_strncat_3);
  suite_add_tcase(s, tc_my_strncat_3);
  tcase_add_test(tc_my_strncat_4, test_my_strncat_4);
  suite_add_tcase(s, tc_my_strncat_4);

  return s;
}

// Tests for my_strncpy
START_TEST(test_my_strncpy_1) {
  extern char *my_strncpy(char *_dest, const char *_src, my_size_t n);

  char src[] = "world!";
  char dest[30] = "Hello, ";

  _ck_assert_ptr(strncpy(dest, src, 5), ==, my_strncpy(dest, src, 5));
}
END_TEST

START_TEST(test_my_strncpy_2) {
  extern char *my_strncpy(char *_dest, const char *_src, my_size_t n);

  char src[] = "Hello";
  char dest[20] = "";

  _ck_assert_ptr(strncpy(dest, src, 3), ==, my_strncpy(dest, src, 3));
}
END_TEST

START_TEST(test_my_strncpy_3) {
  extern char *my_strncpy(char *_dest, const char *_src, my_size_t n);

  char src[20] = "";
  char dest[] = "Hello, world!";

  _ck_assert_ptr(strncpy(dest, src, 5), ==, my_strncpy(dest, src, 5));
}
END_TEST

START_TEST(test_my_strncpy_4) {
  extern char *my_strncpy(char *_dest, const char *_src, my_size_t n);

  char src[] = "aboba";
  char dest[30] = "Hello, world!";

  _ck_assert_ptr(strncpy(dest, src, 10), ==, my_strncpy(dest, src, 10));
}
END_TEST

Suite *my_strncpy_suite(void) {
  Suite *s;

  s = suite_create("my_strncpy");

  TCase *tc_my_strncpy_1;
  TCase *tc_my_strncpy_2;
  TCase *tc_my_strncpy_3;
  TCase *tc_my_strncpy_4;

  tc_my_strncpy_1 = tcase_create("test_my_strncpy_1");
  tc_my_strncpy_2 = tcase_create("test_my_strncpy_2");
  tc_my_strncpy_3 = tcase_create("test_my_strncpy_3");
  tc_my_strncpy_4 = tcase_create("test_my_strncpy_4");

  tcase_add_test(tc_my_strncpy_1, test_my_strncpy_1);
  suite_add_tcase(s, tc_my_strncpy_1);
  tcase_add_test(tc_my_strncpy_2, test_my_strncpy_2);
  suite_add_tcase(s, tc_my_strncpy_2);
  tcase_add_test(tc_my_strncpy_3, test_my_strncpy_3);
  suite_add_tcase(s, tc_my_strncpy_3);
  tcase_add_test(tc_my_strncpy_4, test_my_strncpy_4);
  suite_add_tcase(s, tc_my_strncpy_4);

  return s;
}

// Tests for my_strcspn
START_TEST(test_my_strcspn_1) {
  extern my_size_t my_strcspn(const char *_str1, const char *_str2);

  char str1[] = "Hello, world!";
  char str2[] = "H";

  ck_assert_int_eq(strcspn(str1, str2), my_strcspn(str1, str2));
}
END_TEST

START_TEST(test_my_strcspn_2) {
  extern my_size_t my_strcspn(const char *_str1, const char *_str2);

  char str1[] = "Hello, world!";
  char str2[] = ",!";

  ck_assert_int_eq(strcspn(str1, str2), my_strcspn(str1, str2));
}
END_TEST

START_TEST(test_my_strcspn_3) {
  extern my_size_t my_strcspn(const char *_str1, const char *_str2);

  char str1[] = "Hello, world!";
  char str2[] = "!";

  ck_assert_int_eq(strcspn(str1, str2), my_strcspn(str1, str2));
}
END_TEST

START_TEST(test_my_strcspn_4) {
  extern my_size_t my_strcspn(const char *_str1, const char *_str2);

  char str1[] = "Hello, world!";
  char str2[] = "xyz";

  ck_assert_int_eq(strcspn(str1, str2), my_strcspn(str1, str2));
}
END_TEST

START_TEST(test_my_strcspn_5) {
  extern my_size_t my_strcspn(const char *_str1, const char *_str2);

  char str1[] = "0";
  char str2[] = "abc";

  ck_assert_int_eq(strcspn(str1, str2), my_strcspn(str1, str2));
}
END_TEST

Suite *my_strcspn_suite(void) {
  Suite *s;

  s = suite_create("my_strcspn");

  TCase *tc_my_strcspn_1;
  TCase *tc_my_strcspn_2;
  TCase *tc_my_strcspn_3;
  TCase *tc_my_strcspn_4;
  TCase *tc_my_strcspn_5;

  tc_my_strcspn_1 = tcase_create("test_my_strcspn_1");
  tc_my_strcspn_2 = tcase_create("test_my_strcspn_2");
  tc_my_strcspn_3 = tcase_create("test_my_strcspn_3");
  tc_my_strcspn_4 = tcase_create("test_my_strcspn_4");
  tc_my_strcspn_5 = tcase_create("test_my_strcspn_5");

  tcase_add_test(tc_my_strcspn_1, test_my_strcspn_1);
  suite_add_tcase(s, tc_my_strcspn_1);
  tcase_add_test(tc_my_strcspn_2, test_my_strcspn_2);
  suite_add_tcase(s, tc_my_strcspn_2);
  tcase_add_test(tc_my_strcspn_3, test_my_strcspn_3);
  suite_add_tcase(s, tc_my_strcspn_3);
  tcase_add_test(tc_my_strcspn_4, test_my_strcspn_4);
  suite_add_tcase(s, tc_my_strcspn_4);
  tcase_add_test(tc_my_strcspn_5, test_my_strcspn_5);
  suite_add_tcase(s, tc_my_strcspn_5);

  return s;
}

// Tests for my_strrchr
START_TEST(test_my_strrchr_1) {
  extern char *my_strrchr(const char *_str, int c);

  const char *str = "aboba";

  _ck_assert_ptr(strrchr(str, 'o'), ==, my_strrchr(str, 'o'));
}
END_TEST

START_TEST(test_my_strrchr_2) {
  extern char *my_strrchr(const char *_str, int c);

  const char *str = "aboba";

  _ck_assert_ptr(strrchr(str, ','), ==, my_strrchr(str, ','));
}
END_TEST

Suite *my_strrchr_suite(void) {
  Suite *s;

  s = suite_create("my_strrchr");

  TCase *tc_my_strrchr_1;
  TCase *tc_my_strrchr_2;

  tc_my_strrchr_1 = tcase_create("test_my_strrchr_1");
  tc_my_strrchr_2 = tcase_create("test_my_strrchr_2");

  tcase_add_test(tc_my_strrchr_1, test_my_strrchr_1);
  suite_add_tcase(s, tc_my_strrchr_1);
  tcase_add_test(tc_my_strrchr_2, test_my_strrchr_2);
  suite_add_tcase(s, tc_my_strrchr_2);

  return s;
}

// Tests for my_strpbrk
START_TEST(test_my_strpbrk_1) {
  extern char *my_strpbrk(const char *_str1, const char *_str2);

  char str1[] = "Hello, world!";
  char str2[] = "H";

  _ck_assert_ptr(strpbrk(str1, str2), ==, my_strpbrk(str1, str2));
}
END_TEST

START_TEST(test_my_strpbrk_2) {
  extern char *my_strpbrk(const char *_str1, const char *_str2);

  char str1[] = "Hello, world!";
  char str2[] = ",!";

  _ck_assert_ptr(strpbrk(str1, str2), ==, my_strpbrk(str1, str2));
}
END_TEST

START_TEST(test_my_strpbrk_3) {
  extern char *my_strpbrk(const char *_str1, const char *_str2);

  char str1[] = "Hello, world!";
  char str2[] = "xyz";

  _ck_assert_ptr(strpbrk(str1, str2), ==, my_strpbrk(str1, str2));
}
END_TEST

START_TEST(test_my_strpbrk_4) {
  extern char *my_strpbrk(const char *_str1, const char *_str2);

  char str1[] = "";
  char str2[] = "abc";

  _ck_assert_ptr(strpbrk(str1, str2), ==, my_strpbrk(str1, str2));
}
END_TEST

START_TEST(test_my_strpbrk_5) {
  extern char *my_strpbrk(const char *_str1, const char *_str2);

  char str1[] = "Hello, world!";
  char str2[] = "!";

  _ck_assert_ptr(strpbrk(str1, str2), ==, my_strpbrk(str1, str2));
}
END_TEST

Suite *my_strpbrk_suite(void) {
  Suite *s;

  s = suite_create("my_strpbrk");

  TCase *tc_my_strpbrk_1;
  TCase *tc_my_strpbrk_2;
  TCase *tc_my_strpbrk_3;
  TCase *tc_my_strpbrk_4;
  TCase *tc_my_strpbrk_5;

  tc_my_strpbrk_1 = tcase_create("test_my_strpbrk_1");
  tc_my_strpbrk_2 = tcase_create("test_my_strpbrk_2");
  tc_my_strpbrk_3 = tcase_create("test_my_strpbrk_3");
  tc_my_strpbrk_4 = tcase_create("test_my_strpbrk_4");
  tc_my_strpbrk_5 = tcase_create("test_my_strpbrk_5");

  tcase_add_test(tc_my_strpbrk_1, test_my_strpbrk_1);
  suite_add_tcase(s, tc_my_strpbrk_1);
  tcase_add_test(tc_my_strpbrk_2, test_my_strpbrk_2);
  suite_add_tcase(s, tc_my_strpbrk_2);
  tcase_add_test(tc_my_strpbrk_3, test_my_strpbrk_3);
  suite_add_tcase(s, tc_my_strpbrk_3);
  tcase_add_test(tc_my_strpbrk_4, test_my_strpbrk_4);
  suite_add_tcase(s, tc_my_strpbrk_4);
  tcase_add_test(tc_my_strpbrk_5, test_my_strpbrk_5);
  suite_add_tcase(s, tc_my_strpbrk_5);

  return s;
}

// Tests for my_strerror
START_TEST(test_my_strerror_1) {
  extern char *my_strerror(int _errnum);

  for (my_size_t err = 0; err < 135; err++) {
    char *p = my_strerror(err);
    char *p_bib = strerror(err);
    my_size_t i = 0;
    int succses = 0;

    while (p[i]) {
      if (p[i] != p_bib[i])
        succses = 1;
      i++;
    }
    ck_assert_int_eq(0, succses);
  }
}
END_TEST

Suite *my_strerror_suite(void) {
  Suite *s;

  s = suite_create("my_strerror");

  TCase *tc_my_strerror_1;

  tc_my_strerror_1 = tcase_create("test_my_strerror_1");

  tcase_add_test(tc_my_strerror_1, test_my_strerror_1);
  suite_add_tcase(s, tc_my_strerror_1);

  return s;
}

// Tests for my_strspn
START_TEST(test_my_strspn_1) {
  extern my_size_t my_strspn(const char *_str1, const char *_str2);

  char str1[] = "Hello, world!";
  char str2[] = "Hel";

  ck_assert_int_eq(strspn(str1, str2), my_strspn(str1, str2));
}
END_TEST

START_TEST(test_my_strspn_2) {
  extern my_size_t my_strspn(const char *_str1, const char *_str2);

  char str1[] = "Hello, world!";
  char str2[] = "lo, ";

  ck_assert_int_eq(strspn(str1, str2), my_strspn(str1, str2));
}
END_TEST

START_TEST(test_my_strspn_3) {
  extern my_size_t my_strspn(const char *_str1, const char *_str2);

  char str1[] = "Hello, world!";
  char str2[] = "world";

  ck_assert_int_eq(strspn(str1, str2), my_strspn(str1, str2));
}
END_TEST

START_TEST(test_my_strspn_4) {
  extern my_size_t my_strspn(const char *_str1, const char *_str2);

  char str1[] = "";
  char str2[] = "abc";

  ck_assert_int_eq(strspn(str1, str2), my_strspn(str1, str2));
}
END_TEST

START_TEST(test_my_strspn_5) {
  extern my_size_t my_strspn(const char *_str1, const char *_str2);

  char str1[] = "Hello";
  char str2[] = "Helo";

  ck_assert_int_eq(strspn(str1, str2), my_strspn(str1, str2));
}
END_TEST

Suite *my_strspn_suite(void) {
  Suite *s;

  s = suite_create("my_strspn");

  TCase *tc_my_strspn_1;
  TCase *tc_my_strspn_2;
  TCase *tc_my_strspn_3;
  TCase *tc_my_strspn_4;
  TCase *tc_my_strspn_5;

  tc_my_strspn_1 = tcase_create("test_my_strspn_1");
  tc_my_strspn_2 = tcase_create("test_my_strspn_2");
  tc_my_strspn_3 = tcase_create("test_my_strspn_3");
  tc_my_strspn_4 = tcase_create("test_my_strspn_4");
  tc_my_strspn_5 = tcase_create("test_my_strspn_5");

  tcase_add_test(tc_my_strspn_1, test_my_strspn_1);
  suite_add_tcase(s, tc_my_strspn_1);
  tcase_add_test(tc_my_strspn_2, test_my_strspn_2);
  suite_add_tcase(s, tc_my_strspn_2);
  tcase_add_test(tc_my_strspn_3, test_my_strspn_3);
  suite_add_tcase(s, tc_my_strspn_3);
  tcase_add_test(tc_my_strspn_4, test_my_strspn_4);
  suite_add_tcase(s, tc_my_strspn_4);
  tcase_add_test(tc_my_strspn_5, test_my_strspn_5);
  suite_add_tcase(s, tc_my_strspn_5);

  return s;
}

// Tests for my_strstr
START_TEST(test_my_strstr_1) {
  extern char *my_strstr(const char *_haystack, const char *_needle);

  char str1[] = "Hello, world!";
  char str2[] = "Hello";

  _ck_assert_ptr(strstr(str1, str2), ==, my_strstr(str1, str2));
}
END_TEST

START_TEST(test_my_strstr_2) {
  extern char *my_strstr(const char *_haystack, const char *_needle);

  char str1[] = "Hello, world!";
  char str2[] = ",";

  _ck_assert_ptr(strstr(str1, str2), ==, my_strstr(str1, str2));
}
END_TEST

START_TEST(test_my_strstr_3) {
  extern char *my_strstr(const char *_haystack, const char *_needle);

  char str1[] = "Hello, world!";
  char str2[] = "";

  _ck_assert_ptr(strstr(str1, str2), ==, my_strstr(str1, str2));
}
END_TEST

START_TEST(test_my_strstr_4) {
  extern char *my_strstr(const char *_haystack, const char *_needle);

  char str1[] = "";
  char str2[] = "Goodbye";

  _ck_assert_ptr(strstr(str1, str2), ==, my_strstr(str1, str2));
}
END_TEST

START_TEST(test_my_strstr_5) {
  extern char *my_strstr(const char *_haystack, const char *_needle);

  char str1[] = "Hello, world!";
  char str2[] = "Goodbye";

  _ck_assert_ptr(strstr(str1, str2), ==, my_strstr(str1, str2));
}
END_TEST

Suite *my_strstr_suite(void) {
  Suite *s;

  s = suite_create("my_strstr");

  TCase *tc_my_strstr_1;
  TCase *tc_my_strstr_2;
  TCase *tc_my_strstr_3;
  TCase *tc_my_strstr_4;
  TCase *tc_my_strstr_5;

  tc_my_strstr_1 = tcase_create("test_my_strstr_1");
  tc_my_strstr_2 = tcase_create("test_my_strstr_2");
  tc_my_strstr_3 = tcase_create("test_my_strstr_3");
  tc_my_strstr_4 = tcase_create("test_my_strstr_4");
  tc_my_strstr_5 = tcase_create("test_my_strstr_5");

  tcase_add_test(tc_my_strstr_1, test_my_strstr_1);
  suite_add_tcase(s, tc_my_strstr_1);
  tcase_add_test(tc_my_strstr_2, test_my_strstr_2);
  suite_add_tcase(s, tc_my_strstr_2);
  tcase_add_test(tc_my_strstr_3, test_my_strstr_3);
  suite_add_tcase(s, tc_my_strstr_3);
  tcase_add_test(tc_my_strstr_4, test_my_strstr_4);
  suite_add_tcase(s, tc_my_strstr_4);
  tcase_add_test(tc_my_strstr_5, test_my_strstr_5);
  suite_add_tcase(s, tc_my_strstr_5);

  return s;
}

// Tests for my_strtok
START_TEST(test_my_strtok_1) {
  extern char *my_strtok(char *_str, const char *_delim);

  char str[] = "";
  char my_str[] = "";
  char delim[] = "";

  char *token = strtok(str, delim);
  char *my_token = my_strtok(my_str, delim);

  _ck_assert_ptr(token, ==, my_token);
}
END_TEST

START_TEST(test_my_strtok_2) {
  extern char *my_strtok(char *_str, const char *_delim);

  char str[] = "hello";
  char my_str[] = "hello";
  char delim[] = "";

  size_t i = 0;
  size_t succses = 0;

  char *token = strtok(str, delim);
  char *my_token = my_strtok(my_str, delim);

  while (my_token[i]) {
    if (my_token[i] != token[i])
      succses = 1;
    i++;
  }
  ck_assert_int_eq(0, succses);

  i = 0;
  succses = 0;
}
END_TEST

START_TEST(test_my_strtok_3) {
  extern char *my_strtok(char *_str, const char *_delim);

  char str[] = "hello world";
  char my_str[] = "hello world";
  char delim[] = " ";

  size_t i = 0;
  size_t succses = 0;

  char *token = strtok(str, delim);
  char *my_token = my_strtok(my_str, delim);

  while (my_token[i]) {
    if (my_token[i] != token[i])
      succses = 1;
    i++;
  }
  ck_assert_int_eq(0, succses);

  i = 0;
  succses = 0;

  token = strtok(NULL, delim);
  my_token = my_strtok(my_NULL, delim);
  while (token[i] || my_token[i]) {
    if (my_token[i] != token[i]) {
      succses = 1;
    }
    i++;
  }
  ck_assert_int_eq(0, succses);
}
END_TEST

START_TEST(test_my_strtok_4) {
  extern char *my_strtok(char *_str, const char *_delim);

  char str[] = "hello, world! guys";
  char my_str[] = "hello, world! guys";
  char delim[] = " ,!";

  size_t i = 0;
  size_t succses = 0;

  char *token = strtok(str, delim);
  char *my_token = my_strtok(my_str, delim);

  while (my_token[i]) {
    if (my_token[i] != token[i])
      succses = 1;
    i++;
  }
  ck_assert_int_eq(0, succses);

  i = 0;
  succses = 0;

  while (1) {
    i = 0;
    token = strtok(NULL, delim);
    my_token = my_strtok(my_NULL, delim);
    if (token == NULL) {
      break;
    }
    while (token[i] || my_token[i]) {
      if (my_token[i] != token[i]) {
        succses = 1;
      }
      i++;
    }
    ck_assert_int_eq(0, succses);
  }
}
END_TEST

START_TEST(test_my_strtok_5) {
  extern char *my_strtok(char *_str, const char *_delim);

  char str[] = ",hello, world! guys !";
  char my_str[] = ",hello, world! guys !";
  char delim[] = " ,!";

  size_t i = 0;
  size_t succses = 0;

  char *token = strtok(str, delim);
  char *my_token = my_strtok(my_str, delim);

  while (my_token[i]) {
    if (my_token[i] != token[i])
      succses = 1;
    i++;
  }
  ck_assert_int_eq(0, succses);

  i = 0;
  succses = 0;

  while (1) {
    i = 0;
    token = strtok(NULL, delim);
    my_token = my_strtok(my_NULL, delim);
    if (token == NULL) {
      break;
    }
    while (token[i] || my_token[i]) {
      if (my_token[i] != token[i]) {
        succses = 1;
      }
      i++;
    }
    ck_assert_int_eq(0, succses);
  }
}
END_TEST

Suite *my_strtok_suite(void) {
  Suite *s;

  s = suite_create("my_strtok");

  TCase *tc_my_strtok_1;
  TCase *tc_my_strtok_2;
  TCase *tc_my_strtok_3;
  TCase *tc_my_strtok_4;
  TCase *tc_my_strtok_5;

  tc_my_strtok_1 = tcase_create("test_my_strtok_1");
  tc_my_strtok_2 = tcase_create("test_my_strtok_2");
  tc_my_strtok_3 = tcase_create("test_my_strtok_3");
  tc_my_strtok_4 = tcase_create("test_my_strtok_4");
  tc_my_strtok_5 = tcase_create("test_my_strtok_5");

  tcase_add_test(tc_my_strtok_1, test_my_strtok_1);
  suite_add_tcase(s, tc_my_strtok_1);
  tcase_add_test(tc_my_strtok_2, test_my_strtok_2);
  suite_add_tcase(s, tc_my_strtok_2);
  tcase_add_test(tc_my_strtok_3, test_my_strtok_3);
  suite_add_tcase(s, tc_my_strtok_3);
  tcase_add_test(tc_my_strtok_4, test_my_strtok_4);
  suite_add_tcase(s, tc_my_strtok_4);
  tcase_add_test(tc_my_strtok_5, test_my_strtok_5);
  suite_add_tcase(s, tc_my_strtok_5);

  return s;
}

int main(void) {
  int no_failed_strlen = 0;
  Suite *s_strlen;
  SRunner *runner_strlen;

  int no_failed_memcmp = 0;
  Suite *s_memcmp;
  SRunner *runner_memcmp;

  int no_failed_memchr = 0;
  Suite *s_memchr;
  SRunner *runner_memchr;

  int no_failed_memcpy = 0;
  Suite *s_memcpy;
  SRunner *runner_memcpy;

  int no_failed_memmove = 0;
  Suite *s_memmove;
  SRunner *runner_memmove;

  int no_failed_memset = 0;
  Suite *s_memset;
  SRunner *runner_memset;

  int no_failed_strchr = 0;
  Suite *s_strchr;
  SRunner *runner_strchr;

  int no_failed_strcmp = 0;
  Suite *s_strcmp;
  SRunner *runner_strcmp;

  int no_failed_strncmp = 0;
  Suite *s_strncmp;
  SRunner *runner_strncmp;

  int no_failed_strcpy = 0;
  Suite *s_strcpy;
  SRunner *runner_strcpy;

  int no_failed_strcat = 0;
  Suite *s_strcat;
  SRunner *runner_strcat;

  int no_failed_strncat = 0;
  Suite *s_strncat;
  SRunner *runner_strncat;

  int no_failed_strncpy = 0;
  Suite *s_strncpy;
  SRunner *runner_strncpy;

  int no_failed_strcspn = 0;
  Suite *s_strcspn;
  SRunner *runner_strcspn;

  int no_failed_strrchr = 0;
  Suite *s_strrchr;
  SRunner *runner_strrchr;

  int no_failed_strpbrk = 0;
  Suite *s_strpbrk;
  SRunner *runner_strpbrk;

  int no_failed_strerror = 0;
  Suite *s_strerror;
  SRunner *runner_strerror;

  int no_failed_strspn = 0;
  Suite *s_strspn;
  SRunner *runner_strspn;

  int no_failed_strstr = 0;
  Suite *s_strstr;
  SRunner *runner_strstr;

  int no_failed_strtok = 0;
  Suite *s_strtok;
  SRunner *runner_strtok;

  s_strlen = my_strlen_suite();
  runner_strlen = srunner_create(s_strlen);

  s_memcmp = my_memcmp_suite();
  runner_memcmp = srunner_create(s_memcmp);

  s_memchr = my_memchr_suite();
  runner_memchr = srunner_create(s_memchr);

  s_memcpy = my_memcpy_suite();
  runner_memcpy = srunner_create(s_memcpy);

  s_memmove = my_memmove_suite();
  runner_memmove = srunner_create(s_memmove);

  s_memset = my_memset_suite();
  runner_memset = srunner_create(s_memset);

  s_strchr = my_strchr_suite();
  runner_strchr = srunner_create(s_strchr);

  s_strcmp = my_strcmp_suite();
  runner_strcmp = srunner_create(s_strcmp);

  s_strncmp = my_strncmp_suite();
  runner_strncmp = srunner_create(s_strncmp);

  s_strcpy = my_strcpy_suite();
  runner_strcpy = srunner_create(s_strcpy);

  s_strcat = my_strcat_suite();
  runner_strcat = srunner_create(s_strcat);

  s_strncat = my_strncat_suite();
  runner_strncat = srunner_create(s_strncat);

  s_strncpy = my_strncpy_suite();
  runner_strncpy = srunner_create(s_strncpy);

  s_strcspn = my_strcspn_suite();
  runner_strcspn = srunner_create(s_strcspn);

  s_strrchr = my_strrchr_suite();
  runner_strrchr = srunner_create(s_strrchr);

  s_strpbrk = my_strpbrk_suite();
  runner_strpbrk = srunner_create(s_strpbrk);

  s_strerror = my_strerror_suite();
  runner_strerror = srunner_create(s_strerror);

  s_strspn = my_strspn_suite();
  runner_strspn = srunner_create(s_strspn);

  s_strstr = my_strstr_suite();
  runner_strstr = srunner_create(s_strstr);

  s_strtok = my_strtok_suite();
  runner_strtok = srunner_create(s_strtok);

  srunner_run_all(runner_strlen, CK_NORMAL);
  no_failed_strlen = srunner_ntests_failed(runner_strlen);
  srunner_free(runner_strlen);

  srunner_run_all(runner_memcmp, CK_NORMAL);
  no_failed_memcmp = srunner_ntests_failed(runner_memcmp);
  srunner_free(runner_memcmp);

  srunner_run_all(runner_memchr, CK_NORMAL);
  no_failed_memchr = srunner_ntests_failed(runner_memchr);
  srunner_free(runner_memchr);

  srunner_run_all(runner_memcpy, CK_NORMAL);
  no_failed_memcpy = srunner_ntests_failed(runner_memcpy);
  srunner_free(runner_memcpy);

  srunner_run_all(runner_memmove, CK_NORMAL);
  no_failed_memmove = srunner_ntests_failed(runner_memmove);
  srunner_free(runner_memmove);

  srunner_run_all(runner_memset, CK_NORMAL);
  no_failed_memset = srunner_ntests_failed(runner_memset);
  srunner_free(runner_memset);

  srunner_run_all(runner_strchr, CK_NORMAL);
  no_failed_strchr = srunner_ntests_failed(runner_strchr);
  srunner_free(runner_strchr);

  srunner_run_all(runner_strcmp, CK_NORMAL);
  no_failed_strcmp = srunner_ntests_failed(runner_strcmp);
  srunner_free(runner_strcmp);

  srunner_run_all(runner_strncmp, CK_NORMAL);
  no_failed_strncmp = srunner_ntests_failed(runner_strncmp);
  srunner_free(runner_strncmp);

  srunner_run_all(runner_strcpy, CK_NORMAL);
  no_failed_strcpy = srunner_ntests_failed(runner_strcpy);
  srunner_free(runner_strcpy);

  srunner_run_all(runner_strcat, CK_NORMAL);
  no_failed_strcat = srunner_ntests_failed(runner_strcat);
  srunner_free(runner_strcat);

  srunner_run_all(runner_strncat, CK_NORMAL);
  no_failed_strncat = srunner_ntests_failed(runner_strncat);
  srunner_free(runner_strncat);

  srunner_run_all(runner_strncpy, CK_NORMAL);
  no_failed_strncpy = srunner_ntests_failed(runner_strncpy);
  srunner_free(runner_strncpy);

  srunner_run_all(runner_strcspn, CK_NORMAL);
  no_failed_strcspn = srunner_ntests_failed(runner_strcspn);
  srunner_free(runner_strcspn);

  srunner_run_all(runner_strrchr, CK_NORMAL);
  no_failed_strrchr = srunner_ntests_failed(runner_strrchr);
  srunner_free(runner_strrchr);

  srunner_run_all(runner_strpbrk, CK_NORMAL);
  no_failed_strpbrk = srunner_ntests_failed(runner_strpbrk);
  srunner_free(runner_strpbrk);

  srunner_run_all(runner_strerror, CK_NORMAL);
  no_failed_strerror = srunner_ntests_failed(runner_strerror);
  srunner_free(runner_strerror);

  srunner_run_all(runner_strspn, CK_NORMAL);
  no_failed_strspn = srunner_ntests_failed(runner_strspn);
  srunner_free(runner_strspn);

  srunner_run_all(runner_strstr, CK_NORMAL);
  no_failed_strstr = srunner_ntests_failed(runner_strstr);
  srunner_free(runner_strstr);

  srunner_run_all(runner_strtok, CK_NORMAL);
  no_failed_strtok = srunner_ntests_failed(runner_strtok);
  srunner_free(runner_strtok);

  return (no_failed_strlen == 0 && no_failed_memcmp == 0 &&
          no_failed_memchr == 0 && no_failed_memcpy == 0 &&
          no_failed_memmove == 0 && no_failed_memset == 0 &&
          no_failed_strchr == 0 && no_failed_strcmp == 0 &&
          no_failed_strncmp == 0 && no_failed_strcpy == 0 &&
          no_failed_strcat == 0 && no_failed_strncat == 0 &&
          no_failed_strncpy == 0 && no_failed_strcspn == 0 &&
          no_failed_strrchr == 0 && no_failed_strpbrk == 0 &&
          no_failed_strerror == 0 && no_failed_strspn == 0 &&
          no_failed_strstr == 0 && no_failed_strtok == 0)
             ? EXIT_SUCCESS
             : EXIT_FAILURE;
}