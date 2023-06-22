#include<stdio.h>
#include<string.h> 

int main(){

    char texto1[]="Don Pepito";
    char texto2[]=" y ";
    char texto3[]="Don Jose";

    printf("%s\n",texto1);
    strlcat(texto1,texto2,sizeof(texto1));
    printf("%s\n",texto2);
    strlcat(texto1,texto3,sizeof(texto1));
    printf("%s\n",texto3);

    return 0;

}