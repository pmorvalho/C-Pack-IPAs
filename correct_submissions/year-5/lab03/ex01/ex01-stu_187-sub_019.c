

#include <stdio.h>

void quadrado(int n) {
    int i, a;

    if (n <= 1) return;
    for (i= 1; i <= n; i++) {
        for (a = i; a < n + i; a++) {
            if (a == n + i -1)
                printf("%d\n", a);
            else
                printf("%d\t", a);
        }
    }
}

int main() {
    int n;
    
    scanf("%d", &n);
    quadrado(n);
    return 0;
}
