#include <stdio.h>
#define pos 5

int main()
{
    int i;
    char car,nom[pos];
    i=0;

    /* cargar una cadena caracter a caracter*/
    while (i <pos)
    {
        printf ("Ingrese caracter:%d\n",i+1);
        scanf("%c\n",&car);
        nom[i]=car;
        i++;
    }
    
    i=0;

    /* mostrar una cadena caracter a caracter*/
    while (i < pos)
    {
        printf (" caracter:%c\n",nom[i]);
        i++;
    }

    return 0;
}