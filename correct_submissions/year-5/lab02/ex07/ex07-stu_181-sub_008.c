

#include <stdio.h>

int main() {
    int n, div = 0, n2;
    scanf("%d", &n);
    n2 = n + 1;
    while (--n2) {
        if (n % n2 == 0) {
            div++;
        }
    }
    printf("%d\n", div);
    return 0;
}
