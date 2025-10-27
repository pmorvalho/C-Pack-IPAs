

#include <stdio.h>

void piramide(int N) {
    for (int i = 1; i <= N; i++) {
        
        for (int j = 0; j < N - i; j++)
            printf("  ");

        
        for (int k = 1; k <= i; k++) {
            printf("%d", k);
            if (k != i) 
                printf(" ");
        }

        
        for (int l = i - 1; l > 0; l--) {
            printf(" %d", l); 
        }

        printf("\n");
    }
}

int main() {
    int N;
    scanf("%d", &N);

    if (N >= 2)
        piramide(N);

    return 0;
}
