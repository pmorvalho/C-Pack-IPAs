

#include <stdio.h>

int main() {
    int n, i;
    float val, min, max;

    scanf("%d", &n);
    scanf("%f", &val);

    min = max = val;

    for (i = 1; i < n; i++) {
        scanf("%f", &val);

        if (val < min) min = val;
        if (val > max) max = val;
    }

    printf("min: %f, max: %f\n", min, max);

    return 0;
}