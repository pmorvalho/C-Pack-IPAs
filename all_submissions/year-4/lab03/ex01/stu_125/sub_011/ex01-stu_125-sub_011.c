
#include <stdio.h>

void quadrado(int N) {
    int i, col_count;
    
    for (i = 1; i <= N; i++) {
        for (col_count = i; col_count < i+N; col_count++) {
            if (col_count != i+N-1)
                printf("%d\t", col_count);
            else
                printf("%d\n", col_count);
        }
    }
}

int main() {
    int n = 0;

    while (n < 2) {
        scanf("%d", &n);
    }
    
    quadrado(n);

    return 0;
}