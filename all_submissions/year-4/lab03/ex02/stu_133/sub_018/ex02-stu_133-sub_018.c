
#include <stdio.h>

void piramide(int N) {
    int i, j, espacos = 0, valor = 0, variacao = 1;
    
    for (i = 0; i < N; i++) {
        valor = 0;
        espacos = (N - i - 1 ) * 2;
        printf("%*s", espacos, ""); 
        for (j = -i; j <= i; j++) {
            if (j <= 0) {
                variacao = 1;
            } else {
                variacao = -1;
            }

            valor += variacao;
            printf("%d", valor);
            
            if (j < i) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
        int N = 0;

    scanf("%d", &N);
    while (N < 2) {
        scanf("%d", &N);
    }
    piramide(N);
    return 0;
}