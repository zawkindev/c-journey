#include <stdio.h>

#define LOWER 0
#define HIGHER 300 
#define STEP 22


main(){
  float fahr;

  for(fahr=HIGHER; fahr>=LOWER; fahr-=STEP){
    printf("%3.1f\t%6.2f\n", fahr, (5.0 / 9.0) * (fahr - 32));
  }
}

