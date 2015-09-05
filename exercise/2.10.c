#include <stdio.h>

int lower(int);

int main() {

  printf("lower('A'): %c\n", lower('A'));
  printf("lower('M'): %c\n", lower('M'));
  printf("lower('z'): %c\n", lower('z'));
  printf("lower('\\n'): %c\n", lower('\n'));
  printf("lower('Z'): %c\n", lower('Z'));

  return 0;
}

int lower(int c) {
  return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}
