
#include <stdio.h>
int main()
{
    int C , contador = 1, divisor = 0;
    scanf("%d",&C);

    while (contador <= C)
    {
        if (C % contador == 0)
        {
            divisor++;
        }
        contador++;
    }
    printf("%d\n",divisor);
    return 0;
}
