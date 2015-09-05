#include <stdio.h>

void squeezestr(char[], char[]);
int in_array(char, char[]);

int main() {

  char s[] = "hello world";
  squeezestr(s, "ld");
  for (int i=0; s[i] != '\0'; putchar(s[i++]));

  return 0;
}

void squeezestr(char s1[], char s2[]) {
  int i, j;
  for (i = j = 0; s1[i] != '\0'; i++)
    if (!in_array(s1[i], s2))
      s1[j++] = s1[i];
  s1[j] = '\0';
}

int in_array(char c, char s[]) {
  for (int i=0; s[i] != '\0'; i++)
    if (c == s[i])
      return 1;
  return 0;
}
