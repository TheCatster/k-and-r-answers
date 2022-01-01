#include <stdio.h>

/*
 * Print Fahrenheit-Celsius table, floating-point version
 */

int main() {
  float fahr, celsius;

  // We're essentially recreating a for loop with a while
  int lower = 0;
  int upper = 100;
  int step = 10;

  celsius  = lower;

  // Good enough header for table
  printf("Celsius | Fahrenheit\n");
  printf("----------------------\n");

  while (celsius <= upper) {
    fahr = (5.0 / 9.0) * (celsius + 32.0);
    printf("%3.0f | %6.1f\n", celsius, fahr);
    celsius += step;
  }

  return 0;
}
