#include <stdio.h>

int main (){

    float dinero=0;

    float mon50=0.50;
    float mon10=0.10;
    float mon5=0.05;
    float mon1=0.01;

    int cont50=0;
    int cont10=0;
    int cont5=0;
    int cont1=0;

    printf("\n Bienvenido/a a la maquina expendedora");

    do{

        printf("\n Por favor, ingrese el dinero en pesos por favor: $");
        scanf("%f",&dinero);

        if(dinero==0){
            printf("\n monto 0 invalido");
        }else if(dinero<0){
            printf("\n monto invalido, no puede ingresar numeros negativos");
        }


    }while(dinero <= 0);

    printf("\n monto ingresado: $%.2f, se le devuelven: \n", dinero);

    while(dinero>=mon50){

        dinero=dinero-mon50;
        cont50=cont50+1;

    }
    printf("\n - %i monedas de 50 c",cont50);

    while(dinero>=mon10){

        dinero=dinero-mon10;
        cont10=cont10+1;

    }
    printf("\n - %i monedas de 10 c",cont10);

    while(dinero>=mon5){

        dinero=dinero-mon5;
        cont5=cont5+1;

    }
    printf("\n - %i monedas de 5 c",cont5);

    while(dinero>=mon1){

        dinero=dinero-mon1;
        cont1=cont1+1;

    }
    printf("\n - %i monedas de 1 c \n",cont1);

    printf("\n dinero: $%.2f \n",dinero);




}