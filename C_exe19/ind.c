#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
  
  char s[10] = "igor"; //0-6
 
    printf("%c\n", s[4] );
    printf("%c\n", *(s+4) );

    printf("%c\n", 4[s] );
    printf("%c\n", *(4+s) );
  
  return (0);
}
