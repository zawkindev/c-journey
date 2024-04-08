#include <stdio.h>

void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  int x, y;
  x = 1;
  y = 2;

  printf("\nx: %d; y: %d", x, y);

  swap(&x, &y);

  printf("\nx: %d; y: %d", x, y);
}
