#include <stdio.h>

// Definición de la estructura "Persona"
struct Persona {
    char nombre[20];
    int edad;
    float altura;
};

int main() {
    // Declaración de una variable de tipo "Persona"
    struct Persona persona1;

    // Ingreso de datos desde el teclado
    printf("Ingrese el nombre: ");
    scanf("%s", persona1.nombre);

    printf("Ingrese la edad: ");
    scanf("%d", &persona1.edad);

    printf("Ingrese la altura: ");
    scanf("%f", &persona1.altura);

    // Acceso a los campos del registro
    printf("\nDatos de la persona:\n");
    printf("Nombre: %s\n", persona1.nombre);
    printf("Edad: %d\n", persona1.edad);
    printf("Altura: %.2f\n", persona1.altura);

    return 0;
}
