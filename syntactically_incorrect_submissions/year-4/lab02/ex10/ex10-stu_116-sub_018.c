
#include <stdio.h>

int main()
{
    int nDigitos = 0, soma = 0;
    int n;
    scanf("%d", &n);

    int digito;
    while (n != 0)
    {
        digito = n % 10;
        n = n / 10;
        nDigitos++;
        soma += digito;
    }
    printf("%d\n%d\n", nDigitos, soma);

    return 0;
}