

#include<stdio.h>
void quadrado (int N){

    int i, j;

    for (i = 1; i <= N; i++) {
        for (j = 0; j <= N - 1; j++) { 

            printf("%d", i + j);

            if (j < N - 1) {
                printf("\t");
            }
        }
        printf("\n");
    }
}
 
int main() {
    int n;
    scanf("%d", &n);
    if (n < 2) {
        printf("Erro: O valor de N deve ser maior ou igual a 2.\n");
    } else {
        quadrado(n);
    }

    return 0;
}