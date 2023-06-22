#include <string.h>
#include<stdio.h>

int main() {
    char destino[15];
    char origen[] = "Hola, mundo!";

    strlcpy(destino, origen, sizeof(destino));

    // Imprimir el contenido de destino
    printf("%s\n", destino);

    return 0;
}
