#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
  
  char s[30] = "igor"; //0-29

  for (int i = 0; i < 30; i++)
  
    printf("%x ", s[i]);
    printf("%x\n", s[29] );
    printf("%x\n", *(s+29) );

  putchar('\n'); //ultiza char
  
  return (0);
}
