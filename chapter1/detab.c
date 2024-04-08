#include <stdio.h>

#define TAB_SIZE 4

int main() {
  int i, j;
  char c;

  for (i = 0; (c = getchar()) != EOF; ++i) {
    if (c == '\t') {
      for (j = 0; j < TAB_SIZE; ++j) {
        putchar(' ');
      }
    } else {
      putchar(c);
    }
  }
}
