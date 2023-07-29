1 #include <stdio.h>
  2 #include <limits.h>
  3 #include <stdint.h>
  4 #include <stdlib.h>
  5 
  6 int main (void) {
  7   int a = 359;
  8 
  9   {
 10     int chave = 3;
 11     printf("chave: %d\n", chave);
 12   }
 13 
 14   printf("The result is: %d\n", a);
 15 
 16   return 0;
 17 }
