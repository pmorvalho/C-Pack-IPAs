
#include <stdio.h>

int main() 
{
    int contador;
    float maior, menor, numero;

    scanf("%d%f", &contador, &numero);
    menor = numero;
    maior = numero;

    while (contador > 1) 
    {
        scanf("%f", &numero);
        if (numero >= maior)
        {
            maior = numero;
        } 
        
        if (numero <= menor)
        {
            menor = numero;
        }
        
        contador--;   
    }

    printf("min: %f, max: %f\n", menor, maior);
    
    return 0;
}
