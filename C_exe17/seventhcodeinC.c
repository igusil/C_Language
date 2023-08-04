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




*/
