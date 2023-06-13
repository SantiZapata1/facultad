/*dado un arreglo de 11 elementos, cargarlos a una matriz de 3x3 a partir de la posición 2, y luego decir si la suma de la diagonal principal es impar, después guardar en otro arreglo los divisibles por 3 y ordenarlos de menor a mayor*/

#include <stdio.h>

#define FILAS 3
#define COLUMNAS 3

void sumatoriaMatriz(int filas, int columnas, int matriz[][columnas]);
void divisibles3(int filas, int columnas, int matriz[][columnas]);
int busqueda(int filas, int columnas, int matriz[][columnas]);

int main(){

    int arreglo[11]={1,2,3,9,6,7,4,33,8,12,5};
    int i = 2;
    int suma=0;

    int matriz[FILAS][COLUMNAS];

    //asignar valores del arreglo en la matriz
    for(int x=0;x<FILAS;x++){
        for(int y=0;y<COLUMNAS;y++){

            matriz[x][y]= arreglo[i] ;
            i++;
            printf("%i ",matriz[x][y]);

            if(x==y){
                suma=suma+matriz[x][y];
            }

        }
        printf("\n");
    }

    sumatoriaMatriz(FILAS,COLUMNAS, matriz);
    divisibles3(FILAS,COLUMNAS, matriz);
    busqueda(FILAS,COLUMNAS, matriz);



    return 0;
}

void sumatoriaMatriz(int filas, int columnas, int matriz[][columnas]){

    int suma=0;

    //filas
    for (int x = 0; x < filas; x++) {
        //columnas
        for (int y = 0; y < columnas; y++) {
            if(x==y){
                suma=suma+matriz[x][y];

            }
        }
    }
    
    //avisar si la suma de la diag principal es o no impar
    if(suma % 2 !=0){
        printf("la suma de los elementos de la diagonal principal es impar: %i\n",suma);
    }else{
        printf("la suma de los elementos de la diagonal principal es par: %i\n",suma);
    }


    //printf("sumatoria: %i\n",suma);
    //printf("promedio: %i\n",suma/(filas+columnas));

}

void divisibles3(int filas, int columnas, int matriz[][columnas]){

    int numDiv3;
    int longitud=0;
    int arreglo[filas*columnas];
    int indice=0;

    //filas
    for (int x = 0; x < filas; x++) {
        //columnas
        for (int y = 0; y < columnas; y++) {
            if(matriz[x][y] % 3 == 0){

                numDiv3=matriz[x][y];
                longitud++;
                arreglo[indice]=numDiv3;
                indice++;

            }
            
        }
    }

    printf("arreglo de divisibles3: ");

    for (int y = 0; y < longitud; y++) {
        printf("%d ", arreglo[y]);
    }

    //ordenar el arreglo
    for (int i = 0; i < longitud-1; i++) {
        for (int j = 0; j < longitud - i - 1; j++) {

            if (arreglo[j] < arreglo[j + 1]) {
                // Intercambiar los elementos si están en el orden incorrecto
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }

    printf("\narreglo ordenado: ");

    //mostrar arreglo ordenado
    for (int y = 0; y < longitud; y++) {
        printf("%d ", arreglo[y]);
    }

}

int busqueda(int filas, int columnas, int matriz[][columnas]){

    int numero;

    printf("\nque numero desea buscar en la matriz? ");
    scanf("%i", &numero);

    //filas
    for (int x = 0; x < filas; x++) {
        //columnas
        for (int y = 0; y < columnas; y++) {
            if(matriz[x][y]==numero){
                printf("\nese numero esta en la posicion:[%i][%i]\n ",x,y);

            }
        }
    }

    return numero;
}
