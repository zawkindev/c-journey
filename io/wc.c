#include <stdio.h>

#define IN 1
#define OUT 0

main() {
  int c, nc, nw, nl, state;

  nw = nl = 0;
  for (nc = 0; (c = getchar()) != EOF; nc++) {
    if (c == '\n')
      ++nl;

    if (c == ' ' || c == '\t' || c == '\n') {
      if (state == IN)
        ++nw;
      state = OUT;
    }

    else {
      state = IN;
    }
  }

  printf("lines: %d; words: %d; chars: %d\n", nl, nw, nc);
}
