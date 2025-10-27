


#include <stdio.h>
#define VECMAX 100

void grafico_vertical(int n, int valores[]) {
    int max = 0;
    
    for (int i = 0; i < n; i++) {
        if (valores[i] > max) {
            max = valores[i];
        }
    }
    
    for (int linha = 1; linha <= max; linha++) {
        for (int i = 0; i < n; i++) {
            if (valores[i] >= linha) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    int valores[VECMAX];
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &valores[i]);
    }
    
    grafico_vertical(n, valores);
    
    return 0;
}