
#include <stdio.h>

void piramide(int N) {
    int i, j;
    for (i = 1; i <= N; i++) { 
        for (j = 1; j <= N; j++) {
            if (j <= N - i) printf("  ");
            else printf("%d%s", j - (N - i), j == N ? "" : " ");
        }
        for (j = i; j > 1; j--) printf(" %d", j - 1);
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    piramide(n);
    return 0;
}
