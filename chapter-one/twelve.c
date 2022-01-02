#include <stdio.h>

int main() {
  const int IN = 1;
  const int OUT = 0;

  int c;

  int state = OUT;

  while ((c = getchar()) != EOF) {
    if (c != ' ' && c != '\n' && c != '\t') {
      if (state == OUT) {
        state = IN;
      }

      putchar(c);
    } else if (state == IN) {
      state = OUT;
      putchar('\n');
    }
  }

  return 0;
}
