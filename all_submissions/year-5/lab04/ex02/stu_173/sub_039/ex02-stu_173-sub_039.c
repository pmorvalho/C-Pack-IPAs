

#include <stdio.h>
#include <stdlib.h>

#define VECMAX 100

void imprimir_linha(int n, int largura);
int imprimir_linhas_para_numero(int num, int largura, int max_chars);

int main() {
    int n, i = 0, numeros[VECMAX], max_chars;

    scanf("%d", &n);
    max_chars = n;

    for (i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
    }
    
    for (i = n - 1; i >= 0; i--) {
        if (i == 0)
            max_chars = imprimir_linhas_para_numero(numeros[i], n, 1);
        else if (numeros[i] <= n)
            imprimir_linha(numeros[i], n);
        else
            max_chars = imprimir_linhas_para_numero(numeros[i], n, max_chars);
    }
    
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

int imprimir_linhas_para_numero(int num, int largura, int max_chars) {
    int val, max;
    max = max_chars < largura ? max_chars : largura;
    while (num) {
        if (num > max)
            val = max;
        else
            val = num;
        imprimir_linha(val, largura);
        num -= val;
    }
    return val;
}