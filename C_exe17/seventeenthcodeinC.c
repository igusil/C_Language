#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdint.h>

int main(void)
{
  // unsigned int i; //inteiro positivo, sem sinal
  /*
  print:
  printf("O valor de i eh: %u\n", i);
    i++;
    if (i < 3)
     goto print;
  */
  for (unsigned int i = 0; i < 7; i++)
  {
    printf("O valor de i eh: %u\n", i);
  }

  return 0;
}
//**********************************************
/*
1 #include <stdio.h>
 2 #include <stdlib.h>
 3 #include <stdint.h>
 4 #include <limits.h>
 5
 6 int main (void) {
 7   unsigned int i = 0;
 8
 9   for ( ; i < 3 ; i++) {
10     printf("O valor de i eh: %u\n", i);
11
12   }
13   while (i < 2) {
14     printf("O valor de i eh: %u\n", i++);
15   }
16
17   return 0;
18 }

//*************************************************

 #include <stdio.h>
  2 #include <stdbool.h>
  3 #include <stdlib.h>
  4 #include <stdint.h>
  5 #include <limits.h>
  6
  7 int main (void) {
  8
  9  //unsigned int i = 0;
 10  /*
 11   do        //make while printf for i<3
 12     printf("O valor de i eh: %u\n", i++);
 13   while (i < 3);
 14   */

// *****************************************
/*
18   /*while (true)
19   {
20     printf("O valor de i eh: %u\n", i);
21     if (i >= 2)
22       break;
23     i++;
24   }
25   */
/*
27   for (unsigned i = 0 ; i <= 2 ; i++) {
28     printf("O valor de i eh: %u\n", i);
29   }
30
31
32   return 0;
33 }
//************************************************
 7 int main (void) {
  8   int a[] = { 2017, 2018, 2019};
  9
 10   for ( int i = 0; i < 3 ; i++) {
 11     printf("%d\n", a[i]);
 12   }
 13
 14   return 0;
 15 }

*/
