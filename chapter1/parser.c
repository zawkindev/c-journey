#include <stdio.h>

#define MAX 1000000

int main() {
  int i, j, count[5], match_count[5];
  char c, code[MAX];

  char chars[5] = {'{', '(', '[', '\''};

  char match[5] = {'}', ')', ']', '\''};

  for (i = 0; (c = getchar()) != '\n'; ++i) {
    for (j = 0; j < 5; ++j) {
      if (chars[j] == c)
        count[j]++;
      else if (match[j] == c)
        match_count[j]++;
    }
  }
  for (i = 0; i < 5; ++i) {
    printf("loop");
    if (count[i] != match_count[j])
      printf("error");
  }

  return 0;
}
