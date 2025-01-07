
#include <stdio.h>

int main() {
    int N, i = 1;
    float min, max, num;
    scanf("%d%f", &N, &min);
    max = min;
    while (i < N) {
        scanf("%f", &num);
        min = num < min ? num : min;
        max = num > max ? num : max;
        i++;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}