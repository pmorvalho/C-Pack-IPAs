

#include <stdio.h>
#define VECMAX 100
void desenhar_triangulo(int n) {
    int numeros[VECMAX], i, j;
    for (i = 1; i <= n; i++) {
        scanf("%d", &numeros[i]);
        for (j = 1; j <= numeros[i]; j++) {
            printf("*");
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