#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

  int i; // 4bytes alocados para um int32
  
  printf("Endereço de i: %p\ntamanho de i: %zu\n\n", &i, sizeof i);
  //endereço de i tem 8bytes 
  //64bits, o endereço em memoria depende da arquitetura
  int *p; //p é nulo
  printf("endereço de p: %p\ntamanho de p: %zu\n\n", &p, sizeof p);

  //= &i;
  //o conteudo de p tem 8bytes
  //pode receber o conteudo de i
  printf("p antes de receber o endereço de i %p\n", p);

  p = &i; // p recebe o endereço da variavel i

  printf("endereço de p: %p\ntamanho de p: %zu\n", &p, sizeof p);
  printf("conteudo de p com o mesmo endereço de i: %p\n", p);

  *p = 9;
  printf("%d\n", *p);

  int *j = NULL;
 
  j = malloc(sizeof (int)); //int 4bytes, ou j = malloc(4)
  //retorna um ponteiro para uma memoria alocada
  
  printf("Endereço para onde j aponta %p\n\n", j);

  *j = 9;
  printf(" depois de *j = 9\n");
  printf("O conteudo de j eh: %d\n", *j);
  free(j); // liberar memoria alocada para não causar bug

  return 0;
}
