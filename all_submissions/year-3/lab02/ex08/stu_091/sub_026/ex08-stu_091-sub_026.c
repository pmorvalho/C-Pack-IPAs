
#include <stdio.h>

float main()
{
    float X , C , contado = 0 , Total = 0;
    scanf("%f",&X);

    
    while (contado < X)
    {
        scanf("%f",&C);
        Total += C;
        contado++;
    }
    printf("%.2f", Total/X);
    return 0;
}