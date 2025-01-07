
#include <stdio.h>

void quadrado(int N) {
    
    if (N < 2) {
        printf("O valor de N deve ser maior ou igual a 2.\n");
        return; 
    }
    
    for (int i = 1; i <= N; i++) {
        
        for (int j = 1; j <= N; j++) {
            
            printf("%d\t", (i + j - 1) % N + 1);
        }
        printf("\n"); 
    }
}

int main() {
    int N;
    scanf("%d", &N);
    
    quadrado(N);
    return 0;
}