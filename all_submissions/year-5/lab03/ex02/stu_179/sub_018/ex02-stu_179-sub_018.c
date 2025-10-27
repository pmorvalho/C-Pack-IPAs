#include <stdio.h>

void piramide(int N) {
    int j, i;

    for (i = 1; i <= N; i++) {

        
        for (j = 0; j < N - i; j++) {
            printf("  ");  
        }
        
        
        for (j = 1; j <= i; j++) {
            printf("%d", j);
            if (j < i) printf(" ");  
        } 

        
        for (j = i - 1; j >= 1; j--) {
            printf(" %d", j);
        }

        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);
    
    if (N < 2) {
        printf("O número deve ser maior ou igual a 2.\n");
        return 1;
    }

    piramide(N);
    
    return 0;
}
