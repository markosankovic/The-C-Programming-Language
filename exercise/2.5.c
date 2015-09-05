#include <stdio.h>

int any(char[], char[]);
int in_array(char, char[]);

int main() {

  printf("%d\n", any("ivana mijailovic", "cn"));
  printf("%d\n", any("hello world", "xyz"));

  return 0;
}

int any(char s1[], char s2[]) {
  for (int i=0; s1[i] != '\0'; i++)
    if (in_array(s1[i], s2))
      return i;
  return -1;
}

int in_array(char c, char s[]) {
  for (int i=0; s[i] != '\0'; i++)
    if (c == s[i])
      return 1;
  return 0;
}
