#include <stdio.h> 

int bisiesto(int ano); 

int main() {

    int anio;

    printf("Ingrese anio \n");
    scanf ("%d",&anio);

    bisiesto(anio);

}

int bisiesto(int ano){

    int restoA = ano % 4;
    int restoB = ano % 100;

    if(restoA==0 || restoB==0){
        printf("este año es bisiesto");
    }else{
        printf("este año no es bisiesto");
    }

    return 0;
}