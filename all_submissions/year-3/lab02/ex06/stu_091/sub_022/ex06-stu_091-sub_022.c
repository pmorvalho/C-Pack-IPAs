
#include <stdio.h>

float main()
{
    float V,X ;
    scanf("%f",&V);
    float min = V, max = V;

    while (X > 0)
    {
        if (X > max)
        {
            max = X;
            scanf("%f",&X);
        }
        if (X < min)
        {
            min = X;
            scanf("%f",&X);
        }
        else
        {
            scanf("%f",&X);
        }
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}
