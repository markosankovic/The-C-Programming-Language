#include <stdio.h>

int main() {
  int c, p;

  while((c = getchar()) != EOF) {
    if (p == ' ' && c != ' ')
      putchar(' ');
    if (c != ' ')
      putchar(c);
    p = c;
  }
  return 0;
}
