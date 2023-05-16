#include <stdio.h>

int main (){

    int acumulador=0;
    int dolares=10;
    int edad=11;

    do{
        acumulador+=dolares;
        dolares=dolares*2;
        edad++;

        printf("\n edad: %i ",edad);
        printf("\n cantidad recibida en esa edad: %i ", acumulador);
        printf("\n total recibido hasta esa edad: %i", dolares);

    }while(dolares<=1000);

    dolares=dolares/2;

    printf("\n ultima edad feliz: %i ",edad);
    printf("\n cantidad recibida: %i ", dolares);
    printf("\n total recibido: %i", acumulador);


}