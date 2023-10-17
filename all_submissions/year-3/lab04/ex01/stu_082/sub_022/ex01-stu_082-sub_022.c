

#include <stdio.h>

#define VECMAX 100;

int main() {
    int i, n, valor;
    do {
        scanf("%d", &n);
    } while (n > 100 && n <= 0);
    for (i = 0; i < n; i++) {
        scanf("%d", &valor);
        while (valor > 0) {
            putchar('*');
            valor--;
        }
        putchar('\n');    
    }
    return 0;
}