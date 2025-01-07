
#include <stdio.h>

float min, max, num_temp;
int N, i = 1;

int main () {
    scanf("%d", &N);
    scanf("%f", &min);
    max = min;
    while (N != i) {
        scanf("%f", &num_temp);

        if (min > num_temp)
            min = num_temp;
        else if (max < num_temp)
            max = num_temp;
        i++;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}