#include <stdio.h>

int atoi(char s[]) {
  int i, n;

  n = 0;
  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
    n = 10 * n + (s[i] - '0');
    printf("\n%d", s[i] - '0');
  }

  return n;
}

int main() {

  char s[] = "123";

  int a = '5' - '0';

  printf("%d", atoi(s));
  printf("\n%d", a);

  return 0;
}
