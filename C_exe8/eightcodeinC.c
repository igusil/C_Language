#include <stdio.h>
  2 
  3 int main (void) {
  4   unsigned char c;
  5 
  6   printf(" length c (char): %lu bytes / %lu bits\n",sizeof c, sizeof c *8);
  7   //printf("O tamanho do tipo eh: %lu\n",sizeof (char));
  8 
  9   c=128;
 10   printf("Valor de c: %i\n", c);
 11 
 12   c = 10;
 13   c = 0xa;
 14   c = '\n';
 15   printf("O valor de c: %i\n", c);
 16 
 17   return 0;
 18 }
