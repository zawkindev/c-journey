#include "stdio.h"

int main() {
  int a = 0;
  float b = 0.0;

  int *p = NULL; 
  float *q = NULL;

  q = &b;
  p = &a;

  void *temp = p;
  p=(int*)q;
  q=temp;

  
  return 0;
}
