
#include <stdio.h>



#define DIVISOR 0

int main()
{
    int i, n, contador = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == DIVISOR)
            contador++;
    }
    printf("%d\n", contador);
    return 0;
}