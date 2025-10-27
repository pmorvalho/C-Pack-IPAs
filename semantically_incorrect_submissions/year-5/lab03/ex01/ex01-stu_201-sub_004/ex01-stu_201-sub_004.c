
#include <stdio.h>


void quadrado(int n){
    int linha, i;

    for(linha = 0; linha < n; ++linha){
        for(i = linha; i < n + linha - 1; ++i)
            printf("%d\t", i);
        printf("%d\n", i + 1);
    }
}

int main() {
    int n;

    if(scanf("%d", &n) != 1 || n < 2) return 1;

    quadrado(n);
    return 0;
}