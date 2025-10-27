

#include <stdio.h>
#define VECMAX 100
void desenhar_triangulo(int n) {
    int numeros[VECMAX], i, j, max = 0;

    for (i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
        if (numeros[i] > max) {
            max = numeros[i];
        }
    }

    for (i = max; i >= 1; i--) {
        for (j = 0; j < n; j++) {
            if (numeros[j] >= i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    desenhar_triangulo(n);
    return 0;
}