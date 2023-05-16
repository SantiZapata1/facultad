#include <stdio.h>

//declaracion de funciones y procedimientos
int esPrimo(int num);
int esPar(int array[],int tamaño);
int busqueda(int arreglo[], int longitud, int num);
int encontrar(int arreglo[], int longitud, int posicion);
void mostrarNum(int array[],int longitud);
void ordenarArreglo(int arreglo[],int longitud);

//funcion principal
int main(){

    int longitud=0;
    int posicion;
    int numero;

    do{
        printf("ingrese la longitud del arreglo:");
        scanf("%i",&longitud);
    }while(longitud<1);


    int arreglo[longitud];

    for(int i=0;i<longitud;i++){

        printf("ingrese dato de la posicion %i: ", i);
        scanf("%i",&arreglo[i]);

    }

    mostrarNum(arreglo,longitud);

    printf("\n de ese array, %i numeros son pares", esPar(arreglo,longitud));

    printf("\n que numero desea saber cuantas veces esta en el arreglo? ");
    scanf("%i",&numero);

    printf("\n el numero %i aparece %i veces en el arreglo. ", numero, busqueda(arreglo,longitud,numero));

    printf("\n en esa posicion esta el numero: %i \n", encontrar(arreglo,longitud,posicion));

    ordenarArreglo(arreglo,longitud);

    return 0;
}

//funcion primo
int esPrimo(int num) {
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

//procedimiento para mostrar elementos de un array
void mostrarNum(int array[],int longitud){

    printf("elementos y cuales son primos:\n");

    for(int i=0;i<longitud;i++){
        if(esPrimo(array[i])==1){
            printf("- %i  primo\n", array[i]);
        }else{
            printf("- %i \n", array[i]);
        }
    }
}

//funcion para saber si un arreglo es par
int esPar(int array[], int tamaño){

    int cantidad=0;

    for(int i=0;i<tamaño;i++){

        if(array[i]%2==0){
            cantidad++;
        }
    }
    return cantidad;
}

//funcion para buscar un numero
int busqueda(int arreglo[], int longitud, int num){

    int contador = 0;

    for(int i = 0;i<longitud;i++){

        if(arreglo[i]==num){
            contador++;
        }
    }
    return contador;

}

//funcion para conocer valor de una posicion
int encontrar(int arreglo[], int longitud, int posicion){

    do{
        printf("\n que posicion desea conocer? ");
        scanf("%i",&posicion);
    }while(posicion<0 || posicion>=longitud);

    return arreglo[posicion];
}

//procedimiento para ordenar arreglo
void ordenarArreglo(int arreglo[], int longitud) {
    int siguiente, temp;

    for (int actual = 0; actual < longitud - 1; actual++) {
        siguiente = actual + 1;

        while (siguiente < longitud) {
            if (arreglo[actual] > arreglo[siguiente]) {
                temp = arreglo[actual];
                arreglo[actual] = arreglo[siguiente];
                arreglo[siguiente] = temp;
            }
            siguiente++;
        }
    }

    printf("Arreglo ordenado: ");
    for (int i = 0; i < longitud; i++) {
        printf("%i ", arreglo[i]);
    }
    printf("\n");
}



