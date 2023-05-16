#include <stdio.h>

#define TARIFA1 1.2
#define TARIFA2 1.0
#define TARIFA3 0.9

int main(){
    
    float gasto, tasa;
    
    printf("\n gasto de corriente: ");
    scanf("%f",&gasto);
    
    if (gasto<1000.0)
        tasa=TARIFA1;
    if (gasto >=1000.0 & gasto <=1850.0)
        tasa=TARIFA2;
    if (gasto > 1850.0)
        tasa= TARIFA3;    
    
    printf("\nTasa que le corresponde a %.1f Kwxh es de %.3f\n", gasto, tasa);
    
    
}