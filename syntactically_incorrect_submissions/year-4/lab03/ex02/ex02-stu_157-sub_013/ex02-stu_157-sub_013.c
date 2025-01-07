
#include<stdio.h>

void piramide(int n) {
    int i;
    for (i = 1; i < n; i++) {
        
        int k;
        for (k = n - i; k > 0; k--) {
            printf(" ");
        }
        int j;
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        int z;
        for (z = j - 2; z >= 1; z--) {
            printf("%d", z);
        }
        printf("\n");
    }
}

int main(void) {
    int n;
    scanf("%d", &n);
    piramide(n);
    return 0;
}