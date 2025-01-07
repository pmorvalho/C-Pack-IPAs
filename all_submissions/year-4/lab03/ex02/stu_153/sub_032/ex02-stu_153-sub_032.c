
#include <stdio.h>

void piramide(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++) {
            printf("  ");
        }

        int j;

        for (j = 0; j < i; j++) {
            printf("%d ", j+1);
        }

        j--;

        for (int k = j; k > 0; k--) {
            printf("%d", k);
            if (k == 1) {
                break;
            }
            else {
                printf(" ");
            }
        }

        printf("\n");
    }
    printf("\n");
}

int main() {
    int n;

    scanf("%d", &n);

    piramide(n);

    return 0;
}