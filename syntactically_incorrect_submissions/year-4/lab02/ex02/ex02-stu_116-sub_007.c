
#include <stdio.h>

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    int maior = n;
    int menor = m;

    if (m > n)
    {
        menor = n;
        maior = m;
    }
    printf("%d\n%d\n", menor, maior);

    return 0;
}