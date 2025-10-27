

#include <stdio.h>

int main() {
    int maior, numero;

    scanf("%d", &numero);
    maior = numero;

    for(int i = 1; i < 3; i++) {
        scanf("%d", &numero);

        if (numero > maior)
            maior = numero;
    }

    printf("O maior número é %d.\n", maior);
    return 0;
}