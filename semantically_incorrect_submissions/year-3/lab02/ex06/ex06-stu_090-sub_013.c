

#include <stdio.h>

int main(void) {

    float min, max, num1, num2, num3, num4, num5, num6, num7;

    scanf("%f %f %f %f %f %f %f", &num1, &num2, &num3, &num4, &num5, &num6, &num7);
    max = num1;
    min = num1;
    if (max < num2)
        max = num2;
    if (max < num3)
        max = num3;
    if (max < num4)
        max = num4;
    if (max < num5)
        max = num5;
    if (max < num6)
        max = num6;
    if (max < num7)
        max = num7;
    if (min > num2)
        min = num2;
    if (min > num3)
        min = num3;
    if (min > num4)
        min = num4;
    if (min > num5)
        min = num5;
    if (min > num6)
        min = num6;
    if (min > num7)
        min = num7;
    printf("min: %f, max: %f\n", min, max);
    return 0;
}