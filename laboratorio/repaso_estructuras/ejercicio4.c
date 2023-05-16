#include <stdio.h>

int main(){

int contador = 1;
int acumulador=0;
int limitePeso;
int peso;

    printf("\n Ingrese el limite de peso para pescar: ");
    scanf("%i", &limitePeso);

    do{

        printf("\n Ingrese el peso del pescado %i: ", contador);
        scanf("%i", &peso);

        acumulador +=peso;
        contador++;
        
        if(acumulador<=limitePeso && peso>0){

            printf("\n peso total %i kg", acumulador);
            printf("\n restan %i kg para el limite", limitePeso-acumulador);

        }else{
            printf("\n error");

        }


    }while(acumulador<=limitePeso && peso>0);

    printf("\n pescados legales: %i", contador-2);
    printf("\n peso total de esos pescados legales: %i kg", acumulador-peso);





}