
#include <stdio.h>

void piramide(int n) {
    for (int i = 1; i <= n; i++) {
        for (int space = n; space > i; space--) {
            printf("  ");
        }

        for (int num = 1; num <= i; num++) {
            printf("%d ", num);
        }
        for (int num = i - 1; num >= 1; num--) {
            printf("%d", num);
            if (num != 1) printf(" "); 
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