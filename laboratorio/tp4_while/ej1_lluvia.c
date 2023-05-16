//Se ingresa por teclado la cantidad de agua caída, en milímetros día a día durante una semana. Se pide
//determinar el día de mayor lluvia, el de menor y el promedio.

#include <stdio.h>

int main(){

    float cantLluvia=0;
    float promedio;
    float suma=0;
    float cantidadMayor=0;
    float cantidadMenor=1000000000;

    int dia=0;
    int diaMayor=0;
    int diaMenor=0;

    
    while(dia<7){

        printf("\n ingrese cantidad de agua caida el dia %i: ",dia);
        scanf("%f", &cantLluvia);

        suma=suma+cantLluvia;
        promedio=suma/7;

        if(cantLluvia>cantidadMayor){

            cantidadMayor=cantLluvia;
            diaMayor=dia;

        }else if(cantLluvia<cantidadMenor){

            cantidadMenor=cantLluvia;
            diaMenor=dia;

        }

        dia++;

    }

    printf("\n promedio semanal de lluvia: %.2f ml",promedio);
    printf("\n el dia que menos llovio fue el dia: %i",diaMenor);
    printf("\n el dia que mas llovio fue el dia: %i",diaMayor);









}

