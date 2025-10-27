

#include <stdio.h>

void quadrado(int N);
void imprimir_linha(int inicial, int N);

int main() {
    int n;

    scanf("%d", &n);
    if (n < 2)
        return 1;
    quadrado(n);
    return 0;
}

void imprimir_linha(int inicial, int N) {
    int ultimo;
    
    ultimo = inicial + N - 1;
    for (int i = inicial; i <= ultimo; i++) {
        printf("%d", i);
        if (i == ultimo)
            printf("\n");
        else
            printf("\t");
    }
}

void quadrado(int N) {
    for (int i = 1; i <= N; i++)
        imprimir_linha(i, N);
}