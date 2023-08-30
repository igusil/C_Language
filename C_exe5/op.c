#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main (void) {
  
  int a;
  a = 10;
  a++;
  printf("int");
  printf("%d\n", a);
  a--;
  printf("%d\n", a);
  a = 10;
  printf("%d\n", a * 9);
  a = 10 / 3;
  printf("%d\n", a);
  a += 1;
  printf("%d\n", a);

  a *= 8;
  printf("%d\n", a);

  a = 10 % 2;
  printf("%d\n", a);

  a = 4 + 2 * 3;
  printf("%d\n", a);

  a = (4 + 2) * 3;
  printf("%d\n", a);

  a = (4 + 2) * 3;
  printf("%d\n", a++);

  a = (4 + 2) * 3;
  printf("%d\n", ++a);

  a = (4 + 2) * -3;
  printf("%d\n", a);

  printf("float");
  float b;
  b = 10 / 3.0F;
  printf("%f\n", b);


  return 0;
}
