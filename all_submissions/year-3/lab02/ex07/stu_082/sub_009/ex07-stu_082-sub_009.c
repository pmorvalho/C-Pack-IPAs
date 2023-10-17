

#include <stdio.h>

int main() {
    int n, i, div = 1;
    scanf("%d", &n);
    i = n - 1;
    while (i >= 1) {
        if (n % i == 0)
            div++;
        i--;
    }
    printf("%d\n", div);
    return 0;
}