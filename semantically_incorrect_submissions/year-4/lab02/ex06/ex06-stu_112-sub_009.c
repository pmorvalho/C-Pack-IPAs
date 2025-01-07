



#include <stdio.h>

int main() {
    float n;
    float max, min;
    scanf("%f", &n);
    
    max = n;
    min = n;

    scanf("%f", &n);

    if (n > max) {
        max = n;
    } else if (n < min) {
        min = n;
    }
    else
    {
        scanf("%f", &n);
    }
     
    printf("min: %f, max: %f\n", min, max);
    return 0;
}