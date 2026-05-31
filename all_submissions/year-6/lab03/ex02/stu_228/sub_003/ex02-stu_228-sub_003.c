

#include <stdio.h>

void piramide(int N);

void espaco(int N) {
    while (N > 0) {
        printf(" ");
        N--; 
    }
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        if (n >= 2) {
            piramide(n);
        }
    }
    return 0;
}

void piramide(int N) {
    for (int i = 1; i <= N; i++) {
        espaco((N - i) * 2);
        for (int k = 1; k <= i; k++) {
            printf("%d ", k);
        }
        for (int k = i - 1; k >= 1; k--) {
            printf("%d ", k);
        }
        printf("\n");
    }
}