
#include <stdio.h>

int main() {
    int N, i;
    float x, min, max;
    scanf("%d", &N);

    scanf("%f", &x); 
    min = x;
    max = x;

    for (i = 1; i < N; i++) {
        float num;
        scanf("%f", &num); 
        
        if (num > max) {max = num;};
        if (num < min) {min = num;};
    }
    printf("min: %f, max: %f\n", min, max);
}