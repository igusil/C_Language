#include <stdio.h>

int main(void) {
  int a = 359;

  {
    int chave = 3;
    printf("chave: %d\n", chave);
  }

  printf("O resultado eh %d\n", a ^ chave);

  return(0);
}
