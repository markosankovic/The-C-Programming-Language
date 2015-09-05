#include <stdio.h>

int main() {
  int c, t;

  while ((c = getchar()) != EOF) {
    if (c == ' ' && t == ' ')
      continue;
    t = c;
    putchar(c);
  }

  return 0;
}

