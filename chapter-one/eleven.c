#include <stdio.h>

int main() {
  const int IN = 1;
  const int OUT = 0;

  int c, nl, nw, nc, state;

  state = OUT;
  nl = nw = nc = 0;

  while ((c = getchar()) != EOF) {
    ++nc;
    if (c == '\n') {
      ++nl;
    }

    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }

  printf("Number of lines: %d\nNumber of words: %d\nNumber of characters: %d\n",
         nl, nw, nc);

  return 0;
}
