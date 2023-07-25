#include <stdio.h>
// calculator in c
int main(void)
{
  int num1, num2, sum, sub, multi, div, res;
  char equacao;

  printf("Enter your operator for equation: ");
  scanf("%c", &equacao);

  printf("Enter your first number: ");
  scanf("%d", &num1);
  printf("Enter your second number: ");
  scanf("%d", &num2);

  if (equacao == '+')
  {
    int sum = num1 + num2;
    printf("The result of %d  + %d is %d:", num1, num2, sum);
  }
  else if (equacao == '-')
  {
    int sub = num1 - num2;
    printf("The result of %d - %d is %d:", num1, num2, sub);
  }
  else if (equacao == '*')
  {
    int multi = num1 * num2;
    printf("The result of %d * %d is %d:", num1, num2, multi);
  }
  else if (equacao == '/')
  {
    int div = num1 / num2;
    printf("The result of %d / %d is %d:", num1, num2, div);
  }
  else if (equacao == '%')
  {
    int res = num1 % num2;
    printf("The result of %d and %d is %d", num1, num2, res);
  }

  return 0;
}

/*  #include <stdio.h>
    #include <limits.h>
  3 #include <stdint.h>
  4 #include <stdlib.h>
  5
  6 int main (void) {
  7   int n[2];
  8   int sum,sub,multi,div,res;
  9   char operator[5];
 10   char equation;
 11
 12   printf("Enter your option(+ , - , * , / ): ");
 13   scanf("%c", &equation);
 14
 15   printf("Enter your first number: ");
 16   scanf("%d", &n[0]);
 17   printf("Enter your second number: ");
 18   scanf("%d", &n[1]);
 19
 20   if(equation == '+') {
 21     scanf("%c", &operator[0]);
 22     sum = n[0] + n[1];
 23     printf("The result of %d and %d is: %d\n",n[0],n[1],sum);
 24   }
 25   else if (equation == '-') {
 26     scanf("%c", &operator[1]);
 27     sub = n[0] - n[1];
 28     printf("The result of %d and %d is: %d\n", n[0],n[1],sub);
 29   }
 30   else if (equation == '*') {
 31     scanf("%c", &operator[2]);
 32     multi = n[0] * n[1];
 33     printf("The result of %d and %d is %d", n[0],n[1],multi);
 34   }
 35   else if (equation == '/') {
 36     scanf("%c", &operator[3]);
 37     div = n[0] / n[1];
 38     printf("The result of %d and %d is %d", n[0],n[1],div);
 39   }
 40
 41   return 0;
 42 }

*/