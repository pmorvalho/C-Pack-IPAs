
#include <stdio.h>

int main() {
    int n;
    float value, min, max;

    if(scanf("%d%f", &n, &value) != 2 || n < 1) return 1;
    max = min = value;

    while (--n) {
        if(scanf("%f", &value) != 1) return 1;
        max = max > value ? max : value;
        min = min < value ? min : value;
    }

    printf("min: %f, max: %f\n", min, max);
    return 0;
}