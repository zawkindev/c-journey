#include <stdio.h>

#define TOTAL_CHARS 255

int includes(char array[], char c) {
  int i;

  for (i = 0; i < TOTAL_CHARS; ++i) {
    if (c == array[i])
      return i;
  }
  return -1;
};

int main() {
  char c, characters[TOTAL_CHARS];
  int i, j, index, limit, freqs[TOTAL_CHARS];

  // assign all elements of two array to zero
  for (i = 0; i < TOTAL_CHARS; ++i) {
    characters[i] = 0;
    freqs[i] = 0;
  }

  // store values to arrays
  for (i = 0; (c = getchar()) != EOF; ++i) {
    if ((index = includes(characters, c)) > -1) {
      ++freqs[index];
    } else {
      characters[i] = c;
      freqs[i] = 1;
    }
  }

  // store the index of last non-zero element in array
  limit = i;

  // print empty line
  printf("---------------------------\n");

  // print histograms
  for (i = 0; i < limit; ++i) {
    char cc = characters[i];
    if (freqs[i] > 0) {
      if (cc == '\n') {
        printf("\\n | ");
      } else if (cc == '\t') {
        printf("\\t | ");
      } else {
        printf("%c  | ", cc);
      }
      for (j = 0; j < freqs[i]; ++j) {
        putchar('#');
      }
      putchar('\n');
    }
  }

  return 0;
}
