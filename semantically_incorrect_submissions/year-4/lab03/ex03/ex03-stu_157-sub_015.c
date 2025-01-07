
#include <stdio.h>

void quadrado(int n) {
    int i;
    for (i = 0; i < n; i++) {
        int n1 = i, n2 = n - i - 1;
        int j;
        for (j = 0; j < n; j++) {
            if (j == n1 || j == n2) {
                printf("* ");
            }
            else {
                printf("- ");
            }
        }
        printf("\n");
    }
}

int main(void) {
    int n;
    scanf("%d", &n);
    quadrado(n);
    return 0;
}