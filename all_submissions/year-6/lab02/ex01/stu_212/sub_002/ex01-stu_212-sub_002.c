

#include <stdio.h>
int main() {
    int n1 = 0, n2 = 0, n3 = 0;

    scanf("%d%d%d", &n1, &n2, &n3);
    int maior = n1;
    if (maior < n2) {
        maior = n2;
    }
    if (maior < n3) {
        maior = n3;
    } 
    printf("%d\n", maior);
    return 0;
}