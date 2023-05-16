#include <stdio.h>
#include <math.h>

int
main ()
{

  int num1, num2, eleccion;
  float resultado;

  printf ("\n ingrese el primer numero: ");
  scanf ("%i", &num1);
  printf ("\n ahora ingrese segundo numero: ");
  scanf ("%i", &num2);

  printf
    ("\nB?que operacion debea hacer con estos numeros?\n1)suma \n2)resta \n3)multiplicacion \n4)division \n5)salir\n");
  printf ("\n eleccion: ");
  scanf ("%i", &eleccion);

  if (eleccion == 1)
    {
      resultado = num1 + num2;
      printf ("\nla suma de %i y %i es: %.0f ", num1, num2, resultado);
    }
  else if (eleccion == 2)
    {
      resultado = num1 - num2;
      printf ("\nla resta de %i y %i es: %.0f ", num1, num2, resultado);
    }
  else if (eleccion == 3)
    {
      resultado = num1 * num2;
      printf ("\nla multiplicacion de %i y %i es: %.0f ", num1, num2,
	      resultado);
    }
  else if (eleccion == 4)
    {
      resultado = num1 / num2;
      printf ("\nla division de %i y %i es: %.2f ", num1, num2, resultado);
    }
  else if (eleccion == 5)
    {
      printf ("\nprograma finalizado");
    }
  else
    printf ("\nnumero ingresado incorrecto");




}