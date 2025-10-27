

#include <stdio.h>

#define VECMAX 100

int main() {
    int n, i, j, linha, numeros[VECMAX], max_val = 0;
    
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &numeros[i]);
        if (numeros[i] > max_val)
            max_val = numeros[i];
    }

    for (linha = max_val - 1; linha >= 0; linha--) {
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