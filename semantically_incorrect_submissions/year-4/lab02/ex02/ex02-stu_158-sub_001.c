
#include <stdio.h>

int main() {
    int n,m;

    printf("Introduza dois números: ");
    scanf("%d %d", &n, &m);
    n >= m ? printf("%d\n%d\n", n, m) : printf("%d\n%d\n", m, n);
    return 0;
}