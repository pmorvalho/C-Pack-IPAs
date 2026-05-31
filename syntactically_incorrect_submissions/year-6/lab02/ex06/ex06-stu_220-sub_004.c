
#include <stdio.h>

int main()
{
    float max = 0, min = 0, n = 0, num = 0;
    scanf("%f", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &num);
        if (i == 0)
        {
            max = num;
            min = num;
        }
        if (num > max)
            max = num;
        if (num < min)
            min = num;
    }
    printf("min: %f, max: %f\n", min, max);

    return 0;
}