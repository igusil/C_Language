  1 #include <stdio.h>
  2 #include <stdbool.h>
  3 #include <stdlib.h>
  4 #include <stdint.h>
  5 #include <limits.h>
  6 
  7 int main (void) {
  8   int a[] = { 2017, 2018, 2019};
  9 
 10   for ( int i = 0; i < 3 ; i++) {
 11     printf("%d\n", *(a+i)); //apontar para endereço de memoria *a
 12   }
 13 
 14   printf(" o endereço de a em memoria eh: %p\n", a);
 15 
 16   return 0;
 17 }
