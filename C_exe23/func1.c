#include <stdio.h>
#include <stdlib.h>

//tipo_de_retorno nome(tipo_arg nome_arg, tipo_arg1, tipo_arg2, nome_arg2)

void tchau(void){
  printf("tchau\n");
  exit(1);
}
int soma(int n1, int n2, int n3) {
  int res;
  res = n1 + n2 + n3;
  return --res;
}

int main(void) {
  int num1, num2, num3;

  printf("Enter your num1: ");
  scanf("%d", &num1);

//  tchau();

  printf("Enter your num2: ");
  scanf("%d", &num2);
  printf("Enter your num3: ");
  scanf("%d", &num3);
  
  printf("soma: %d\n", soma(num1, num2, num3));
  printf("o endereco de soma eh: %p\n", soma );

  return(0);
}
