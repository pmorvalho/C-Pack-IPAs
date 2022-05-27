#include <stdio.h>
int main()
{
    int I, digito, N, digitos = 0, soma = 0;
    scanf("%d", &N);
    I = N;
    while (I >= 1)
    {
        digito = I % 10;
        digitos++;
        soma = soma + digito;
        I = I / 10;
    }
    printf("%d\n%d\n", digitos, soma);
    return 0;
}