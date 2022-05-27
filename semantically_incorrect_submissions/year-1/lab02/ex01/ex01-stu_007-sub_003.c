#include <stdio.h>



#define SIZE 3


int maior(int a, int b, int c);


int main()
{
    int vetor[SIZE], i;
    for (i = 0; i < 3; ++i)
    {
        scanf("%d", &vetor[i]);
    }

    printf("%d", maior(vetor[0], vetor[1], vetor[2]));

    return 0;
}


int maior(int a, int b, int c)
{
    int larger = a;
    if (larger < b)
        larger = b;
    if (larger < c)
        larger = c;

    printf("%d\n", larger);
    return 0;
}
