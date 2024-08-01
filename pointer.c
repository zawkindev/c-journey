#include "stdio.h"

void swap(void *a, void *b){
  void *temp = a;
  a=b;
  b=temp;
}

int main() {
  int a = 2;
  float b = 1.0;

  printf("a=%d, b=%f\n",a,b);
  swap(&a,&b);
  printf("-------Swapped------\n");
  printf("a=%f, b=%d\n",a,b);

  return 0;
}
