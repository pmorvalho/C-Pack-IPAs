
#include <stdio.h>

#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))

int main() {
    int n, m;
    int menor, maior;
    scanf("%d %d", &n, &m);    

    menor = min(n, m);
    maior = max(n, m);

    printf("%d\n%d\n", menor, maior);

    return 0;
}