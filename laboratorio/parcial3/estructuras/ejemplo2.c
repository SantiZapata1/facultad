#include <stdio.h>

// Definición de la estructura "Persona"
struct Persona {
    char nombre[20];
    int edad;
    float altura;
};

int main() {
    // Declaración e inicialización de una variable de tipo "Persona"
    struct Persona persona1 = {"Juan", 30, 1.75};

    // Acceso a los campos del registro
    printf("Nombre: %s\n", persona1.nombre);
    printf("Edad: %d\n", persona1.edad);
    printf("Altura: %.2f\n", persona1.altura);

    return 0;
}
