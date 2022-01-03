#include <stdio.h>

/*
 * Print Fahrenheit-Celsius table, function version
 */

double fahr_to_cel(int fahr);

int main() {
  float fahr;

  // We're essentially recreating a for loop with a while
  int lower = 0;
  int upper = 300;
  int step = 20;

  fahr = lower;

  // Good enough header for table
  printf("Fahrenheit | Celsius\n");
  printf("----------------------\n");

  while (fahr <= upper) {
    printf("%3.0f | %6.1f\n", fahr, fahr_to_cel(fahr));
    fahr += step;
  }

  return 0;
}

double fahr_to_cel(int fahr) { return ((5.0 / 9.0) * (fahr - 32.0)); }
