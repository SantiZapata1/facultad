#include <stdio.h>

int main()
{
    char nombre[10], apellidos[10];

    printf("Introduce tu nombre: ");
    scanf("%s",nombre);
    printf("Introduce tus apellidos: ");
    scanf("%s",apellidos);

    printf("Usted es %s %s\n",nombre,apellidos);

    return 0;
}