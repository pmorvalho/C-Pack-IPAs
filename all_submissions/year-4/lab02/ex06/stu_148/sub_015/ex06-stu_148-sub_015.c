
#include <stdio.h>

float min, max, num_temp;
int num;

int main () {
    scanf("%f", &min);
    max = min;
    while (scanf("%f", &num_temp) == 0) {
        if (min > num_temp)
            min = num_temp;
        else if (max < num_temp)
            max = num_temp;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}