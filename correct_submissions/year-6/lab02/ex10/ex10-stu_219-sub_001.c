

#include <stdio.h>

int main () {

    int n, dig, cont = 0, sum = 0;

    scanf("%d", &n);

    while (n != 0) {
        cont++;
        dig = n % 10;
        sum += dig;
        n = n / 10;
    }

    printf("%d\n%d\n", cont, sum);
    return 0;
}