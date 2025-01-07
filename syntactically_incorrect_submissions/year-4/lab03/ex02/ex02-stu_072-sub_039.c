

#include <stdio.h>

void piramide(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("%d", j + 1);
        }

        for (int j = 0; j < i - 1; j++) {
            printf("%d", i - j - 1);
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