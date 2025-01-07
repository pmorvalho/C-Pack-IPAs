
#include <stdio.h>

int main() {
    int n, m;

    printf("Introduza dois números: ");
    scanf("%d %d", &n, &m);
    n % m == 0 ? printf("yes\n") : printf("no\n");
    return 0;
}