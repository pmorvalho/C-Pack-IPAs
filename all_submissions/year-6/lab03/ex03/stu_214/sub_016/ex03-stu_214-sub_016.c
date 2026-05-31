
#include<stdio.h>
void cruz(int N) {
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (j == i || j == N - i + 1) {
                printf("*");
            } else {
                printf("-");
            }
            if (j < N) {
                printf(" "); 
            } else {
                printf("\n");
            }
        }

    }
}

int main() {
    int n;
    scanf("%d", &n);
    if (n < 2) {
        printf("Erro: O valor de N deve ser maior ou igual a 2.\n");
    } else {
        cruz(n);
    }
    return 0;
}