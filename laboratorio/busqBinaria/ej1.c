#include <stdio.h>

int busquedaBinaria(int arr[], int bajo, int alto, int objetivo) {
    while (bajo <= alto) {
        int medio = bajo + (alto - bajo) / 2;

        if (arr[medio] == objetivo) {
            return medio; // El elemento objetivo se encontró en la posición 'medio'
        } else if (arr[medio] < objetivo) {
            bajo = medio + 1; // El elemento objetivo está en la mitad derecha del subarreglo
        } else {
            alto = medio - 1; // El elemento objetivo está en la mitad izquierda del subarreglo
        }
    }

    return -1; // El elemento objetivo no se encontró en el arreglo
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int tamaño = sizeof(arr) / sizeof(arr[0]);
    int objetivo = 23;

    int resultado = busquedaBinaria(arr, 0, tamaño - 1, objetivo);

    if (resultado != -1) {
        printf("El elemento %d se encuentra en la posición %d\n", objetivo, resultado);
    } else {
        printf("El elemento %d no se encuentra en el arreglo\n", objetivo);
    }

    return 0;
}
