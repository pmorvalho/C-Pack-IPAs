
#include <stdio.h>

int main() {
    int count;
    float num, min, max;

    scanf("%d", &count);

    scanf("%f", &num);
    min = num;
    max = num;

    for (int i = count - 1; i >= 1; i--) {
        scanf("%f", &num);
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
