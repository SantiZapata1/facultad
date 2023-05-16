#include <stdio.h>

int esPrimo(int num);
void mostrarNum(int array[],int longitud);
int esPar(int array[],int tamaño);
int busqueda(int arreglo[], int longitud, int num);
int encontrar(int arreglo[], int longitud, int posicion);

int main(){

    int longitud=0;
    int numero;

    do{
        printf("ingrese la longitud del arreglo:");
        scanf("%i",&longitud);
    }while(longitud<1);


    int arreglo[longitud];

    for(int i=0;i<longitud;i++){

        printf("\ningrese dato de la posicion %i: ", i);
        scanf("%i",&arreglo[i]);

    }

    mostrarNum(arreglo,longitud);

    printf("\n de ese array, %i numeros son pares", esPar(arreglo,longitud));

    printf("\n que numero desea saber cuantas veces esta en el arreglo? ");
    scanf("%i",&numero);

    printf("\n el numero %i aparece %i veces en el arreglo. ", numero, busqueda(arreglo,longitud,numero));

    encontrar(arreglo,longitud,posicion);

    return 0;
}

int esPrimo(int num) {
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i <= num/2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

void mostrarNum(int array[],int longitud){

    for(int i=0;i<longitud;i++){
        if(esPrimo(array[i])==1){
            printf("- %i  primo\n", array[i]);
        }else{
            printf("- %i \n", array[i]);
        }
    }
}

int esPar(int array[], int tamaño){

    int cantidad=0;

    for(int i=0;i<tamaño;i++){

        if(array[i]%2==0){
            cantidad++;
        }
    }

    return cantidad;

}

int busqueda(int arreglo[], int longitud, int num){

    int contador = 0;

    for(int i = 0;i<longitud;i++){

        if(arreglo[i]==num){
            contador++;
        }
    }
    return contador;

}

int encontrar(int arreglo[], int longitud, int posicion){

    do{
        printf("\n que posicion desea conocer? ");
        scanf("%i",&posicion);
    }while(posicion<0 || posicion>=longitud);

    return arreglo[posicion];
}
