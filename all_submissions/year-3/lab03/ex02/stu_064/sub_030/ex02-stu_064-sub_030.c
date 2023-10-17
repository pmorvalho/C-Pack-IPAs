

#include <stdio.h>

void piramide(int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j > 0)
                putchar(' ');
            if (i+2-n+j > 0) {
                printf("%d", i+2-n+j);
            } else {
                putchar(' ');
            }
        }
        for (j--; j > 0; j--) {
            if (i+1-n+j > 0) {
                printf(" %d", i+1-n+j);
            }
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    piramide(n);
    return 0;
}
