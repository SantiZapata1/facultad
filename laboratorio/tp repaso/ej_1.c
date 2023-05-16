//Realizar un programa que pida un número y diga todos sus divisores.

#include <stdio.h>
#include <stdlib.h>

int main (){

    int numero;
    int i;
    int contador=0;

    do{
        printf("\n Ingrese un numero, por favor: ");
        scanf("%d",&numero);

        if(numero==0){
            printf("\n el 0 no tiene divisores, ingrese otro numero ");

        }

    }while(numero==0);
    

    for(i=1;i<= abs(numero);i++){
    //printf("\n vuelta %i ",i);

        int resultado = numero % i;

        if(resultado == 0){
            contador=contador+1;
            printf("\n%d | %d |", i, -i);
           
        }

    }
    printf("\n el nro %d tiene %i divisores ",numero, contador);



}