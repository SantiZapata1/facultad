#include <stdio.h>
#include <string.h>

struct alumnos{
    int dni;
    int edad;
    float promedio;
    char apellido[20];
    char nombre[20];
};

int main(){

    int cantAlumnos;
    int numAlumno;

    printf("Ingrese la cantidad de alumnos: ");
    scanf("%i", &cantAlumnos);

    struct alumnos alumno[cantAlumnos]; 

    getchar(); // Consumir el carácter de nueva línea después de scanf

    //lectura de datos de los alumnos
    for(numAlumno = 0; numAlumno < cantAlumnos; numAlumno++){

        printf("\nDatos del alumno número %i:\n", numAlumno+1);

        printf("Nombre: ");
        fgets(alumno[numAlumno].nombre, sizeof(alumno[numAlumno].nombre), stdin);
        alumno[numAlumno].nombre[strcspn(alumno[numAlumno].nombre, "\n")] = '\0'; // Eliminar el salto de línea

        printf("Apellido: ");
        fgets(alumno[numAlumno].apellido, sizeof(alumno[numAlumno].apellido), stdin);
        alumno[numAlumno].apellido[strcspn(alumno[numAlumno].apellido, "\n")] = '\0'; // Eliminar el salto de línea

        printf("DNI: ");
        scanf("%i", &alumno[numAlumno].dni);

        printf("Edad: ");
        scanf("%i", &alumno[numAlumno].edad);

        printf("Promedio: ");
        scanf("%f", &alumno[numAlumno].promedio);

        getchar(); // Consumir el carácter de nueva línea después de scanf
    } 

    //impresion de los datos

    printf("\t\tListado de alumnos\n ");
    printf("DNI \t\t Apellido \t\t Nombre \n");

    for( numAlumno=0; numAlumno<cantAlumnos; numAlumno++ ){

        printf( "%i \t %s \t %s \n", alumno[numAlumno].dni, alumno[numAlumno].apellido, alumno[numAlumno].nombre);

    }




    return 0;
}
