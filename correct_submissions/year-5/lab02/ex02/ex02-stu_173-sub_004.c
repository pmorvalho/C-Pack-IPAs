

#include <stdio.h>

int main() {
    int n, m, menor, maior;
    
    scanf("%d%d", &m, &n);
    if (m <= n)
        menor = m;
    else
        menor = n;
    maior = (menor == m) ? n : m;
    printf("%d\n%d\n", menor, maior);
    return 0;
}
