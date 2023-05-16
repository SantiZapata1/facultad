#include <stdio.h>

int main(){

    int numero = 10;
    int *puntero;

    puntero = &numero;  // Asignar la dirección de memoria de 'numero' al puntero

    printf("El valor de numero es: %d\n", *puntero);  // Acceder al valor de 'numero' a través del puntero


}