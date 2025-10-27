

#include <stdio.h>

#define VECMAX 100

void imprimir_linha(int val, int altura);

int main() {
    int n, i, j, linha, numeros[VECMAX], max_val = 0;
    
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
        if (numeros[i] > max_val)
            max_val = numeros[i];
    }
    
    printf("%d\n", max_val);

    for (linha = 0; linha < max_val; linha++) {
        for (j = 0; j < n; j++) {
            if (max_val - linha > numeros[j])
                putchar(' ');
            else
                putchar('*');
        }
        putchar('\n');
    }

    return 0;
}