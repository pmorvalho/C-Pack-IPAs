

#include <stdio.h>

int main () {

    int n, i, cont = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            cont ++;
    }

    printf("%d\n", cont);
    return 0;
}