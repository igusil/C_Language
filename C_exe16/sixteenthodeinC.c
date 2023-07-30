  1 #include <stdio.h>
  2 #include <limits.h>
  3 #include <stdint.h>
  4 #include <stdlib.h>
  5   //if else codes
  6 int main (void) {
  7   int a = 359;
  8   int chave = 3;
  9 
 10   if (-1 == a && a < 400) {
 11 
 12     printf("chave: %d\n", chave);
 13     printf("oi\n");
 14   }
 15   else if (a < 500) {
 16     puts(" a eh menor que 500");
 17     if (a < 300) {
 18       printf("a eh menor que 300");
 19     }
 20   }
 21   else if (a == 359) {
 22     printf(" a eh 359");
 23   }
 24   else {
 25     printf("avalização do if deu false\n");
 26   }
 27   //ternário
 28   //(a == 3) ? puts("3") : puts("não sei o valor de a");
 29   if (a == 3) {
 30     puts("3");
 31   }
 32   else {
 33     puts("não sei o valor de a");
 34   }
 35   
 36   printf("The value is a: %d\n", a);  
 37   
 38   return 0;
 39 }
