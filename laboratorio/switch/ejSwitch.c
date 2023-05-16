#include <stdio.h>

int main() {

   char operador;
   float num1, num2, resultado;

   printf("\n ********* MENU DE OPERACIONES *********\n");

   printf("\n 1_suma (+) \n 2_resta (-) \n 3_multiplicacion (*)\n 4_division (/)\n ");

   printf("\n elija una opcion:");
   scanf(" %c", &operador);

   printf("\n Introduce el primer número: ");
   scanf("%f", &num1);

   printf("Introduce el segundo número: ");
   scanf("%f", &num2);

   if(operador=="+" || operador=="-" || operador=="*" || operador=="/"){

      switch(operador) {
            case '+':
               resultado = num1 + num2;
               break;
            case '-':
               resultado = num1 - num2;
               break;
            case '*':
               resultado = num1 * num2;
               break;
            case '/':
               resultado = num1 / num2;
               break;
         }

      printf("\n %.2f %c %.2f = %.2f", num1, operador, num2, resultado);

   }else
   printf("caracter invalido");

}
