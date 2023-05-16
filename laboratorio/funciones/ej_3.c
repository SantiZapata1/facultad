#include <stdio.h>

int esPar(int num);
int esPrimo(int num);

int main(){

    int numero=0;

    do{

        printf("Ingrese un numero: \n");
        scanf ("%i",&numero);

        esPar(numero);


        if(esPrimo(numero)){
            printf("1 \n");
        }else{
            printf("0 \n");           
        }
        

    }

    while(numero!=0);

    return 0;
}

int esPar(int num){

    if(num  == 0){
        printf("programa finalizado \n");
    }else if(num % 2 == 0){
        printf("es par \n");
    }else{
        printf("no es par \n");
    }

    return 0;

}

int esPrimo(int num){

    for(int i=2;i<num/2;i++){

        if(num % i == 0){
            return 0;
        }else{
            return 1;

        }

    }
}