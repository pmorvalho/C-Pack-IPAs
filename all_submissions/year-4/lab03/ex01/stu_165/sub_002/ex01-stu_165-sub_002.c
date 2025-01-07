
#include <stdio.h>

void quadrado(int N){
    int linha, coluna;
    for (linha = 0; linha < N; linha++){
        for (coluna = 0; coluna < N; coluna++){
            printf("%d", coluna + linha + 1);
            if (coluna != (N - 1))
                putchar('\t'); 
        }
        putchar('\n');
    }
}

int main(){
    int N;

    scanf("%d", &N);

    quadrado(N);

    return 0;
}