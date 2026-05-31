
#include <stdio.h>

int main() {
    int i, n;
    double num, min, max;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%lf", &num);

        if (i == 0) {
            min = num;
            max = num;
        } else {
            if (num < min)
                min = num;
            if (num > max)
                max = num;
        }
    }

    printf("min: %f, max: %f\n", min, max);

    return 0;
}