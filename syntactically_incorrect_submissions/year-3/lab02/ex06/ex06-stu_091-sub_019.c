
#include <stdio.h>

int main()
{
    float C,X ;
    scanf("%f",&C);
    float min = C, max = C;

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
