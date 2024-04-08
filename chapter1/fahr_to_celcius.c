#include <stdio.h>

#define LOWER 0
#define HIGHER 300
#define STEP 22

float convert(float fahr) { return (5.0 / 9.0) * (fahr - 32); }

int main() {
  float fahr;

  for (fahr = HIGHER; fahr >= LOWER; fahr -= STEP) {
    printf("%3.1f\t%6.2f\n", fahr, convert(fahr));
  }
}
