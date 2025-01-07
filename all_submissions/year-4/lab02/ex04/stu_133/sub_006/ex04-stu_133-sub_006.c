
#include <stdio.h>

int main() {
    int n1, n2, n3, temporario;

    scanf("%d%d%d", &n1, &n2, &n3);

    if (n1 > n2) {
        temporario = n1;
        n1 = n2;
        n2 = temporario;
    }
    if (n1 > n3) {
        temporario = n1;
        n1 = n3;
        n3 = temporario;
    }
    if (n2 > n3) {
        temporario = n2;
        n2 = n3;
        n3 = temporario;
    }

    printf("%d %d %d\n", n1, n2, n3);
    return 0;
}

