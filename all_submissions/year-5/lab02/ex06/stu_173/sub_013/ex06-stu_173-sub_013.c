

#include <stdio.h>

int main() {
    int n;
    float d, min, max;

    scanf("%d", &n);
    
    
    scanf("%f", &d);
    min = max = d;

    
    for (int contador = 1; contador < n; contador++) {
        scanf("%f", &d);
        if (d > max)
            max = d;
        if (d < min)
            min = d;
    }

    printf("min: %f, max: %f\n", min, max);
    return 0;
}