#include <stdio.h>

int main() {
    int n;
    float x, min, max;

    scanf("%d", &n);
    scanf("%f", &x);

    min = x;
    
    max = x;

    while (--n > 0) {
        scanf("%f", &x);

        if (x > max)
            max = x;
        
        else if (x < min)
            min = x;
    }

    printf("min: %f, max: %f\n", min, max);
    return 0;
}
