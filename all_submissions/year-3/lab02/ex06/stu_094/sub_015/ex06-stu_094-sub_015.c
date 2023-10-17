

#include <stdio.h>

int main () {

    int num_v;
    float min, max, val;

    scanf("%d", &num_v);

    scanf("%f", &max);
    min = max;

    while (num_v > 1) {
        scanf("%f", &val);
        num_v--;
        if (val < min) {
            min = val;
        }
        else if (val > max) {
            max = val;
        }
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}