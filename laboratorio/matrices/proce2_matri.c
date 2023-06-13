#include <stdio.h>

int main(){

    int arreglo[10]={1,2,3,4,5,6,7,8,9,10};
    int matriz[3][3];
    int indice=0;
    int sumaDiagonales=0;

    //cargar matriz
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            matriz[x][y]=arreglo[indice];
            indice++;
        }
    }

    //mostrar valores
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            printf("%i ",matriz[x][y]);
        }
        printf("\n");
    }

    //suma diagonales
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {

            if(x==y){
                sumaDiagonales=sumaDiagonales+matriz[x][y];
                printf("%i\n",matriz[x][y]);
            }
            if(x+y==3-1){
                sumaDiagonales=sumaDiagonales+matriz[x][y];
                printf("%i\n",matriz[x][y]);

            }
        }
    }
    printf("suma diagonales: %i\n",sumaDiagonales);


    return 0;
}