

#include <stdio.h>

int main() {
    int n1, n2, n3, maior;

    scanf("%d%d%d", &n1, &n2, &n3);

    maior = n1 > n2 ? n1 : n2;
    maior = n3 > maior ? n3 : maior;
        
    printf("%d\n", maior);
    return 0;
}
