#include <stdio.h>

#define ASCIILEN 127

void histogram(int chars[], char sc, int len);

int main() {
  int c, chars[ASCIILEN];
  for (int i=0; i<ASCIILEN; chars[i++] = 0);

  while ((c = getchar()) !=EOF) {
    chars[c]++;
  }

  histogram(chars, 'a', 'z'-'a');
  histogram(chars, 'A', 'Z'-'A');

  return 0;
}

void histogram(int chars[], char sc, int len) {
  for (int i=0; i<len; i++) {
    char c = sc+i;
    printf("%c: ", c);
    for (int j=0; j<chars[c]; j++) {
      putchar('#');
    }
    putchar('\n');
  }
}
