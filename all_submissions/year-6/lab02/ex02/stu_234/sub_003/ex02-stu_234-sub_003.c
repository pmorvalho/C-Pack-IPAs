
#include <stdio.h>

int main () {
    int maior, menor, inter;
    scanf("%d %d", &maior, &menor);
    if (menor > maior) {
        inter = maior;
        maior = menor;
        menor = inter;
    };
    printf("%d %d\n",menor, maior);
    return 0;
}