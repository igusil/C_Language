 #include <stdio.h>
  2 #include <limits.h>
  3 #include <stdint.h>
  4 #include <stdlib.h>
  5 /*
  6  *Disjuncao ( OU, OR )
  7  *0 0 - 0 // false
  8  *0 1 - 1 // true 
  9  *1 0 - 1 // true
 10  *1 1 - 1 // true
 11  *
 12 */
 13 int main (void) {
 14   int a = 8;
 15   int b = 8;
 16   /*if (a == b) {
 17     printf("The result is: %d\n", a == b || b < 4 && a > 1);
 18   };*/
 19   printf("The result is: %d\n", !(a == b) && b > 9 );
 20 
 21   return 0;
 22 }
 23 
 24 /*
 25  * Conjunto (E, AND)
 26  * 0 0 - 1 // False
 27  * 0 1 - 0 // False
 28  * 1 0 - 0 // False
 29  * 1 1 - 1 // True
 30 
 31 int main (void) {
 32   int a = 8;
 33   int b = 8;
 34   printf("%d\n", a == b && b > 4 && b < 4);
 35 
 36 
 37   return 0;
 38 }
 39 */
