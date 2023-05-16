#include <stdio.h>

float distanciaEuclidea(float puntoA, float puntoB);
void imprimeDistancia(float distancia);


int main(){

    float numero1;
    float numero2;

    printf("Ingrese un numero: \n");
    scanf ("%f",&numero1);
    printf("Ingrese otro numero: \n");
    scanf ("%f",&numero2);

    imprimeDistancia(distanciaEuclidea(numero1,numero2));


    return 0;
}

float distanciaEuclidea(float puntoA, float puntoB){

    float resto = 0;

    if(puntoA>=puntoB){
        resto=puntoA-puntoB;
    }else{
        resto=puntoB-puntoA;
    }

    return resto;

}

void imprimeDistancia(float distancia){

    printf("distancia: %f ", distancia);

}
