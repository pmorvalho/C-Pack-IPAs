

#include <stdio.h>

int main ()
{
    int n, i;
    float max, min, extra;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%f", &extra);
        if (i == 0)
            max = min = extra;
        else
        {
            if (extra > max)
                max = extra;
            else if (extra < min)
                min = extra;
        }
    }
    
    printf("min: %f, max: %f\n", min, max);
    return 0;
}