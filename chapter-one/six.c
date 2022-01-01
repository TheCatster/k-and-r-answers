#include <stdio.h>

int main() {
  int c;

  // From my understanding, this verifies if ~getchar() != EOF~ is 0 or 1.
  c = (getchar() != EOF);
  if ((c == 0) || (c == 1)) {
    printf("Definitely 0 or 1.\n");
  } else {
    printf("Uh oh.\n");
  }

  while ((c = getchar()) != EOF) {
    putchar(c);
  }
}
