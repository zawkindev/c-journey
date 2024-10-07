#include "stdio.h"
#include <stdlib.h>

int main() {
  int *p;
  p = malloc(10 * sizeof(int));
  if (p == NULL) {
    printf("adfasdf");
    exit(1);
  }
}
