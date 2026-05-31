#include <stdio.h>

int main() {
    int n, i;
    int contador = 0;

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0; 
    }

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            contador++;
        }
    }

    printf("%d\n", contador);

    return 0;
}