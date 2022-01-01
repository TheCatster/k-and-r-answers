#include <stdio.h>

#include <stdio.h>

/*
 * Print Fahrenheit-Celsius table, floating-point version
 */

int main() {

  // Good enough header for table
  printf("Fahrenheit | Celsius\n");
  printf("----------------------\n");

  for (int fahr = 300; fahr >= 0; fahr -= 20) {
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
  }

  return 0;
}
