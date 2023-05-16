#include <stdio.h>

 int main(){

     int numero;
     int cantidad;
     int i;

    printf("\n ingrese que tabla desea saber: ");
    scanf("%i", &numero);
    printf("\n ingrese cuantos numero de esa tabla desea saber: ");
    scanf("%i", &cantidad);

     for(i=1;i<=cantidad;i++){

         printf("\n %i * %i = %i", numero,i, numero*i);

     }



    return 0;
 }