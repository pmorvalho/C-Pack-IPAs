
#include <stdio.h>

void quadrado(int num) {
    int linha, col;
    for (linha = 1; linha <= num; linha++) {
        for (col = linha; col <= (num + linha - 1); col++) {
            printf("%d\t", col);
        }
        printf("\n");
    }
}

int main() {
    int num;
    scanf("%d", &num);
    quadrado(num);

    return 0;
}