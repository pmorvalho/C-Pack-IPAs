
#include <stdio.h>

int main()
{
    int N, digitos = 0, soma = 0;

    scanf("%d", &N);

    while (N)
    {
        soma = soma + (N % 10);
        digitos++;
        N = N / 10;
    }


    printf("%d\n", digitos);
    printf("%d\n", soma);
    return 0;
}