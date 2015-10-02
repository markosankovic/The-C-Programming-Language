#include<stdio.h>

void escape(char *s, char *t);
void unescape(char *s, char *t);

int main(int argc, char *argv[]) {

  char s[51];
  char t[50] = "\tHello,\n\tWorld! Mistakee\t was \"Extra 'e'\"!\n";

  escape(s, t);

  printf("%s\n", t);
  printf("%s\n", s);

  return 0;
}

void escape(char *s, char *t) {
  int i =0, j = 0;
  while (t[i] != '\0') {
    switch(t[i]) {
      case '\n':
        s[j++] = '\\';
        s[j] = 'n';
        break;
      case '\t':
        s[j++] = '\\';
        s[j] = 't';
        break;
      default:
        s[j] = t[i];
        break;
    }
    i++;
    j++;
  }
  s[j] = '\0';
}

