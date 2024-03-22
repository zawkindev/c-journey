#include <stdio.h>

main() {
  double count;

  for (count = 0; getchar() != EOF; ++count)
    ;

  printf("total characters: %6.0f", count);
}
