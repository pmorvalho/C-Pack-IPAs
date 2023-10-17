
#include <stdio.h>

int main()
{
    float C,X ;
    float contador = 1;
    scanf("%f",&C);
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
