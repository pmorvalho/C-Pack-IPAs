
#include <stdio.h>

int main() {
    int N;
    float num, min, max;

    scanf("%d", &N);

    scanf("%f", &num);
    min = max = num;

    for (int i = 2; i <= N; i++) {
        scanf("%f", &num);
        if (num < min) {
            min = num;

    }
        if (num > max) {
            max = num;

        }

        printf("min: %f, max: %f\n", min, max);




    return 0;
}
