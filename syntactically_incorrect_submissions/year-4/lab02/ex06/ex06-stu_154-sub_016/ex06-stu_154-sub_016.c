
#include <stdio.h>

int main() {
    float N;
    float num, min, max;

    scanf("%f", &N);

    scanf("%f", &num);
    min = max = num;

    for (float i = 2.00; i <= N; i++) {
        scanf("%f", &num);
        if (num < min) {
            min = num;

    }
        if (num > max) {
            max = num;

        }

       



    }
     printf("min: %f, max: %f\n", min, max);
    return 0;

}
