#include <stdio.h>

int main() {
    int n1, n2, n3, n;
    printf("Introduza três inteiros.");
    scanf("%d%d%d", &n1, &n2, &n3);
    n = (n1 > n2) ? n1 : n2;
    n = (n > n3) ? n : n3;
    printf("O maior dos três números é %d.\n", n);
    return 0;
}

