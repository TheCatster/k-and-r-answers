#include <stdio.h>

int main() {
  int c;

  /*
   * I had to look up what blanks meant, I've never heard spaces referred to as
   * this.
   */
  int lines = 0;
  int tabs = 0;
  int blanks = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      ++lines;
    } else if (c == '\t') {
      ++tabs;
    } else if (c == ' ') {
      ++blanks;
    }
  }

  printf("Number of lines: %d\n", lines);
  printf("Number of tabs: %d\n", tabs);
  printf("Number of blanks: %d\n", blanks);

  return 0;
}
