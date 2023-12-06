#include <stdio.h>
#include <stdlib.h>

void tchau(char msg[]){
  printf(msg);
  exit(1);
}

int main (void){
  int num1;

  printf("Digite o num1: ");
  scanf("%d", &num1);

  if (num1 < 1)
    tchau("Erro: o num1 eh menor que 1\n");
  else if (num1 < 1900)
    tchau("vc eh mto velho\n");

  printf("Voce nasceu em %d\n", num1);

  return(0);
}
