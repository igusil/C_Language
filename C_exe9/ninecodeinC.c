#include <stdio.h>
  2 #include <limits.h>
  3 #include <stdint.h>
  4 #include <stdlib.h>
  5 
  6 int main (void) {
  7   //signed int i = INT_MAX;
  8   //unsigned int i = UINT_MAX;
  9   //uint32_t i = UINT_MAX;
 10   //uint16_t i = USHRT_MAX;
 11   //uint8_t i = UCHAR_MAX;
 12   //short int i;
 13   //short i;
 14   //long int i;
 15   //long i;
 16   //long long i = LLONG_MAX;
 17   //size_t i;
 18   register int i = 0;
 19 
 20   //i++; // i = i + 1 ou i += 1
 21 
 22   printf("O tamanho de i (int): %zu bytes / %zu bits\n", sizeof i, sizeof i     *8);
 23   printf("O valor de i: %d\n", i);
 24 
 25   return 0;
 26 }