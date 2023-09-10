#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>
/*
 *Disjuncao ( OU, OR )
 *0 0 - 0 // false
 *0 1 - 1 // true 
 *1 0 - 1 // true
 *1 1 - 1 // true
 *
*/
int main (void) {
  int a = 8;
  int b = 8;
  /*if (a == b) {
    printf("The result is: %d\n", a == b || b < 4 && a > 1);
  };*/
  printf("The result is: %d\n", !(a == b) && b > 9 );
  
  return 0;
}

/*
 * Conjunto (E, AND)
 * 0 0 - 1 // False
 * 0 1 - 0 // False
 * 1 0 - 0 // False
 * 1 1 - 1 // True

int main (void) {
  int a = 8;
  int b = 8;
  printf("%d\n", a == b && b > 4 && b < 4);


  return 0;
}
*/
