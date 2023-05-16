#include <stdio.h>
#include <math.h>

int main(){
    
    int A, B, C;
    float resultado, BN, RAIZ;
    
    printf("\n ingrese A: ");
    scanf("%i",&A);
    printf("\n ingrese B: ");
    scanf("%i",&B);
    printf("\n ingrese C: ");
    scanf("%i",&C);
    
    resultado = (-B + sqrt(pow(B,2)-4*A*C)) / (2*A);

        printf("\n El 1er resultado  de la ecuacion cuadratica entre %i, %i, %i es: %f", A, B, C,resultado);

    resultado = (-B - sqrt(pow(B,2)-4*A*C)) / (2*A);
        printf("\n El 2do resultado de la ecuacion cuadratica entre %i, %i, %i es: %f", A, B, C, resultado);


    
    
}