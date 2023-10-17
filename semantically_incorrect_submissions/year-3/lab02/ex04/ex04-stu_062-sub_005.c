
#include <stdio.h>

int main() {
    int l, m, n;
    int aux;
    scanf("%d", &l);
    scanf("%d", &m);
    scanf("%d", &n);
    if (l > m) {
        aux = l;
        l = m;
        m = aux;
    }
    if (m > n) {
        aux = m;
        m = n;
        n = aux;
    }
    printf("%d %d %d\n", l, m, n);

    return 0;
}
