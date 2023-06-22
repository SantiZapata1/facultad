/*
EjercicioN° 2: Para la siguiente estructura de alumnos (50 pts)

Estructura
DNI – Apellido – Nombre – Nota

Se pide:
1. Cargar los datos usando la sentencia WHILE. La dimensión del arreglo de estructura se
debe especificar usando DEFINE.
2. Cargar los apellidos de los alumnos (que se encuentran cargados en la estructura) en una
cadena, separando cada apellido por un punto. Usar la función strcpy().
3. A partir de la cadena , listar los apellidos que comienzan con la vocal “e” uno debajo de
otro.
4. Mostrar por pantalla la longitud de la cadena. Usar la función predefinida de la librería
string.h.
Consideración: Todas las variables y estructuras se definen en forma local (dentro de main)

*/

#include <stdio.h>
#include <string.h>

#define CANT_ALUMNOS 10

struct alumnos{
    int dni;
    int nota;
    char apellido[20];
    char nombre[20];
};

int main(){

    int num=0;
    int flag=0;

    struct alumnos alumno[CANT_ALUMNOS]; 

    while(flag==0){

        printf("\nDatos del alumno número %i:\n", num+1);

        printf("Nombre: ");
        fgets(alumno[num].nombre, sizeof(alumno[num].nombre), stdin);
        alumno[num].nombre[strcspn(alumno[num].nombre, "\n")] = '\0'; // Eliminar el salto de línea

        printf("Apellido: ");
        fgets(alumno[num].apellido, sizeof(alumno[num].apellido), stdin);
        alumno[num].apellido[strcspn(alumno[num].apellido, "\n")] = '\0'; // Eliminar el salto de línea

        printf("DNI: ");
        scanf("%i", &alumno[num].dni);

        printf("Nota: ");
        scanf("%i", &alumno[num].nota);

        getchar();

        //ingresar otro alumno
        printf("\ndesea ingresar otro alumno? presine 0: ");
        scanf("%i", &flag);

        getchar(); // Capturar el carácter de nueva línea después de la entrada del número

        num++;

    }

    // Punto 2: Cargar los apellidos de los alumnos en una cadena separados por un punto
    char apellidos_concatenados[200] = ""; // Inicializar la cadena vacía
    for (int i = 0; i < num; i++) {
        if (i > 0) {
            strcat(apellidos_concatenados, "."); // Agregar un punto entre apellidos
        }
        strcat(apellidos_concatenados, alumno[i].apellido);
    }
    printf("\nApellidos concatenados: %s\n", apellidos_concatenados);

    // Punto 3: Listar los apellidos que comienzan con la vocal 'e'
    printf("\nApellidos que comienzan con 'e':\n");
    for (int i = 0; i < num; i++) {
        if (alumno[i].apellido[0] == 'e' || alumno[i].apellido[0] == 'E') {
            printf("%s\n", alumno[i].apellido);
        }
    }

    // Punto 4: Mostrar la longitud de la cadena de apellidos concatenados
    int longitud = strlen(apellidos_concatenados);
    printf("\nLongitud de la cadena de apellidos: %d\n", longitud);


    return 0;
}