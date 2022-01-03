#include <stdbool.h>
#include <stdio.h>

/*
** Print frequency of character use, from whitespace to ~
*/

int main() {
  int c;
  const int MAX_CHARS = 126;
  int char_freq_arr[MAX_CHARS];

  for (int i = 0; i <= MAX_CHARS; ++i) {
    char_freq_arr[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    ++char_freq_arr[c];
  }

  for (int i = 1; i <= MAX_CHARS; ++i) {
    if (i <= 31) {
      continue;
    }

    printf("|%c| ", i);

    for (int j = 0; j < char_freq_arr[i]; ++j) {
      putchar('*');
    }

    putchar('\n');
  }

  return 0;
}
