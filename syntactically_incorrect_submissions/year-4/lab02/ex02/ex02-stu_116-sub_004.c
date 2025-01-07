
#include <stdio.h>

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    int maior = n;
    int menor = m;

    if (m > n)
    {
        maior = m;
        menor = n;
    }
    printf("%d\n%d\n",maior,menor);

    return 0;
}