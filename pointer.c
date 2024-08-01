#include "stdio.h"

void swap(void *a, void *b) {
  void *temp = a;
  a = b;
  b = temp;
}

int main() {
  int a = 2;
  float b = 1.0;

  printf("a=%d, b=%f\n", a, b);
  swap(&a, &b);
  printf("-------Swapped------\n");
  printf("a=%f, b=%d\n", a, b);

  float arr[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
  for (int i = 0; i < 5; i++) {
    printf("%.1f ", *(arr + i));
  }

  return 0;
}
