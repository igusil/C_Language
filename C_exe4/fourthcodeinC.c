#include <stdio.h>
int main(void)
{
  char name[50];
  int x;

  // 49chars
  scanf("%49s", name);

  for (x = 0; x < 50; x++)
  {
    if (name[x] == 0)
      break;
    if (name[x] == 'a')
      continue;
    printf("%c", name[x]);
  }
  printf("\n");
  return 0;
}

/*
#include <stdio.h>
int main (void) {,
    int x=0;

    Aqui:
        printf("%X",x);
        x++;
        if (x<15)
            goto Aqui;
        printf("end");

        return 0;
}

//goto debuging with IDA, example goto, JMP assembly
*/
/**/
