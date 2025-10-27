

#include <stdio.h>

#define VECMAX 100

int main() {
    int n, vec[VECMAX], maior = 0, a, b, i, rep;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &vec[i]);
        if (vec[i] > maior)
            maior = vec[i];
    }
    rep = maior;
    for(a = 0; a < rep; a++) {
        for(b = 0; b < n; b++) {
            if (vec[b] - maior >= 0) printf("*");
            else printf(" ");
        }
        maior = maior - 1;
        printf("\n");
    }
    return 0;
}