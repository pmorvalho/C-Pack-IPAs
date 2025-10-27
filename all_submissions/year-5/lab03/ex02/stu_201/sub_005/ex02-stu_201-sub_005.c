
#include <stdio.h>


int abs(int i){
    return i >= 0 ? i : -i;
}


void piramide(int n) {
    int linha, i;

    for(linha = 0; linha < n; ++linha){
        for(i = 1; i <= n + linha; ++i){
            int valor = -abs(i-n) + linha + 1;
            valor > 0 ? printf("%d", valor) : printf(" ");
            if(i + 1 <= n + linha) printf(" ");
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