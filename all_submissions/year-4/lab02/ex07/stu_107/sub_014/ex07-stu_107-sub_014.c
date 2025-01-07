
#include <stdio.h>

int main()
{
    int N, divisor = 1, contador = 0;

    scanf("%d", &N);

    while ( divisor <= N)
    {
        if ( N % divisor == 0)
        {
            contador++;
        }
        divisor++;
    }
    printf("%d\n", contador);
    return 0;

}