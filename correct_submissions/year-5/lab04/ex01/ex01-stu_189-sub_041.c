
#include <stdio.h>

#define VECMAX 100

int main() {
    int n, n1, L;
    int valores[VECMAX];
    scanf("%d", &n);
    if (n <= 0 || n >= VECMAX) {
        return 0;
    }
    for (n1 = 0; n1 < n; n1++) {
        scanf("%d", &valores[n1]);
    }
    for (n1 = 0; n1 < n; n1++) {
        for (L = 0; L < valores[n1]; L++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}