#include <stdio.h>
#include <limits.h>

int main() {
  printf("CHAR_BIT: %d\n", CHAR_BIT);
  printf("CHAR_MAX: %d\n", CHAR_MAX);
  printf("UCHAR_MAX: %d\n", UCHAR_MAX);
  printf("SCHAR_MAX: %d\n", SCHAR_MAX);

  putchar('\n');

  printf("INT_MIN: %d\n", INT_MIN);
  printf("INT_MAX: %d\n", INT_MAX);

  putchar('\n');

  printf("LONG_BIT: %d\n", LONG_BIT);
  printf("LONG_MIN: %ld\n", LONG_MIN);
  printf("LONG_MAX: %ld\n", LONG_MAX);

  putchar('\n');

  printf("WORD_BIT: %d\n", WORD_BIT);

  return 0;
}
