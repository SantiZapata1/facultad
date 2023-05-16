#include <stdio.h>

int main(){
    
    float num1, num2, num3;
    
    printf("\n ingrese num 1: ");
    scanf("%f",&num1);
    printf("\n ingrese num 2: ");
    scanf("%f",&num2);
    printf("\n ingrese num 2: ");
    scanf("%f",&num3);
    
    if (num1>=num2 && num1>=num3)
        printf("\n num 1 (%.2f)en el mayor", num1);
    else
        if(num2>=num1 && num2>=num3)
            printf("\n num 2 (%.2f)en el mayor", num2);
        else
            printf("\n num 3 (%.2f)en el mayor", num3);

        
        
    
    
}