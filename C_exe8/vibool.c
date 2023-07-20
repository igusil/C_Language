#include <stdio.h>
  2 #include <stdbool.h>
  3 
  4 int main (void) {
  5   bool b;
  6   char c;
  7   c = 0; //false
  8   c = 1; //true
  9 
 10   b = true;
 11   b = false;
 12 
 13   printf("O tamanho de b (bool) eh: %lu\n", sizeof b);
 14 
 15   return 0;
 16 }
