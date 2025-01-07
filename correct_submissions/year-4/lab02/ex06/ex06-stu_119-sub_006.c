
#include <stdio.h>

int main() {
    float max, min, num;

    scanf("%f", &num);

    max = min = num;

    while (scanf("%f", &num) == 1) {
        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }
    }

    printf("min: %f, max: %f\n", min, max);

    return 0;
}