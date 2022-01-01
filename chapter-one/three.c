#include <stdio.h>

/*
 * Print Fahrenheit-Celsius table, floating-point version
 */

int main() {
  float fahr, celsius;

  // We're essentially recreating a for loop with a while
  int lower = 0;
  int upper = 300;
  int step = 20;

  fahr = lower;

  // Good enough header for table
  printf("Fahrenheit | Celsius\n");
  printf("----------------------\n");

  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f | %6.1f\n", fahr, celsius);
    fahr += step;
  }

  return 0;
}
