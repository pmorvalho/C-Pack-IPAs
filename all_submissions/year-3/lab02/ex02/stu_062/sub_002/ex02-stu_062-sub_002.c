
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    if (n > m) {
        printf("%d\n%d\n", m, n);
    } else {
        printf("%d\n%d\n", n, m);
    }

    return 0;
}