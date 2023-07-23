#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdlib.h>

int main(void)
{
  // cada variavel do tipo inteiro ocupa 4
  // int c[3]; //3 elements with int = 12
  // unsigned char c[3];
  // long int c[3]; 8 bytes cada
  int c[3];

  printf("O tamanho de c eh: %zu\n", sizeof c);
  printf("O número de elementos de c eh: %zu\n", sizeof c / sizeof c[0]);

  c[0] = 'A';
  c[1] = 0x42;
  c[2] = 0x66;

  printf("O elemento 0 de c eh: %c\n", c[0]);
  printf("O elemento 1 de c eh: %c\n", c[1]);
  printf("O elemento 2 de c eh: %c\n", c[2]);

  printf("O endereço do array c em memória: %p\n", c);
  printf("O endereço do array &c em memória: %p\n", &c);
  printf("O endereço do primeiro elemento do array c em memória: %p\n", &c[0]);
  printf("O endereço do segundo elemento do array c em memória: %p\n", &c[1]);

  return 0;
}
