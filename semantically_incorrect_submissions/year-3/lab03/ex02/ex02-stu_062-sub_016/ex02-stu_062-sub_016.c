
#include <stdio.h>

void piramide(int n);

int main() {

    int N;
    scanf("%d", &N);
    piramide(N);
    return 0;
}

void piramide(int n) {

    int i, j;
    int s;

    for (s = 0; s <= n; s++) {
        putchar(' ');
    }

    printf("1\n");

    

    for (j = 2; j <= n; j++) {

        for (s = 0; s < n - j + 1; s++) {
            putchar(' ');
        }

        for (i = 1; i <= j; i++) {
            printf("%d ", i);
        } 
        for (i = j-1; i >= 1; i--) {
            if (i == 1) {
                printf("%d\n", i);
                break;
            } 
            printf("%d ", i);
        }

    }
}