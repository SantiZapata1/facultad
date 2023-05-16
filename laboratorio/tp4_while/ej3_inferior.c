/*Dados dos números donde el primero y el último son límites de un intervalo, mostrar por pantalla los números
comprendidos entre dicho intervalo. La operación se realizará una vez comprobado que los valores ingresados sean correctos.
En caso que los valores de los límites ingresados no sean adecuados, repetir la operación de ingreso hasta que sean
adecuados.*/

#include <stdio.h>

int main(){

    int numInf=1;
    int numSup=0;

    while(numInf>=numSup){

        printf("ingrese limite inferior: ");
        scanf("%i", &numInf);

        printf("ingrese limite superior: ");
        scanf("%i", &numSup);

    }

    printf("numero inferior: %i, numero superior: %i \n ", numInf, numSup);

    while(numInf<=numSup){

        printf("%i - ", numInf);
        numInf++;

    }





}