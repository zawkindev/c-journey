#include <stdio.h>

int main() {
  char text[] = "asuna";
  char *p = text;
  for (int i = 0; i < 5; i++) {
    printf("%c\t%p\n", *p, p);
    p++;
  }
}
