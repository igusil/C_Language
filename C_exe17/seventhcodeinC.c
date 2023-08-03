#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdint.h>
 
int main (void) {
  //unsigned int i; //inteiro positivo, sem sinal
  /*
  print:
  printf("O valor de i eh: %u\n", i);
    i++;
    if (i < 3)
     goto print;
  */
  for (unsigned int i = 0 ; i < 7 ; i++) {
    printf("O valor de i eh: %u\n", i);
  }

  return 0;
 }
