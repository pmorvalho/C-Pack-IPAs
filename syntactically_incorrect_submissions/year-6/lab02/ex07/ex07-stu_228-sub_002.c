

#include <stdio.h>
int main() {
    int n;
    if (scanf("%d", &n) != 1) return 1;
    int i = 1, som = 0;
    while (i <= n) {
        if (n % i == 0) {
            som += 1;
        }
        i++;
    }
    printf("%d\n", som);
    return 0;
    }