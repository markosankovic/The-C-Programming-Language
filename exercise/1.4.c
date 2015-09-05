#include <stdio.h>
/* print Celsius-Fahrenheit table
   for celsius = -30, ..., 50; floating-point version */
int main() {
  float fahr, celsius;
  float lower, upper, step;

  lower = -30;
  upper = 100;
  step = 10;

  celsius = lower;
  while (celsius <= upper) {
    fahr = celsius * 1.8 + 32.0;
    printf("%3.1f %7.1f\n", celsius, fahr);
    celsius += step;
  }

  return 0;
}
