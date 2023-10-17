
#include <stdio.h>

int main()
{
    int n, i, contador = 1;

    scanf("%d", &n);

    for(i = 1; i <= (n / 2); i++)
        if ((n % i) == 0)
            contador++;

    printf("%d\n", contador);

    return 0;
}
