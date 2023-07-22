1 #include <stdio.h>
  2 #include <limits.h>
  3 #include <stdint.h>
  4 #include <stdlib.h>
  5 
  6 int main (void) {
  7   float f = 3e2; // 3 * 10^2
  8 
  9   printf("O tamanho de f ( float ): %zu bytes / %zu bits\n",sizeof f, sizeof     f *8);
 10   printf("Valor de f: %f\n", f);
 11 
 12   return 0;
 13 }