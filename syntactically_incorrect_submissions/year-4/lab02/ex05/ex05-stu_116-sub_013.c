
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int contador = 1;
    while (contador != n)
    {
        printf("%d\n", contador);
        contador += 1;
    }
    printf("%d\n",n);
    return 0;
}