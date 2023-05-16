#include <stdio.h>

int main(){

    int numero=6;
    int i=0;
    int acumulador=0;

    for(i=1;i<numero;i++){

        if(numero % i == 0){

            acumulador=acumulador+i;

        }

    }

    if(numero==acumulador){
        printf("\n el %i es perfecto ",numero);
    }else{
        printf("\n el %i no es perfecto ",numero);

    }






}