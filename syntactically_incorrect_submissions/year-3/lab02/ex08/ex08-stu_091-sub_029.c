
#include <stdio.h>

float main()
{
    float X , C , contador = 0 , Total = 0;
    scanf("%f",&X);

    
    while (contador < X)
    {
        scanf("%f",&C);
        Total += C;
        contador++;
    }
    printf("%.2f", Total/X);
    return 0;
}