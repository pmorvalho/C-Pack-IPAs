

#include <stdio.h>

int main () {
    int i = 1, cont = 1;
    int n;

    scanf("%d", &n);

    while (i <= n/2 + 1) {
        if (n % i == 0)
            cont++;
        i++;
    }

    printf("%d\n", cont);

    return 0;
}