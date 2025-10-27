

#include <stdio.h>

#define VECMAX 100

int main() {
    int n = 0;
    int valores[VECMAX];
    int max_valor = 0;

    
    scanf("%d", &n);

    
    if (n <= 0 || n > VECMAX) {
        printf("Número inválido!\n");
        return 1;
    }

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &valores[i]);
        if (valores[i] > max_valor) {
            max_valor = valores[i];
        }
    }

    
    for (int linha = max_valor; linha > 0; linha--) {
        for (int coluna = 0; coluna < n; coluna++) {
            if (valores[coluna] >= linha) {
                putchar('*');
            } else {
                putchar(' ');
            }
        }
        putchar('\n'); 
    }

    return 0;
}