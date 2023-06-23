#include <stdio.h>
#include <string.h>

#define CANTIDAD 20

struct biblioteca {
    int numReferencia;
    int clasePubli;   // 1:libro - 2:revista
    int nroEdicion;   // solo libros
    int anioPubli;    // solo libros

    char titulo[20];
    char autor[20];
    char editorial[20];
    char nombreRevista[20]; // solo revistas
};

void cargarArticulo(struct biblioteca *articulo);
void mostrarLibros(int num, struct biblioteca *articulo);
void mostrarRevistas(int num, struct biblioteca *articulo);
//void ordenar(int cantidad, struct biblioteca *articulo);

int main() {

    //variables auxiliares
    int flag = 1;
    int num = 0;

    //creo articulos
    struct biblioteca articulo[CANTIDAD];

    printf("*** Bienvenido a la biblioteca *** \n");

    while (flag == 1) {

        //procedimiento cargar articulo
        cargarArticulo(&articulo[num]);

        //pregunta si desea cargar otro articulo
        printf("\nDesea ingresar otro articulo? 1 = si / otro = no: ");
        scanf("%i", &flag);
        getchar();

        num++;
    }

    //mostrar libros y revistas
    mostrarLibros(num, articulo);
    mostrarRevistas(num, articulo);
    
    //ordenar(CANTIDAD, articulo);

    return 0;
}

//procedimiento para cargar articulo
void cargarArticulo(struct biblioteca *articulo) {

    //segun que es, se ingresan sus atributos
    printf("\nIngrese clase de publicacion, 1:libro - 2:revista: ");
    scanf("%i", &articulo->clasePubli);

    if (articulo->clasePubli == 1) {
        printf("Es un libro\n");
        printf("Ingrese numero de referencia: ");
        scanf("%i", &articulo->numReferencia);

        printf("Ingrese titulo: ");
        scanf("%s", articulo->titulo);

        printf("Ingrese nombre del autor: ");
        scanf("%s", articulo->autor);

        printf("Ingrese editorial: ");
        scanf("%s", articulo->editorial);

        printf("Ingrese numero de edicion: ");
        scanf("%i", &articulo->nroEdicion);

        printf("Ingrese anio de publicacion: ");
        scanf("%i", &articulo->anioPubli);

    } else if (articulo->clasePubli == 2) {
        printf("Es una revista\n");
        printf("Ingrese numero de referencia: ");
        scanf("%i", &articulo->numReferencia);

        printf("Ingrese titulo: ");
        scanf("%s", articulo->titulo);

        printf("Ingrese nombre del autor: ");
        scanf("%s", articulo->autor);

        printf("Ingrese editorial: ");
        scanf("%s", articulo->editorial);

        printf("Ingrese nombre de la revista: ");
        scanf("%s", articulo->nombreRevista);
    }
}

//procedimiento para mostrar libros
void mostrarLibros(int num, struct biblioteca *articulo) {

    printf("\n\t\tListado de libros\n");
    printf("\nnºref \t\t titulo \t\t autor \t\t edicion \t\t año publicacion\n");
    
    for (int i = 0; i < num; i++) {
        if (articulo[i].clasePubli == 1) {
            printf("%i \t\t %s \t\t\t %s \t\t %i\t\t\t %i\n", articulo[i].numReferencia, articulo[i].titulo, articulo[i].autor, articulo[i].nroEdicion,articulo[i].anioPubli);
        }
    }
}

//procedimiento para mostrar revistas
void mostrarRevistas(int num, struct biblioteca *articulo) {

    printf("\n\t\tListado de revistas\n");
    printf("nºref \t\t titulo \t\t autor \t\t editorial \t\t nombre \n");

    for (int i = 0; i < num; i++) {
        if (articulo[i].clasePubli == 2) {
            printf("%i \t\t %s \t\t %s \t\t %s \t\t %s\n", articulo[i].numReferencia, articulo[i].titulo, articulo[i].autor, articulo[i].editorial, articulo[i].nombreRevista);
        }
    }
}

//procedimiento para ordenar
/*
void ordenar(int cantidad, struct biblioteca *articulo){

    int temp;
    int siguiente;

    printf("Articulos ordenados segun referencia\n");

    for (int actual = 0; actual < cantidad; actual++) {

        siguiente = actual + 1;

        while (siguiente < cantidad) {
            if (articulo[actual].numReferencia > articulo[siguiente].numReferencia) {
                temp = articulo[actual].numReferencia;
                articulo[actual].numReferencia = articulo[siguiente].numReferencia;
                articulo[siguiente].numReferencia = temp;
            }
            siguiente++;
        }
    }

    for (int i = 0; i < cantidad; i++) {
        printf("%i ", articulo[i].numReferencia);
    }
    printf("\n");

}*/
