

#include <stdio.h>

int main() {
    int n, contador;
    float d, min, max;

    scanf("%d", &n);
    
    
    scanf("%f", &d);
    min = max = d;
    contador = 1;

    
    while (contador < n) {
        scanf("%f", &d);
        if (d > max)
            max = d;
        if (d < min)
            min = d;
        contador++;
    }

    printf("min: %f, max: %f\n", min, max);
    return 0;
}