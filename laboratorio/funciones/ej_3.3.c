#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminante, raiz1, raiz2;

    printf("Ingrese los coeficientes de la ecuación cuadrática:\n");
    printf("Coeficiente a: ");
    scanf("%f", &a);
    printf("Coeficiente b: ");
    scanf("%f", &b);
    printf("Coeficiente c: ");
    scanf("%f", &c);

    discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("Las raíces reales de la ecuación son: %.2f y %.2f\n", raiz1, raiz2);
    } else if (discriminante == 0) {
        raiz1 = -b / (2 * a);
        printf("La ecuación tiene una raíz real: %.2f\n", raiz1);
    } else {
        printf("La ecuación no tiene raíces reales.\n");
    }

    return 0;
}
