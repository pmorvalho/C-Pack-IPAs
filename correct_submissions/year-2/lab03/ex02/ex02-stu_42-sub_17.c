#include <stdio.h>

void piramide(int n);

int main() {
    int n;
    scanf("%d", &n);
    piramide(n);
    return 0;
}

void piramide(int n) {
    int l, c;

    for (l = 1; l <= n; l++) {
        for (c = 0; c < n-l; c++)
            printf("  ");
        for (c = 1; c <= l; c++) {
            if (c > 1)
                printf(" ");
            printf("%d", c);
        }
        for (c = l - 1; c >= 1; c--) 
            printf(" %d", c);
        printf("\n");
    }    
}