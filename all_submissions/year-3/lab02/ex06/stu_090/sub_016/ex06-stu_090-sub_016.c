

#include <stdio.h>

int main(void) {

    float min, max, num1, num2, num3, num4;

    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);
    max = num1;
    min = num1;
    if (max < num2)
        max = num2;
    if (max < num3)
        max = num3;
    if (max < num4)
        max = num4;
    if (min > num2)
        min = num2;
    if (min > num3)
        min = num3;
    if (min > num4)
        min = num4;
    if (min == max)
        min = 0.000000; max = max;
    printf("min: %f, max: %f\n", min, max);
    return 0;
}