

#include <stdio.h>

int main() {

    int n, i;
    float max , min, atual;

    scanf("%d", &n);
    scanf("%f", &atual);
    min = max =  atual;

    for (i = 0; i < n; i++) {
        scanf("%f", &atual);
        if (atual > max) {
            max = atual;
        }
        else if (atual < min) {
            min = atual;
        }
    }

    printf("min: %f max: %f", min, max);

    return 0;
}
