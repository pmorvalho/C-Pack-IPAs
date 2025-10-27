

#include <stdio.h>

#define VECMAX 100

int main () {
    int n, v[VECMAX], i = 0, contador;
    scanf("%d", &n);
    while (i < n) {
        scanf("%d", &v[i]);
        contador = 0;
        while (contador < v[i]) {
            printf("*");
            contador++;
        }
        printf("\n");
        i++;
    }
    return 0;
}