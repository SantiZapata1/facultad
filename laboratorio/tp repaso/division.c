#include <stdio.h>

int main (){

    int dividendo;
    int divisor;
    int resultado=0;

    printf("\n ingrese dividendo:");
    scanf("%i",&dividendo);
    printf("\n ingrese divisor:");
    scanf("%i",&divisor);

    printf("\n dividendo: %i",dividendo);
    printf("\n divisor: %i",divisor);

    while(dividendo>=divisor){

        dividendo=dividendo-divisor;
        resultado=resultado+1;

        //printf("\n divisor: %i",divisor);



    }
    
    printf("\n resultado de la division: %i",resultado);
    printf("\n resto: %i",dividendo);


}