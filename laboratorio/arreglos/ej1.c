#include <stdio.h>

int main() {

    int arreglo1[4]={2,3,4,1};

    for (int i = 0; i < 4; i++) {
        printf("-%d\n", arreglo1[i]);  
    }

    int arreglo2[3];

    arreglo2[0]=3;
    arreglo2[1]=5;
    arreglo2[2]=1;

     for (int x = 0; x < 3; x++) {
        printf("*%d\n", arreglo2[x]);  
    }

}