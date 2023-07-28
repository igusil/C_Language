 #include <stdio.h>
  2 #include <limits.h>
  3 #include <stdint.h>
  4 #include <stdlib.h>
  5 // for i in {1..32}; do echo -n 0; done; echo
  6 /* &
  7  * |
  8  * ^ xor
  9  * ~
 10  * ! negação logica
 11  * << shift left
 12  * >> shift right
 13 */
 14 
 15 int main (void) {
 16   //int a = 0b1010;
 17 
 18   //int a = 0b00000000000000000000000000000000;
 19   //signed int b = 0b11111111111111111111111111111111;
 20 
 21   //int b = 3; // 11
 22 
 23   //int a = 123;
 24 
 25   //printf("The result  is: %d\n", a * 10);
 26   //printf("The result is: %d\n", a >> 3);
 27   int a = 359;
 28   int chave = 3;
 29 
 30   printf("The result is: %d\n", a ^ chave);
 31 
 32 
 33   return 0;
 34 }
