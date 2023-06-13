#include <stdio.h>

//funciones
int agregarNum(int cantidad, int arreglo[], int tamano);
int eliminarNum(int cantidad, int arreglo[], int tamano);

int main() {

    int longitud = 0;
    int rta;
    int rta2;
    int cant;
    int cant2;

    // Declarar arreglo
    do {
        printf("Ingrese la longitud del arreglo: ");
        scanf("%i", &longitud);
    } while (longitud < 1);
    int arreglo[longitud];

    // Inicializar arreglo
    for (int i = 0; i < longitud; i++) {
        printf("Ingrese dato de la posición %i: ", i);
        scanf("%i", &arreglo[i]);
    }

    // Mostrar elementos del arreglo
    for (int x = 0; x < longitud; x++) {
        printf("-%d\n", arreglo[x]);
    }


    //agregar numeros al arreglo
    do{
        printf("¿Desea ingresar más números? 1=sí/0=no : ");
        scanf("%i", &rta);
    }while(rta!=0 & rta!=1);

    if (rta == 1) {
        printf("¿Cuántos? ");
        scanf("%i", &cant);
        longitud = agregarNum(cant, arreglo, longitud);
    } else {
        printf("Ok\n");
    }

    //eliminar elementos del arreglo
    do{
        printf("¿Desea eliminar números? 1=sí 0=no: ");
        scanf("%i", &rta2);
    }while(rta2!=0 & rta2!=1);

    if (rta2 == 1) {
        printf("¿Cuántos? ");
        scanf("%i", &cant2);
        longitud = eliminarNum(cant2, arreglo, longitud);
    } else {
        printf("Ok\n");
    }

    

    return 0;
}

int agregarNum(int cantidad, int arreglo[], int tamano) {
    printf("Tamaño anterior del arreglo: %i\n", tamano);

    int nuevoTamano =tamano+cantidad;

    printf("Nuevo tamaño del arreglo: %i\n", nuevoTamano);

    for (int i = tamano; i < nuevoTamano; i++) {
        printf("Ingrese dato de la posición %i: ", i);
        scanf("%i", &arreglo[i]);
    }

     // Mostrar elementos del arreglo
    for (int x = 0; x < nuevoTamano; x++) {
        printf("-%d\n", arreglo[x]);
    }

    return nuevoTamano;
}

int eliminarNum(int cantidad, int arreglo[], int tamano) {

    printf("Tamaño anterior del arreglo: %i\n", tamano);

    int nuevoTamano =tamano-cantidad;

    printf("Nuevo tamaño del arreglo: %i\n", nuevoTamano);

     // Mostrar elementos del arreglo
    for (int x = 0; x < nuevoTamano; x++) {
        printf("-%d\n", arreglo[x]);
    }

    return nuevoTamano;
}
