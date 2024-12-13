#include <stdio.h>
#include "funciones.h"
int main() {
  char operator;
  double num1, num2;
  int continuar;
    do{
      printf("enter an operator (+, -, *, /): ");
      scanf("%c", &operator);

      printf("enter two numbers: ");
      scanf("%lf %lf", &num1, &num2);
      switch (operator){
        case '+':
          suma(num1,num2);
          break;
        case '-':
          resta(num1,num2);
          break;
        case '*':
          multiplicacion(num1,num2);
          break;
        case '/':
          division(num1,num2);
          break;
        default:
          printf("error: invalid operator");  
        }
      printf("Do you want to carry out another operation?\n");
      do
      {
        printf("1 = yes\n2 = no\n");
        scanf("%d", &continuar);
        if (continuar<0)
        {
          printf("invalid number\n");
        }
        
      } while (continuar<=0 && continuar>2);
      
    }while(continuar == 1);
  printf("thank u :)\n");
  return 0;
}
