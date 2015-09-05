#include <stdio.h>

/* count lines in input */
int main() {
  int c, blanks, s;

  blanks = s = 0;
  while ((c = getchar()) != EOF) {
    if (s > 0 && c != ' ') {
      ++blanks; s = 0;
    }

    if (c == ' ')
      ++s;
  }
  printf("%d\n", blanks);

  return 0;
}
