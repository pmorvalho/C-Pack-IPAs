
#include <stdio.h>

int main()
{
    int C ;
    float X,contador = 0;
    float min, max;
    scanf("%d",&C);
    
    min = C;
    max = C;

    while (contador++ < C)
    {
        scanf("%f",&X);
        if (X > max)
        {
            max = X;
        }
        if (X < min)
        {
            min = X;
        }
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}