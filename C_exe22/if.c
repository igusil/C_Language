 #include <stdio.h>

int main(void) {
  int a = 359;
  int chave = 3;

  if (-1 == a && a < 400) {
    
    printf("chave: %d\n", chave);
    printf("oi\n");
  }
  else  
    printf("avaliacao do if deu FALSE\n");

  printf("a: %d\n", a);

  return(0);
}
