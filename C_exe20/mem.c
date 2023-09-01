#include <stdio.h>
#include <stdlib.h>
#define MALLOC(ptr, size) { \
  ptr = malloc(size); \
  if (ptr == NULL) { \
    fprintf(stderr, "memoria insulficiente\n"); \
    exit(1); \
  } \
}
void *malloc_s(size_t size) {
  void *ptr;
  ptr = malloc(size);
  if (ptr == NULL)
  {
   fprintf(stderr, "memoria insulficiente\n");
   exit(1);
  }
  return ptr;
}

int main(int argc, char *argv[]) {
  int *p;

 // p = malloc_s(sizeof(int)); // { malloc } retorna o endereço para a memoria alocada
  MALLOC(p, sizeof(int));
  *p = 9; 
  printf("%d\n", *p);
  free(p); //libera a memoria alocada 

  return (0);
}
