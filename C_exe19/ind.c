#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
  
  char s[10] = "igor"; //0-29

  for (int i = 0; i < 30; i++)
  
    printf("%x\n", s[29] );
    printf("%x\n", *(s+29) );

    printf("%x\n", 29[s] );
    printf("%x\n", *(29+s) );

  
  return (0);
}
