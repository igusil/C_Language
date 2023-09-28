#include <stdio.h>
#include <stdlib.h>

int main (void) {
  
  int numberOne, numberTwo, sum, sub, multi, div;
  char equation;
  
  printf("What equation do you want to use now? ");
  scanf("%c", &equation);
    
  printf("Enter your first number: ");
  scanf("%d", &numberOne);

  printf("Enter your second number: ");
  scanf("%d", &numberTwo);

  if (equation == '+') {
    int sum = numberOne + numberTwo; 
    printf("Result of %d + %d = %d\n", numberOne, numberTwo, sum);
  }
  else if (equation == '-') {
    int sub = numberOne - numberTwo;
    printf("Result of %d - %d = %d\n", numberOne, numberTwo, sub);
  }
  else if (equation == '*') {
    int multi = numberOne * numberTwo;
    printf("Result of %d * %d = %d\n", numberOne, numberTwo, multi);
  }
  else if (equation == '/') {
    int div = numberOne / numberTwo;
    printf("Result of %d / %d = %d\n", numberOne,numberTwo,div);
  }
  return(0);
}
