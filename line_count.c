#include <stdio.h>

main() {
  int c, count;

  for (; (c = getchar()) != EOF;)
    if (c == '\n') {
      ++count;
    }

  printf("total lines: %d", count);
}
