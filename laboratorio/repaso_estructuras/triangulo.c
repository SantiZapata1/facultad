#include <stdio.h>

int main (){

    int i = 0;
    int x = 0;

    for(i=1;i<=10;i++){

        for(x=1;x<=i;x++){

            printf("1-");


        }
        for(x=10;x>=i;x--){

            printf("-2");


        }
    printf("\n");

    }



}