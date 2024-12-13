#include <stdio.h>
#include "funciones.h"

void suma(double num1, double num2){
    printf("%.1lf + %.1lf = %.1lf\n", num1, num2, num1 + num2);
}
void resta(double num1, double num2){
    printf("%.1lf - %.1lf = %.1lf\n", num1, num2, num1 - num2);
}
void multiplicacion(double num1, double num2){
    printf("%.1lf * %.1lf = %.1lf\n", num1, num2, num1 * num2);
}

void division(double num1, double num2){
    if(num2 == 0){
        printf("error: division by zero");
    }  else {
        printf("%.1lf / %.1lf = %.1lf\n", num1, num2, num1 / num2);
        }  
}