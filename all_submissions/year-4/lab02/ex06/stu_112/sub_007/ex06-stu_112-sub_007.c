

#include <stdio.h>

int main() {
    float n;
    float numero, max, min;
    int contador = 1;

    
    scanf("%f", &n);
    scanf("%f", &numero);

    
    max = numero;
    min = numero;
    

    
    while (contador < n)
        {
        scanf("%f", &numero);
        
        if (numero > max) {
            max = numero;
        }   
        if (numero < min) 
        {
            min = numero;
        }
        ++contador;
        
    }

    
    printf("min: %f, max: %f\n", min, max);

    return 0;
}
