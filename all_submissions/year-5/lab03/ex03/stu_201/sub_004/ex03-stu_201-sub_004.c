
#include <stdio.h>



int abs(int i){
    return i >= 0 ? i : -i;
}

void cruz(int n){
    int linha, coluna;

    for(linha = 0; linha < n; ++linha) {
        for(coluna = 0; coluna < n; ++coluna) 
            printf(linha == coluna || linha == n - coluna -1 ? "*" : "-");

        printf("\n");
    }
}

int main() {
    int n;

    if(scanf("%d", &n) != 1) return 1;
    cruz(n);

    return 0;
}