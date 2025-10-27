

#include <stdio.h>

void quadrado(int n) {
    int an = 1, bn = 1, limite = n;
    while (n != an - 1) {
        bn = an;
        while (bn - 1 != limite) {
            if (bn == limite)
                printf("%d",bn);
            else
                printf("%d\t",bn);
            bn++;
        }
        printf("\n");
        limite++;
        an++;
    }
}

int main () {
    int n;
    scanf("%d", &n);
    quadrado(n);
    return 0;
}