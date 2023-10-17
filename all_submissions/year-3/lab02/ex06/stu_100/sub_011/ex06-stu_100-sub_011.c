

#include <stdio.h>

int main() {
    
    int contador, n;
    float min, max, num;

    scanf("%d", &n);

    for (contador = 0; contador < n; contador++)
    {
        scanf("%f", &num);
        if (contador == 0)
            min = max = num;
        if (num > max)
            max = num;
        if (num < min)
            min = num;
    }
    printf("min: %f, max: %f\n", min, max);
    
    return 0;
}