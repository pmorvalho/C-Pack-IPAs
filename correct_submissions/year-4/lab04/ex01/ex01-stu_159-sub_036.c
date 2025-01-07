#include <stdio.h>

#define vecMax 100

int main() {
    int n, cont, contSec, vet[vecMax];
    cont = 0;

    scanf("%d", &n);

    while (cont < n) {
        scanf("%d", &vet[cont]);
        cont++;
    }

    cont = 0;

    while (cont < n) {
        contSec = 0;
        while (contSec < vet[cont]) {
            putchar('*');
            contSec++;
        }
        putchar('\n');
        cont++;
    }
    return 0;
}
