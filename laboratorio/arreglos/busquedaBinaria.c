#include <stdio.h>

// Función de búsqueda binaria
int busquedaBinaria(int arr[], int inicio, int fin, int objetivo) {
    while (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;

        // Si el elemento medio es igual al objetivo, se ha encontrado
        if (arr[medio] == objetivo) {
            return medio;
        }

        // Si el objetivo es menor, se busca en la mitad izquierda del arreglo
        if (arr[medio] > objetivo) {
            fin = medio - 1;
        }
        // Si el objetivo es mayor, se busca en la mitad derecha del arreglo
        else {
            inicio = medio + 1;
        }
    }

    // Si no se encuentra el objetivo, se retorna -1
    return -1;
}

int main() {
    int arreglo[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]);

    int objetivo = 7;
    int indice = busquedaBinaria(arreglo, 0, tamano - 1, objetivo);

    if (indice != -1) {
        printf("El objetivo %d fue encontrado en el índice %d.\n", objetivo, indice);
    } else {
        printf("El objetivo %d no fue encontrado en el arreglo.\n", objetivo);
    }

    return 0;
}
