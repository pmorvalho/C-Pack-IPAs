

#include <stdio.h>


void cruz(int N) {
    if (N < 2) {
        printf("O valor de N deve ser maior ou igual a 2.\n");
        return;
    }

    for (int i = 0; i < N; i++) {  
        for (int j = 0; j < N; j++) {  
            if (i == j || i + j == N - 1) {
                printf("* ");
            } else {
                printf("- ");
            }
        }
        printf("\n");  
    }
}

int main() {
    int N;
    scanf("%d", &N);
    cruz(N);
    return 0;
}