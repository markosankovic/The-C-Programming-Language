#include <stdio.h>

int bitcount(unsigned);

int main() {

  printf("bitcount(7): %d\n", bitcount((unsigned)7));
  printf("bitcount(44): %d\n", bitcount((unsigned)44));
  printf("bitcount(31): %d\n", bitcount((unsigned)31));
  printf("bitcount(111): %d\n", bitcount((unsigned)111));

  return 0;
}

int bitcount(unsigned x) {
  int b;

  for(b=0; x!=0; x &= x-1) {
  }

  return b;
}
