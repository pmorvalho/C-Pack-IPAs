
#include <stdio.h>

int num_dig = 1, num, soma = 0;

int main () {
    scanf("%d", &num);

    while ((num / 10) != 0) {
        soma += (num % 10);
        num = num / 10;
        num_dig++;
    }

    soma += (num % 10);
    printf("%d\n%d\n", num_dig, soma);
    return 0;
}