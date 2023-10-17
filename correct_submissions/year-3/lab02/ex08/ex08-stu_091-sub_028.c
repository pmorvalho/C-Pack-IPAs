
#include <stdio.h>

int main()
{
    float X , C , contado = 0 , Total = 0;
    scanf("%f",&X);

    
    while (contado < X)
    {
        scanf("%f",&C);
        Total += C;
        contado+=1;
    }
    printf("%.2f\n", Total/X);
    return 0;
}