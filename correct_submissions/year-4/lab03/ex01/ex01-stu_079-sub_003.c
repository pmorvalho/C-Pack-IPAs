

#include <stdio.h>

void quadrado(int n) {

    int lin, col;

    for(lin = 1; lin < n+1; lin++) {
        for(col = 1; col < n; col++) {
            printf("%d\t", lin+col-1);
        }
        printf("%d\n", lin+col-1);
    }

    return;
}

int main() {

    int n;

    scanf("%d", &n);

    quadrado(n);

    return 0;
}
