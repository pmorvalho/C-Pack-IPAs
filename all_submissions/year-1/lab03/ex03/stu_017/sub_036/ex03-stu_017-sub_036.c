#include <stdio.h>

#define asterisco '*'
#define hifen '-'

void cruz(int N) {
    int metade, contador, contador_colunas, pos_esq = 0, pos_dir = N - 1;

    metade = N / 2;


    for (contador = 0; contador < N; contador++) {
        for (contador_colunas = 0; contador_colunas < N; contador_colunas++) {
            if ((contador_colunas == pos_esq) || (contador_colunas == pos_dir)) {
                printf("%c", asterisco);
            } else {
                printf("%c", hifen);
            }
        }
        printf("\n");
        if (contador < metade) {
            pos_esq++;
            pos_dir--;
        }
        else {
            pos_esq--;
            pos_dir++;
        }
    }

}

int main() {
    int N;

    scanf("%d", &N);
    
    cruz(N);

    return 0;
}