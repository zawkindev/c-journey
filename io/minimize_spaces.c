#include <stdio.h>

int main() {
  int c, space;

  for (space = 0; (c = getchar()) != EOF;) {
    if (c == ' ')
      ++space;
    else
      space = 0;

    if (space < 2)
      putchar(c);
  }
}
