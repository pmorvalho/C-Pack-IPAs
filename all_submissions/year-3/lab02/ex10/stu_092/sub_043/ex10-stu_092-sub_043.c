
#include <stdio.h>



int main()
{
    int n, soma = 0, digito, n_digitos = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        digito = n % 10;
        soma = soma + digito;
        n_digitos++;
    }
    printf("%d\n%d", n_digitos, soma);
    return 0;
}