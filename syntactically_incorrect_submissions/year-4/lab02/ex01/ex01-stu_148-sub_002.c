
#include <stdio.h>

int num1, num2, num3, num_maior;

int main() { 
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2) 
        num_maior = num1;
    
    else 
        num_maior = num2;
    
    if (num3 >= num_maior) 
        num_maior = num3;

    printf("%d", num_maior);
}