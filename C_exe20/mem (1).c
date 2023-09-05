#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MALLOC(ptr, size) { \
  ptr = malloc(size); \
  if (ptr == NULL) { \
    fprintf(stderr, "memoria insulficiente\n"); \
    exit(1); \
  } \
}
//malloc // alocação dinamica de memoria
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
  int *p, i;

 // p = malloc_s(sizeof(int)); // { malloc } retorna o endereço para a memoria alocada
  MALLOC(p, 5 * sizeof(int));
  memset(p, 0, 5 * sizeof(int));//preenchendo os 20bytes com zeros //escrever 0 em P

  *(p+0) = 9;
  *(p+1) = 43;
  *(p+2) = 65;
  *(p+3) = 11;
  *(p+4) = 23;
  *(p+5) = 90;

  for (i=0; i<5; i++)
    printf("%d\n", *(p+i));

  p = realloc(p, sizeof(int) * 6); //ponteiro para sizeof int*6, realoc
  *(p+5) = 20;
  //printf("%d\n", *p);
  //printf("%d\n", *(p+1));
  free(p); //libera a memoria alocada 

  return (0);
}
