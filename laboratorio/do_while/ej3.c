#include <stdio.h>

int main (){

    int contador=0;
    int acumulador=0;
    int numero;
    int respuesta;

    do{
        printf("\n ingrese un numero: ");
        scanf("%i",&numero);

        contador++;
        acumulador=acumulador+numero;

        printf("\n desea ingresar otro numero? 1/0 ");
        scanf("%i",&respuesta);

    }while(respuesta==1);

    printf("\n ha introducido %i numeros", contador);
    printf("\n la suma de esos numeros es: %i", acumulador);


}