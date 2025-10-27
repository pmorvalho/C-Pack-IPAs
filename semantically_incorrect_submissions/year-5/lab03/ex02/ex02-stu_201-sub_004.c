
#include <stdio.h>


int abs(int i){
    return i >= 0 ? i : -i;
}


void piramide(int n) {
    int linha, i;

    for(linha = 0; linha < n; ++linha){
        for(i = 1; i < 2*n; ++i){
            int valor = -abs(i-5) + linha + 1;
            valor > 0 ? printf("%d", valor) : printf(" ");
        }
        printf("\n");
    }
}

int main() {
    int n;

    if(scanf("%d", &n) != 1 || n < 1) return 1;

    piramide(n);

    return 0;
}