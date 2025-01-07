

#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);

    float numbers[n], min, max;
    for (int i = 0; i < n; i++) {
        scanf("%f", &numbers[i]);
    }

    min = numbers[0];
    max = numbers[0];

    for (int i = 1; i < n; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    printf("min: %f, max: %f\n", min, max);

    return 0;
}