#include <stdio.h>
int main(void)
{
  char var1[50];

  gets(var1);
  printf("Valor Digitado: %s\n", var1);

  return (0);
}
/**
 *  //não especifica limites de dados que serão passados
    //para a variável
 * code de exemplo para testar falha do gets
 * exploração de falha do gets com criação de exploit
 *
*/