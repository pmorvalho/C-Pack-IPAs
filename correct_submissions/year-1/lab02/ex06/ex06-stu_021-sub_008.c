#include <stdio.h>



int main()
{
    int num, i;
    float min, max, k;
    scanf("%d", &num);
    scanf("%f", &k);
    max = k;
    min = k;
    for(i = 1; i < num; ++i)
    {
        scanf("%f", &k);
        if (k < min)
            min = k;
        if (k > max)
            max = k;
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}