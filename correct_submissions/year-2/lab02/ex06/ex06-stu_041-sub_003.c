#include <stdio.h>







int main()
{
    int n, i;
    float max, min, val;
    scanf("%d", &n);
    scanf("%f", &val);
    max = min = val;
    for (i = 1; i < n; i++)
    {
        scanf("%f", &val);
        if (val > max)
        {
            max = val;
        }
        if (val < min)
        {
            min = val;
        }
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}