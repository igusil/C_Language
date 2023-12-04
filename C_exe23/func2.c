#include <stdio.h>
#include <stdlib.h>

void error(void) {
  printf("tchau\n");
  exit(1);
}

int main (void){
  int num1;

  printf("Digite o num1: ");
  scanf("%d", &num1);

//  printf("num1 %d\n", num1);
  if (num1 < 1) {
    printf("Erro: o num1 eh menor que 1\n");
    exit(1);
  }

  printf("Voce nasceu em %d\n", num1);

  return(0);
}
