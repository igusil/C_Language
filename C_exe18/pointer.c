#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>
void imprime( char *s) {
  while (*s != '\0') //enquanto s for diferente de 0  
    putchar(*s++); // putchar pega valor *s e passa para putchar que imprime um char na tela em forma de char e incrementa s+1
}

int main (void) {

  char s[] = "igor";
  char *t = "igor";
  char u[] = { 0x69, 0x67, 0x6F, 0x72, '\n',0x00 }; //array char

  puts(s);  
  puts(t);
  imprime(u);
  
  return 0;
} 
