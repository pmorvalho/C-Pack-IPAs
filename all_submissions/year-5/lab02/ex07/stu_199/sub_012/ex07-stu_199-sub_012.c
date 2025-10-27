

#include <stdio.h>

int main() {
    int n, contador, d;
    scanf("%d", &n);

    for (contador = 1; contador <= n; contador++) {
        if (n % contador == 0) {
            d++;
        }
    } 
    printf("%d\n", d);
    return 0;
}