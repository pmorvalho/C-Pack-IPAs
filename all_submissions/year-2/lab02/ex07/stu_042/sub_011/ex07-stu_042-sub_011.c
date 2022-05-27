#include <stdio.h>

#define RESTO 0

int main() {
    int n, i, conta = 1;
    scanf("%d", &n);

    for (i = 1; i <= n/2; ++i) {
        if (n % i == RESTO)
            conta++;
    }
    printf("%d\n", conta);
    return 0;
}