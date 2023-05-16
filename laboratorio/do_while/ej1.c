#include <stdio.h>

int main(){

    int num1;
    int num2;
    int num3;

    do{
        printf("\n ingrese tres numeros consecutivos:");
        scanf("%i",&num1);
        scanf("%i",&num2);
        scanf("%i",&num3);

    }while(num1!=num2-1 || num2!=num3-1);

    printf("\n gracias");


}