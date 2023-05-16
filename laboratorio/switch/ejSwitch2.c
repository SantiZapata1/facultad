//no funciona cuando agregamos valos distinto de 0 en agregar calculo

#include <stdio.h>

int main(){

    float lado=0;
    int intentos=10;
    int agregarCalculo=0;

    while(agregarCalculo==0){
        while(intentos>0 && lado<=0){

                printf("\n ingrese en cm el lado del cuadrado:");
                scanf("%f", &lado);

                if(lado<=0){
                    intentos--;
                    printf("\n le quedan: %i intentos", intentos);
                }
        }

            if(lado>0){
                printf("\n El perimetro del cuadrado es: %.1f cm \n", lado*4);

                printf("\n ¿desea agregar otro numero? SI (0)/ NO (otra tecla)");
                scanf("%i", &agregarCalculo);

                intentos=10;
                lado=0;
                
            }else if(intentos<1){
                printf("\n No tiene mas intentos");

                printf("\n ¿desea agregar otro numero? SI (0)/ NO (otro caracter)");
                scanf("%i", &agregarCalculo);

                intentos=10;
                lado=0;

            }
        }

         

    return 0;
}