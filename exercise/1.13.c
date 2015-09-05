#include <stdio.h>

#define LONGEST_WORD 16 /* Longest word in a major dictionary is: pneumonoultramicroscopicsilicovolcanoconiosis (45 chars) */ 

#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

int maxcnt(int words[], int len);

int main() {
  int c, state = OUT, cnt = 0;
  int words[LONGEST_WORD];

  for (int i=0; i<LONGEST_WORD; words[i++] = 0);

  while ((c = getchar()) != EOF) {
    if ((c == ' ' || c == '\n' || c == '\t') && state != OUT) {
      state = OUT;
      words[cnt]++;
      cnt = 0;
    } else if (state == OUT) {
      state = IN;
    }

    if (state == IN)
      ++cnt;
  }

  printf("horizontal histogram:\n");
  for (int i=1; i<LONGEST_WORD; i++) {
    printf("%2d: ", i);
    for (int j=0; j<words[i]; j++) {
      putchar('#');
    }
    putchar('\n');
  }

  printf("\n\nvertical histogram:\n");
  int max = maxcnt(words, LONGEST_WORD);
  for (int i=0; i<max; i++) {
    for (int j=0; j<LONGEST_WORD; j++) {
      if (words[j] >= max-i)
        putchar('#');
      else
        putchar('.');
    }
    putchar('\n');
  }

  return 0;
}

int maxcnt(int words[], int len) {
  int max = 0;
  for (int i=0; i<len; i++)
    if (words[i] > max)
      max = words[i];
  return max;
}
