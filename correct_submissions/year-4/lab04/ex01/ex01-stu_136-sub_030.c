

#include <stdio.h>

#define VECMAX 100

int main() {

    int n, i, valor;
    int vetor[VECMAX];

    scanf("%d",&n);

    for (i=0; (i<n)&&(i<VECMAX); i++) {
        scanf("%d",&vetor[i]);
    }

    for (i=0; (i<n)&&(i<VECMAX); i++) {
        valor = vetor[i];

        while (valor-- > 0)
            putchar('*');

        putchar('\n');
    }


    return 0;
}
