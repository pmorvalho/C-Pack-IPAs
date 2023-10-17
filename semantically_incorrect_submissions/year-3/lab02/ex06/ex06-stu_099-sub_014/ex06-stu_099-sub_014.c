
#include <stdio.h>

int main() 
{
    int contador;
    float maior, menor = 10e100, numero;

    scanf("%d", &contador);

    while (contador > 0) 
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

    printf("min: %f, max: %f", menor, maior);
    
    return 0;
}
