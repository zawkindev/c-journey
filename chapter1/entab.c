#include <stdio.h>

#define IN 1
#define OUT 0
#define TAB_WIDTH 2

int main() {
  int i, min, sc, state;
  char c, nc;

  state = OUT;
  for (i = 0; (c = getchar()) != EOF; ++i) {
    if (c == ' ') {
      if (state == OUT)
        state = IN;
      ++sc;
    } else {
      if (state == IN) {
        state = OUT;

        if (sc % TAB_WIDTH == 0) {
          min = sc / TAB_WIDTH;
        } else {
          min = sc % TAB_WIDTH;
        }
        for (int j = 0; j < min; ++j) {
          printf("\t");
        }
      } else {
        putchar(c);
      }
    }
  }

  return 0;
}
