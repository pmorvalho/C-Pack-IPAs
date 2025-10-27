

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", n, m);
    if (n > m)
        printf("%d\n%d", m, n);
    if (n < m)
        printf("%d\n%d", m, n);
    return 0;
}