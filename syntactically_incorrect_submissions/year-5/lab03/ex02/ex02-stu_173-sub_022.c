

#include <stdio.h>

void piramide(int N);
void imprimir_linha(int central, int largura);

int main() {
    int n;

    scanf("%d", &n);
    if (n < 2)
        return 1;

    piramide(n);
    return 0;
}

void imprimir_linha(int central, int largura) {
    int inicial;

    
    inicial = central - ((largura - 1) / 2);
    for (int i = inicial; i < central; i++) {
        if (i >= 1)
            printf("%d ", i);
        else
            printf("  ");
    }

    
    for (int i = central; i >= inicial; i--) {
        if (i > 1) {
            printf("%d ", i);
        } 
        else {
            printf("%d\n", i);
            break;
        }
    }
}

void piramide(int N) {
    int largura;
    
    largura = 2 * N - 1;
    for (int i = 1; i <= N; i++)
        imprimir_linha(i, largura);
}