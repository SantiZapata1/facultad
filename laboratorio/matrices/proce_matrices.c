#include <stdio.h>

void cargarMatriz (int filas, int columnas, int matriz[][columnas]);
void mostrarMatriz (int filas, int columnas, int matriz[][columnas]);
void sumatoriaMatriz (int filas, int columnas, int matriz[][columnas]);
void elementosPares (int filas, int columnas, int matriz[][columnas]);

int main(){

    int filas;
    int columnas;

    // cantidad filas
    do {
        printf("Ingrese la cantidad de filas de la matriz: ");
        scanf("%i", &filas);
    } while (filas < 1);

    // cantidad columnas
    do {
        printf("Ingrese la cantidad de columnas de la matriz: ");
        scanf("%i", &columnas);
    } while (columnas < 1);

    int matriz[filas][columnas];

    cargarMatriz(filas,columnas,matriz);
    mostrarMatriz(filas,columnas,matriz);
    sumatoriaMatriz(filas,columnas,matriz);
    elementosPares(filas,columnas,matriz);


    return 0;
}

void cargarMatriz(int filas, int columnas, int matriz[][columnas]){

    int valor;

    //filas
    for (int x = 0; x < filas; x++) {
        //columnas
        for (int y = 0; y < columnas; y++) {
            printf("cargar valor [%i][%i]: ",x,y );
            scanf("%i", &valor);
            matriz[x][y]=valor;
        }
    }

}
void mostrarMatriz(int filas, int columnas, int matriz[][columnas]){

    //filas
    for (int x = 0; x < filas; x++) {
        //columnas
        for (int y = 0; y < columnas; y++) {
            printf("%i ",matriz[x][y]);
        }
        printf("\n");
    }

}

void sumatoriaMatriz(int filas, int columnas, int matriz[][columnas]){

    int suma=0;

    //filas
    for (int x = 0; x < filas; x++) {
        //columnas
        for (int y = 0; y < columnas; y++) {
            suma=suma+matriz[x][y];
        }
    }
    
    printf("sumatoria: %i\n",suma);
    printf("promedio: %i\n",suma/(filas+columnas));

}

void elementosPares(int filas, int columnas, int matriz[][columnas]){

    int numPar;
    int longitud=0;
    int arreglo[20];
    int indice=0;

    //filas
    for (int x = 0; x < filas; x++) {
        //columnas
        for (int y = 0; y < columnas; y++) {

            if(matriz[x][y] % 2 == 0){

                numPar=matriz[x][y];
                longitud++;
                arreglo[indice]=numPar;
                indice++;

            }

        }
    }

    printf("arreglo de pares: ");

    for (int y = 0; y < longitud; y++) {
        printf("%d ", arreglo[y]);
    }


}