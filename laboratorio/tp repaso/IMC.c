//librerias
#include <stdio.h>
#include <math.h>

int main (){

    //variables
    float altura=0;
    float peso=0;
    int i = 0;

    printf("\nPrograma que calcula y valora el indice de masa corporal\n");
    printf("--------------------------------------------------------\n");

    printf("\nCaptura de datos\n");
    printf("------------------\n");

    //bucle para dar solo 3 intentos de ingreso correcto de datos
    //usamos un contador para los intentos y una bandera para salir del bucle
    while(i<3 && (peso<=0 || altura <=0)){

        //pedimos que ingrese los datos
        printf("\nDigite la masa en kg: ");
        scanf("%f",&peso);
        printf("\nDigite la talla en m: ");
        scanf("%f",&altura);

        //verificamos los valores ingresados
        if(peso <= 0 && altura <= 0){
            printf("\nAmbos valores ingresados son invalidos \n");
        }else if(peso <= 0){
            printf("\nValor MASA invalido \n");
        }else if(altura <= 0){
            printf("\nvalor TALLA invalido \n");
        }
        else{
            printf("\nCalculando y valorando el I.M.C.... \n");
        }

        //incrementamos los intentos para dar solo 3
        i=i+1;

    }

    //calculamos imc
    float potencia = pow(altura, 2);
    float IMC = peso/potencia;

    //imprimimos valores
    printf("\n \t \t Imprimir datos y resultados\n");
    printf("----------------------------------------------------------------\n");

    printf("\nMasa del paciente en Kg: \t\t %.2f \n",peso);
    printf("Talla del paciente en m: \t\t %.2f \n",altura);
    printf("Indice de masa corporal en Kg/m2: \t %.4f \n",IMC);

    printf("Valoracion del indice IMC: \t\t");

    //segun el indice, indicamos el
    if(IMC <18.5){
        printf(" insuficiencia ponderal \n");

    }else if(IMC >=18.5 && IMC <=24.9){
        printf(" intervalo normal \n");

    }else if(IMC >=25.0 && IMC <=29.9){
        printf(" preobecidad \n");

    }else if(IMC >=30.0 && IMC <=34.9){
        printf(" obecidad clase 1 \n");

    }else if(IMC >=35.0 && IMC <=39.9){
        printf(" obecidad clase 2 \n");

    }else if(IMC >=40.0 ){
        printf(" obecidad clase 3 \n");

    }else{
        printf(" nulo\n");

    }
    printf("----------------------------------------------------------------\n");

    return 0;

}