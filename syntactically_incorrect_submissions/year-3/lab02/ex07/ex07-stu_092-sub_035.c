
#include <stdio.h>



#define DIVISOR 0

int main()
{
    int i, n, contador = 0;
    scanf("%d", &n);
    for (i = 0; i<n; i++)
    {
        if (n % i == DIVISOR)
            contador++;
    }
    printf("%d", contador);
}