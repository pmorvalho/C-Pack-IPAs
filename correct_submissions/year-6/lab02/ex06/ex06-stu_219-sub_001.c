

#include <stdio.h>

int main () {

    int N, i;
    float x, min, max;

    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        scanf("%f", &x);
        if (i == 1)
            min = x, max = x;
        if (x < min)
            min = x;
        if (x > max)
            max = x;
    }

    printf("min: %f, max: %f\n", min, max);
    return 0;
}