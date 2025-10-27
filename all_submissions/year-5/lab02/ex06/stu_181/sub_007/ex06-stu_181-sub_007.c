

#include <stdio.h>

int main() {
    int n, i;
    float max, min, temp;
    scanf("%d", &n);
    scanf("%f", &temp);
    max = temp;
    min = temp;
    for (i = 1; i < n; i++) {
        scanf("%f", &temp);
        max = temp > max ? temp : max;
        min = temp < min ? temp : min;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}
