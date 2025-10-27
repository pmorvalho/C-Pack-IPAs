

#include <stdio.h>
#include <stdlib.h>

#define VECMAX 100

void imprimir_linha(int n, int largura);

int main() {
    int n, i = 0;
    int numeros[VECMAX], grafico[VECMAX];

    scanf("%d", &n);
    imprimir_linha(n, n);

    for (i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
        if (i == 0)
            grafico[i] = abs(n - numeros[i]);
        else
            grafico[i] = abs(numeros[i - 1] - numeros[i]);
    }
    
    for (i = 0; i < n; i++)
        imprimir_linha(grafico[i], n);
    
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