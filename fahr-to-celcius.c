#include <stdio.h>

main(){
  float fahr, celcius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  
  for(fahr=0; fahr<=upper; fahr+=20){
    fahr = fahr + step;   
    celcius = (5.0 / 9.0) * (fahr - 32);
    printf("%3.1f\t%6.2f\n", fahr, celcius);
  }
}

