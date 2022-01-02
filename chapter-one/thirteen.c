#include <stdbool.h>
#include <stdio.h>

int main() {
  const int MAX_WORD_LEN = 20;

  int c;
  int arr_of_len[MAX_WORD_LEN + 1];
  int num_char = 0;
  bool state = true;

  for (int i = 0; i <= MAX_WORD_LEN; ++i) {
    arr_of_len[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    ++num_char;

    if (c == ' ' || c == '\t' || c == '\n') {
      state = false;
      --num_char;
    }

    if (state == false) {
      if (num_char != 0 && num_char <= MAX_WORD_LEN) {
        ++arr_of_len[num_char];
      }

      state = true;
      num_char = 0;
    }
  }

  for (int i = 1; i <= MAX_WORD_LEN; ++i) {
    printf("|%2d| ", i);
    for (int j = 0; j < arr_of_len[i]; ++j) {
      putchar('*');
    }

    putchar('\n');
  }

  return 0;
}
