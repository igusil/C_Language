#include <stdio.h>
//coding in vi on pop os system
int main (void) {
  int num1,num2,sum,sub,multi,div,res;
  char equation;
  
  printf("Enter your operator for equations: ");
  scanf("%c", &equation);
  
  printf("Enter your first number: ");
  scanf("%d", &num1);
  printf("Enter your second number: ");
  scanf("%d", &num2);

  if(equation == '+') {
    sum = num1 + num2;
    printf("The result of your equation %d and %d is: %d\n",num1,num2,sum);
  }
  else if (equation == '-') {
    sub = num1 - num2;
    printf("The result of your equation %d and %d is: %d",num1,num2,sub);
  }
  else if (equation == '*') {
    multi = num1 * num2;
    printf("The result of your equation %d and %d is: %d",num1,num2,multi);
  }
  else if (equation == '/') {
    div = num1 / num2;
    printf("The result of your equation %d and %d is: %d", num1,num2,div);
  }
  else if (equation == '%') {
    res = num1 % num2;
   printf("The result of your equation %d and %d is: %d",num1,num2,res); 
  }

  return 0;

}
/**/
