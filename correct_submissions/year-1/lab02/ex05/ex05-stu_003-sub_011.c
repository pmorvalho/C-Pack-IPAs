#include <stdio.h>

int main()
{
    int contador = 1;
    int n;
    scanf("%d",&n);

    while (contador<=n)
    {
        printf("%d\n", contador);
        ++contador;
    }
    return 0;
}