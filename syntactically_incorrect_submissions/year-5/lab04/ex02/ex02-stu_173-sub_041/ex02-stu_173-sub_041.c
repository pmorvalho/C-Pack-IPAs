

#include <stdio.h>
#include <stdlib.h>

#define VECMAX 100

void imprimir_linha(int n, int largura);

int main() {
    int n, i = 0;
    int numeros[VECMAX];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
    }
    
    for (i = n - 1; i >= 0; i--)
        imprimir_linha(numeros[i], n);
    
    return 0;
}

void imprimir_linha(int n, int largura) {
    int espacos = largura - n;
    char caracter;

    for (int i = 0 ; i < largura; i++) {
        caracter = i < espacos ? ' ' : '*';
        putchar(caracter);
    }
    putchar('\n');
}