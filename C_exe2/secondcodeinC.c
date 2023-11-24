#include <stdio.h>
int main(void)
{
  int array[2];
  char name1[10];
  char name2[10];

  printf("first student name: ");
  scanf("%8s", name1);
  printf("first student grade: ");
  scanf("%d", &array[0]);

  printf("second student name: ");
  scanf("%8s", name2);
  printf("second student grade 2: ");
  scanf("%d", &array[1]);

  printf("Loop\n");

  if (array[0] <= 6)
  {
    printf("\nfirst student disapproved: %8s", name1);
  }
  if (array[1] <= 6)
  {
    printf("\nsecond student disapproved %8s", name2);
  }

  return 0;
  /*
  another example:
  -----------------

  char name[50];
  int x;
  scanf("%49s", name);

  printf("Before for\n");

  for (x=0; x<49; x++){
      if(name[x] == 0) {
          break;
      printf("%c", nome[x]);
      }
      printf("\n");
      printf("after for\n");
  }
  */
}
/**/
