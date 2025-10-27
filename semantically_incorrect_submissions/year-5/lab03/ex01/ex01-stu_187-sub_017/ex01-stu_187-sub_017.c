

#include <stdio.h>

void quadrado(int n) {
    int i, a;

    if (n <= 1) return;
    for (i= 1; i <= n; i++) {
        for (a = i; a < n + i; a++) {
            printf("%d\t", a);
        }
        printf("\n");
    }
}

int main() {
    int n;
    
    scanf("%d", &n);
    quadrado(n);
    return 0;
}
