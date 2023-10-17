

#include <stdio.h>

int main () 
{
    int num_v;
    float min, max, val;

    scanf("%d", &num_v);

    scanf("%f", &val);
    min = max = val;

    while (--num_v)
    {
        scanf("%f", &val);
        if (val < min)
            min = val;
        if (val > max)
            max = val;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}