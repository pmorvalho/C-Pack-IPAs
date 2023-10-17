
#include <stdio.h>

int main() {
    int N, contador = 1;
    float max, min, num_atual;
    scanf("%d", &N);
    scanf("%f", &num_atual);
    max = num_atual, min = num_atual;
    while (++contador <= N) {
        scanf("%f", &num_atual);
        if (num_atual > max) max = num_atual;
        if (num_atual < min) min = num_atual;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}