

#include <stdio.h>

int main () {
    
    int v;
    int num_dig = 0, soma = 0;

    scanf("%d", &v);

    while (v != 0) {
        soma += (v % 10);
        v /= 10;
        num_dig++;
    }
    printf("%d\n%d\n", num_dig, soma);
    return 0;
}