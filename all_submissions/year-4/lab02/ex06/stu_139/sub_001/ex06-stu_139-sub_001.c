

#include <stdio.h>

int main()
{
    int n;
    float a, min, max;

    scanf("%d", &n);
    min = a;
    max = a;

    
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &a);
        if (i == 0)
        {
            min = a;
            max = a;
        }
        if (a < min)
        {
            min = a;
        }
        else if (a > max)
        {
            max = a;
        }
    }
    printf("min: %f, max: %f\n", min, max);
}