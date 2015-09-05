#include <stdio.h>

int main() {
  int c;

  int blanks = 0,
      tabs = 0,
      lines = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++blanks;
    else if (c == '\t')
      ++tabs;
    else if (c == '\n')
      ++lines;
  }

  printf("blanks: %d, tabs: %d, lines: %d\n", blanks, tabs, lines);

  return 0;
}

