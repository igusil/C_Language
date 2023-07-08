#include <stdio.h>
int main(void)
{
  int meuarray[6];

  printf("Digite a nota do aluno 1: ");
  scanf("%d", &meuarray[0]);
  printf("Digite a nota do aluno 2: ");
  scanf("%d", &meuarray[1]);
  printf("Digite a nota do aluno 3: ");
  scanf("%d", &meuarray[2]);
  printf("Digite a nota do aluno 4: ");
  scanf("%d", &meuarray[3]);
  printf("Digite a nota do aluno 5: ");
  scanf("%d", &meuarray[4]);
  printf("Digite a nota do aluno 6: ");
  scanf("%d", &meuarray[5]);

  printf("--------------------------");

  printf("Nota do aluno 1: %d\n", meuarray[0]);
  printf("Nota do aluno 2: %d\n", meuarray[1]);
  printf("Nota do aluno 3: %d\n", meuarray[2]);
  printf("Nota do aluno 4: %d\n", meuarray[3]);
  printf("Nota do aluno 5: %d\n", meuarray[4]);
  printf("Nota do aluno 6: %d\n", meuarray[5]);

  return 0;
}
