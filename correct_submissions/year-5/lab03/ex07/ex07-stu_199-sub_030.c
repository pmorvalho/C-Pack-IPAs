

#include <stdio.h>

int main() {
    int n, soma = 0;
    char operador;

    if (scanf("%d", &n) != 1) {
        return 1;
    }

    soma = n;

    while (scanf(" %c %d", &operador, &n) == 2) {
        if (operador == '+') {
            soma += n;
        } else if (operador == '-') {
            soma -= n;
        } else {
            return 1;
        }
    }

    printf("%d\n", soma);
return 0;
}