#include <stdio.h>
#include <stdlib.h>
//#include <limits.h>

void *malloc_s(size_t size) {
  void *ptr;
  ptr = malloc(size);
  if (ptr == NULL)
  {
   fprint(stderr, "memoria insulficiente\n");
   exit(1);
  }
  return ptr;
}

int main (int argc, char *argv[]) {
  int *p;

  p = malloc_s(sizeof(int)); // { malloc } retorna o endereço para a memoria alocada
  *p = 9; 
  free(p); //libera a memoria alocada 
  printf("%d\n", *p);

  return (0);
}
