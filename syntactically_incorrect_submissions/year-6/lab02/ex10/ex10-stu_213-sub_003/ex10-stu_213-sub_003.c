

#include <stdio.h>

int main()
{
    int numero, i, soma = 0, contador = 0;

    scanf("%d", &numero);

    while (numero != 0)
    {
        contador++;
        soma += numero % 10;
        numero /= 10;
    }
    printf("%d\n%d\n", contador, soma);
    return 0;
}