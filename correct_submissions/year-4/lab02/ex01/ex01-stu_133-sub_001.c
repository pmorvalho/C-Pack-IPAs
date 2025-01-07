
#include <stdio.h>

int main() {
    int n1, n2, n3;
    int maior;

    scanf("%d%d%d", &n1, &n2, &n3);

    if (n1 > n2) {
        maior = n1;
    } else {
        maior = n2;
    }
    if (n3 > maior) {
        maior = n3;
    }

    printf("%d\n", maior);
    return 0;
}