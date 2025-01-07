
#include <stdio.h>

int main () {

    int soma = 0;
    int caracteres = 0;

    int numero;

    scanf("%d", &numero);

    while (numero % 10 != 0) {

        caracteres += 1;
        soma += numero % 10;

        numero /= 10;
    }

    printf("%d\n%d\n",caracteres,soma);

    return 0;
}