

#include <stdio.h>

int main () {

    int num_v, counter;
    float min, max, val;

    scanf("%d", &num_v);

    scanf("%f", &max);
    min = max;

    for (counter = 1; counter < num_v; counter++) {
        scanf("%f", &val);
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