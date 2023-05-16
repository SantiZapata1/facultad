#include <stdio.h>

int main() {
    int numerador, denominador, divisor, simplificado;

    // Pedir al usuario el numerador y denominador
    printf("Ingrese el numerador: ");
    scanf("%d", &numerador);

    printf("Ingrese el denominador: ");
    scanf("%d", &denominador);

    // Encontrar el divisor común más grande entre el numerador y el denominador
    if (numerador < denominador) {
        divisor = numerador;
    } else {
        divisor = denominador;
    }

    while (divisor >= 1) {
        if (numerador % divisor == 0 && denominador % divisor == 0) {
            simplificado = divisor;
            break;
        }
        divisor--;
    }

    // Dividir el numerador y denominador por el divisor común más grande para simplificar
    numerador /= simplificado;
    denominador /= simplificado;

    // Imprimir la fracción simplificada
    printf("La fraccion simplificada es %d/%d \n", numerador, denominador);

    return 0;
}
