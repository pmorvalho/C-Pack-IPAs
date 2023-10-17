

#include <stdio.h>

#define VECMAX 100

int main () {

    int n, j, tab[VECMAX], i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &tab[i]);


    for (i = 0; i < n; i++) {
        for (j = 0; j < tab[i]; j++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}