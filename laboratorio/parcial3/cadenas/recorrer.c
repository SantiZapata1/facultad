#include <stdio.h>
#include <string.h>

int main()
{
    char palabra[50];
    int i=0;

    /*Cargamos la Cadena*/
    printf("Ingrese Palabra: \n");
    scanf("%s",palabra);

    /* Recorremos la cadena y la mostramos en columna*/
    while(palabra[i]!='\0')
    {
        printf("\n");
        printf("%c",palabra[i]);
        i++;
    }

    return 0;
}