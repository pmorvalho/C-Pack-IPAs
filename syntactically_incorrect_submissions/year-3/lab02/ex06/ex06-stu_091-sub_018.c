
#include <stdio.h>

int main()
{
    int C ;
    float X,contador = 1;
    scanf("%d",&C);
    scanf("%f",&X);
    float min = C, max = C;

    while (contador < C)
    {
        if (X > max)
        {
            max = X;
        }
        if (X < min)
        {
            min = X;
        }
        scanf("%f",&X);
        contador ++;    
    }
    printf("min: %f, max: %f\n", min, max);
    return 0;
}
