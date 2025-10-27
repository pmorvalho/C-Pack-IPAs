
#include <stdio.h>

int main() {
    int n, contador = 0, numeros = 1;
    scanf("%d", &n);
    while (n + 1 != numeros) {
        if (n % numeros == 0)
            contador++;
        numeros++;
    }
    printf("%d\n", contador);
    return 0;
}
//por resolver