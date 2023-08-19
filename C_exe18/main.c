#include <stdio.h>

int main (int argc, char *argv[]) {

  int i; // 4bytes alocados para um int32
  
  printf("Endereço de i: %p\ntamanho de i: %zu\n\n", &i, sizeof i);

  int *p;
  printf("endereço de p: %p\ntamanho de p: %zu\n", &p, sizeof p);

  //= &i;
  
  *p = 9;
  printf("%d\n", *p);

  return 0;
}
