

#include <stdio.h>

int main() {

    int n;
    int soma = 0, nr_dig = 0;

    scanf("%d",&n);

    while (n > 0) {
        soma += n % 10;
        n = n / 10;
        nr_dig++;
    }

    printf("%d\n%d\n",nr_dig,soma);

    return 0;
}
