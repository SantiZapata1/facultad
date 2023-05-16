/*Calcular el total de una factura que un cliente debe pagar en una librería. Ingresar por teclado la cantidad de
líneas de la factura. Mostrar por pantalla el total parcial y final.*/

#include <stdio.h>

int main(){

    int cantLineas=0;
    int cantProducto=0;
    int precioProducto=0;
    int totalParcial=0;
    int totalFinal=0;
    int x=1;

    printf("ingrese cantidad de lineas de la factura: ");
    scanf("%i", &cantLineas);

    while(x<=cantLineas){

        printf("\n ingrese precio del producto (%i/%i): ",x,cantLineas);
        scanf("%i", &precioProducto);

        printf(" ingrese cantidad del producto: ");
        scanf("%i", &cantProducto);

        totalParcial=precioProducto*cantProducto;
        totalFinal=totalFinal+totalParcial;

        printf("\n total parcial: $%i \n", totalParcial);

        x++;
    }

    printf("\n total final: $%i \n ",totalFinal);

}