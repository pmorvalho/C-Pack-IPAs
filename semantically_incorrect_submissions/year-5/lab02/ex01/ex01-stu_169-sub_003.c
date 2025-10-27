

#include <stdio.h>

int main() {
    int maior, numero, contador = 0;

    scanf("%d", &maior);

    while (contador < 2) {
        if (numero > maior)
            maior = numero;      
        ++contador;
        scanf("%d", &numero);
    }

    printf("O maior número é %d.\n", maior);
    return 0;
}