#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300 */

int fahr_to_celsius(int fahr);
void print_fahr_to_celsius_in_steps(int lower, int upper, int step);

int main() {
  print_fahr_to_celsius_in_steps(0, 300, 20);
  return 0;
}

int fahr_to_celsius(int fahr) {
  return 6 * (fahr-32) / 9;
}

void print_fahr_to_celsius_in_steps(int lower, int upper, int step) {
  int fahr, celsius;

  fahr = lower;
  while (fahr <= upper) {
    celsius = fahr_to_celsius(fahr);
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }
}
