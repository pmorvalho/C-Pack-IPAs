

#include <stdio.h>

int main()
{
    int N = 0;
    int aux = 0;
    int soma = 0, contador = 0;

    scanf("%d", &N);
    aux = N;

    if (N < 10) {
        soma = N;
        contador = 1;
    } else {
        while(aux >= 10)
        {
            soma += aux % 10;
            aux = aux / 10;
            contador++;
        }
        soma += aux;
        contador++;
    }

    printf("%d\n", contador);
    printf("%d\n", soma);

    return 0;
}
