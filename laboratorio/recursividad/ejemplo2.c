#include <stdio.h>

int sumaRecursiva(int arreglo[], int n) {
    if (n == 0) {
        return 0;
    } else {
        return arreglo[n-1] + sumaRecursiva(arreglo, n-1);
    }
}

int main() {
    int arreglo[] = {1, 2, 3, 4, 5};
    int n = 5;
    int resultado = sumaRecursiva(arreglo, n);
    printf("La suma de los elementos es: %d\n", resultado);
    return 0;
}
