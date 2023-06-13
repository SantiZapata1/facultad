#include <stdio.h>

int main(){

    int matriz[2][3]={{2,3,5},{7,1,2}};
    int matriz2[2][2]={1,2,3,4};

    // Mostrar elementos de la matriz

    //filas
    for (int x = 0; x < 2; x++) {
        //columnas
        for (int y = 0; y < 3; y++) {
            printf("matriz [%i][%i]= %i \n",x,y,matriz[x][y] );
        }
    }

    //filas
    for (int x = 0; x < 2; x++) {
        //columnas
        for (int y = 0; y < 3; y++) {
            printf("%i ",matriz[x][y]);
        }
        printf("\n");
    }

    return 0;
}