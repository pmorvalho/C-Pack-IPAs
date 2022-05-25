#include <stdio.h>



int main()
{
    int N, num_dig, dig, soma;

    scanf("%d", &N);

    soma = 0;
    num_dig = 0;
    while (N != 0)
    {
        dig = N % 10;
        N = N / 10;
        soma = soma + dig;
        ++num_dig;
    }

    printf("%d\n%d\n", num_dig, soma);

    return 0;
}
