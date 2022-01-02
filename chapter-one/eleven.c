#include <stdio.h>

/*
** This exercise asks to determine how we can test this word count program, and
** what kinds of bugs we could uncover. To test, we could pipe in input from
** another file, with various characters and whatnot. Some bugs might be
** newlines at the end of a file, or certain escaped characters.
*/

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
