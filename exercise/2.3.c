#include <stdio.h>
#include <stdlib.h>

int htoi(char[]);

int main() {

  char s[] = "f1c";
  int n = htoi(s);
  printf("%d\n", n);

  return 0;
}

int htoi(char s[]) {
  int c, n=0;

  for (int i=0; s[i] != '\0'; i++) {
    int m = 0;
    if (s[i] >= 'A' && s[i] <= 'F')
      m = 10 + s[i] - 'A';
    else if (s[i] >= 'a' && s[i] <= 'f')
      m = 10 + s[i] - 'a';
    else if (s[i] >= '0' && s[i] <= '9')
      m = s[i] - '0';
    else
      exit(1);
    n = 16 * n + m;
  }

  return n;
}

