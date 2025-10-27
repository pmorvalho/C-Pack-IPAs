

#include <stdio.h>

int main() {
    int n, contador;

    scanf("%d", &n);
    contador = 2;
    for (int divisor = 2; divisor < n; divisor++)
        if (n % divisor == 0)
            contador++;
    printf("%d\n", contador);
    return 0;
}