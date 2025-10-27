#include <stdio.h>


void quadrado(int N) {
    for (int i = 1; i <= N; i++) { 
        for (int j = 0; j < N; j++) { 
            printf("%d", i + j);
            if (j < N - 1) printf("\t"); 
        }
        printf("\n"); 
    }
}

int main() {
    int N;
    scanf("%d", &N); 
    if (N >= 2) quadrado(N); 
    return 0;
}
