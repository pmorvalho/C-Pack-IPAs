
#include <stdio.h>

int main()
{
    int n, i;
    float min, max, value;
    scanf("%d", &n);
    scanf("%f", &max);
    min = max;
    for (i = 1; i < n; i++){
        scanf("%f", &value);
        if (value > max)
            max = value;
        if (value < min)
            min = value;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}