

#include <stdio.h>

void piramide(int n) {
    int i, a, b, espacos;
    
    if (n <= 1) return;

    for (i = 1; i <= n; i++) {
        for (espacos = n*2 - 2*i; espacos > 0; espacos--){
            printf(" ");
        }
        for (a = 1; a <= i; a++) {
            if (a == i)
                printf("%d", a);
            else
                printf("%d ", a);
        }
        for (b = i -1; b >= 1; b--) {
            if (b == i - 1)
                printf(" %d ", b);
            else
                printf("%d ", b);
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