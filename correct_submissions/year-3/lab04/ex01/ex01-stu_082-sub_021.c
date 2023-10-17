

#include <stdio.h>

#define VECMAX 100

int main() {
    int i, n, valor, vec[VECMAX];
    do {
        scanf("%d", &n);
    } while (n > VECMAX && n <= 0);
    for (i = 0; i < n; i++) {
        scanf("%d", &valor);
        vec[i] = valor;    
    }
    for (i = 0; i < n; i++) {
        valor = vec[i];
        while (valor > 0) {
            putchar('*');
            valor--;
        }
        putchar('\n');
    }
    return 0;
}