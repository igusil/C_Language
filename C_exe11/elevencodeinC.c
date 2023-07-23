#include <stdio.h>
  2 #include <limits.h>
  3 #include <stdint.h>
  4 #include <stdlib.h>
  5 
  6 int main (void) {
  7 //float f = 1.0;
  8 //float f = 3e2; // 3 * 10^2 //10 elevado a 2 = 100 * 3 = 300
  9   float f = 40.334309;
 10   double d = 1;
 11   long double ld = 1;
 12 
 13   printf("O tamanho de f (float): %zu bytes / %zu bits\n",sizeof f, sizeof f     *8);
 14   printf("O tamanho de d (double): %zu bytes / %zu bits\n",sizeof d, sizeof     d *8);
 15   printf("O tamanho de ld (long double): %zu bytes / %zu bits\n",sizeof ld,     sizeof ld *8);
 16 
 17   printf("O valor de f: %.20f\n", f);
 18 
 19   return 0;
 20 }
