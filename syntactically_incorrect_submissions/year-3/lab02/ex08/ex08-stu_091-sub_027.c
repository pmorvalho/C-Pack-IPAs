
#include <stdio.h>

float main()
{
    float X , S , contador = 0 , Total = 0;
    scanf("%f",&X);

    
    while (contador < X)
    {
        scanf("%f",&S);
        Total += S;
        contador++;
    }
    printf("%.2f", Total/X);
    return 0;
}