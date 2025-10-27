

#include <stdio.h>

int main() {
    int n, i;
    float min , max, x;

    scanf("%d", &n);
    scanf("%f", &x);
    min = x;
    max = x;
    for(i = 1; i < n; i++) {
        scanf("%f", &x);
        if (x < min)
            min = x;
        else if (x > max)
            max = x;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}