#include <stdio.h>
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
