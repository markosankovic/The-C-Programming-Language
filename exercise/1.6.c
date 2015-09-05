#include <stdio.h>

int main() {
  int e;

  while ((e = (getchar() != EOF)))
    printf("%d\n", e); 
  printf("%d\n", e); 

  return 0;
}
