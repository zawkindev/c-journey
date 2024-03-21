#include <stdio.h>

main(){
  float fahr;

  for(fahr=300; fahr>=0; fahr-=22){
    printf("%3.1f\t%6.2f\n", fahr, (5.0 / 9.0) * (fahr - 32));
  }
}

