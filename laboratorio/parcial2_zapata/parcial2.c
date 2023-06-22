#include <stdio.h>

//define de filas y columnas
#define FILAS 3
#define COLUMNAS 3

//procedimientos y funciones
void mostrarMatriz(int filas, int columnas, int matriz[][columnas]);
int sumaDiagonal(int filas, int columnas, int matriz[][columnas]);
int divisibles3(int numero);

int main(){

    //definicion del arreglo
    int arreglo[11]={1,3,2,6,4,9,3,2,7,8,15};
    int arreglo2[11];

    //declaracion de la matriz
    int matriz[FILAS][COLUMNAS];

    //variables
    int i = 2;
    int numero;
    int resultado;
    int indice=0;
    int longitud=0;

    //asignar valores del arreglo en la matriz
    for(int x=0;x<FILAS;x++){
        for(int y=0;y<COLUMNAS;y++){

            matriz[x][y]= arreglo[i];
            i++;

        }
    }

    //funcionmostramos matriz
    mostrarMatriz(FILAS,COLUMNAS,matriz);

    //funcion suma de la diagonal
    int r = sumaDiagonal(FILAS,COLUMNAS,matriz);
    if(r==1){
        printf("\nla suma de los elementos de la diagonal principal es impar\n");
    }else{
        printf("\nla suma de los elementos de la diagonal principal es par\n");
    }

    //crear arreglo con elementos divisibles por 3
     for(int x=0;x<FILAS;x++){
        for(int y=0;y<COLUMNAS;y++){

            numero=matriz[x][y];
            resultado= divisibles3(numero);

            if(resultado!=0){
                arreglo2[indice]=resultado;
                indice++;
                longitud++;
            }
        
        }
    }

    //mostramos arreglo divisibles3
    printf("\nEn el arreglo se cargaron %i numeros, y son: ",longitud);
    for(int x=0;x<longitud;x++){
        printf("%i ",arreglo2[x]);
    }

    //ordenar el arreglo
    for (int i = 0; i < longitud-1; i++) {
        for (int j = 0; j < longitud - i - 1; j++) {

            if (arreglo2[j] > arreglo2[j + 1]) {
                // Intercambiar los elementos si están en el orden incorrecto
                int temp = arreglo2[j];
                arreglo2[j] = arreglo2[j + 1];
                arreglo2[j + 1] = temp;
            }
        }
    }

    //mostrar arreglo ordenado
    printf("\narreglo ordenado: ");
    for (int y = 0; y < longitud; y++) {
        printf("%d ", arreglo2[y]);
    }

    printf("\n");

    return 0;
}

//procedimiento mostrar matriz
void mostrarMatriz(int filas, int columnas, int matriz[][columnas]){
    printf("\n");

    for(int x=0;x<FILAS;x++){
        for(int y=0;y<COLUMNAS;y++){
            printf("%i ",matriz[x][y]);
        }
        printf("\n");
    }
    
}

//procedimiento suma diagonal
int sumaDiagonal(int filas, int columnas, int matriz[][columnas]){

    int suma=0;
    //calculamos suma
    for (int x = 0; x < filas; x++) {
        for (int y = 0; y < columnas; y++) {
            if(x==y){
                suma=suma+matriz[x][y];
            }
        }
    }

    //retornamos si es o no impar
    if(suma % 2 !=0){
        return 1;
    }else{
        return 0;
    }
}

//funcion divisible por 3
int divisibles3(int numero){

    if(numero % 3==0){
        return numero;
    }else{
        return 0;
    }

}