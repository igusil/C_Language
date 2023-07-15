// password encrypt and decrypt

#include <stdio.h>

int main(void)
{
  char name[10];
  int pass;

  printf("Enter your name: ");
  scanf("%8s", &name);

  printf("%8s\n", name);

  printf("Enter your pass: ");
  scanf("%d", &pass);

  printf("Default pass: %d", pass);

  int new = pass += 12;

  printf("\nEncrypted pass: %d", new);

  int decrypt = pass -= 12;

  printf("\nDecrypted pass: %d", decrypt);

  return 0;
}
/*
 Encrypt one pass with operators
*/