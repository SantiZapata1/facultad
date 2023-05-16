#include <stdio.h>
int factorial(int n);

int main (){

    int numero;

    printf("ingrese numero a saber su factorial:");
    scanf("%i",&numero);

    int facto=factorial(numero);

    printf("el factorial de %i es: %i\n", numero, facto );

}

int factorial(int n){
    if (n == 0) {  // caso base
        return 1;
    } else {
        return n * factorial(n-1); // llamada recursiva
    }
}
