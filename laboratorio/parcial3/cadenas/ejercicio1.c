#include <stdio.h>

int main(){

    char cadena [20];
    char nombre1 [20];
    char nombre2 [20];
    int i=0;

    printf("Por favor, ingrese dos nombres separados por puntos:\n");
    scanf("%s",cadena);

    printf("cadena ingresada:");
    printf("%s",cadena);

    while(cadena[i]!='.')
    {        
        nombre1[i]=cadena[i];
        printf("\n");
        printf("%c", cadena[i]);
        i++;
    }

    int x=0;

    while(cadena[i+1]!='.')
    {        
        nombre2[x]=cadena[i+1];
        printf("\n");
        printf("%c", cadena[i+1]);
        i++;
        x++;
    }

    printf("\nprimer nombre:");
    printf("%s",nombre1);

    printf("\nsegundo nombre:");
    printf("%s",nombre2);


    return 0;
}