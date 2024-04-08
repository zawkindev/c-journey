#include <stdio.h>

#define MAX_LINE 1422

int readline(char line[]);
void copy(char to[], char from[]);

int main() {
  int cur,           // current line length
      max;           // max line length
  char cl[MAX_LINE], // current line
      ml[MAX_LINE];  // max line

  max = 0;
  while ((cur = readline(cl)) > 0) {
    if (cur > max) {
      copy(ml, cl);
      max = cur;
    }
  }

  printf("\nlongest line: %s\n", ml);

  return 0;
}

int readline(char line[]) {
  int i;
  char c;

  for (i = 0; (c = getchar()) != '\n' && c != EOF; ++i)
    line[i] = c;

  line[i + 1] = '\0'; // mark the end of line

  return i; // length of an array
}

void copy(char max_line[], char current_line[]) {
  int i;

  i = 0;
  while ((max_line[i] = current_line[i]) != '\0') {
    ++i;
  }
}
