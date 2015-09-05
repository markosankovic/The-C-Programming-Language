#include <stdio.h>

#define STRLEN 12

void lower(char s[]);

int main() {

  char s[] = "HELLO woRld\n";
  lower(s);
  for (int i=0; s[i] != '\0'; putchar(s[i++]));

  return 0;
}

void lower(char s[]) {
  for (int i=0; s[i] != '\0'; i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      s[i] += 'a' - 'A';
    }
  }
}
