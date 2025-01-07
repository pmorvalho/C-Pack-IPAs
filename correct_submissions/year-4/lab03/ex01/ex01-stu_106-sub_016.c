
#include <stdio.h>

void quadrado(int N) {
    int i, j; 
    for (i = 0; i < N; ++i) {
        for (j = 0; j < N; ++j) {
            if (j) putchar('\t');
            printf("%d", i + j + 1);
        }
        putchar('\n');
    }
}

int main() {
    int n;
    scanf("%d", &n);
    quadrado(n);

    return 0;
}


