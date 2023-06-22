#include <stdio.h>

#define CANTIDAD 5

int main(){

    int x=1;

    int dni[CANTIDAD];
    char apellidos[CANTIDAD][20];
    char nombres[CANTIDAD][20];
    int nota[CANTIDAD];

    while(x<=CANTIDAD){

        printf("ingrese los datos del alumno %i\n",x);

        printf("nombre:");
        scanf("%s", nombres[x]);

        printf("\napellido:");
        scanf("%s", apellidos[x]);

        x++;
    }

    printf("Nombres ingresados:\n");
    for (int i = 0; i < CANTIDAD; i++) {
        printf("%s\n", nombres[i]);
    }
    printf("\napellidos ingresados:");
    for (int i = 0; i < CANTIDAD; i++) {
        printf("%s\n", apellidos[i]);
    }



    return 0;
}