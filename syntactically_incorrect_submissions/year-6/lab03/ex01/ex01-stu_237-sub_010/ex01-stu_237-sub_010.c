
#include <stdio.h>

void quadrado(int N) {
    if (N >= 2) {
        for(int i = 1; i <= N; i++) {
            for(int j = 0; j < N; j++) {
                int value = i + j;
                if(j == N - 1) {
                    printf("%d\n", value);
                }
                else {
                    printf("%d\t", value);
                }
            }
        }
    } 
}

int main() {
    int N;
    
    scanf("%d", &N);
    quadrado(N);
}