

#include <stdio.h>

void quadrado(int n) {
    int i, j, m;
    while (n < 2)
        scanf("%d", &n);
    m = n;
    for (i = 1; i <= n; i++) {
        for (j = i; j < m; j++)
            printf("%d\t", j);
        printf("%d\n", m);
        m++;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    quadrado(n);
    return 0;
}
