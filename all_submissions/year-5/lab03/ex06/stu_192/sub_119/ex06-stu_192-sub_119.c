
#include <stdio.h>

int main() {
    long int n, m, soma = 0;
    scanf("%ld", &n);
    while(n > 0) {
        m = n%10;
        soma = soma + m;
        n = n/10;
    }
    printf("%ld\n", soma);
    (soma%9 == 0) ? printf("yes\n") : printf("no\n");
    return 0;
}