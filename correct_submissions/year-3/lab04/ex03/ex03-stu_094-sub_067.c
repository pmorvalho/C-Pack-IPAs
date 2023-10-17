

#include <stdio.h>

#define VECMAX 100

int main () {

    int n, i, j, tab[VECMAX], max = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
        if (tab[i] > max)
            max = tab[i];
    }

    for (i = max - 1; i >= 0; i--) {
        for (j = 0; j < n; j++) {
            if (tab[j] > i)
                putchar('*');
            else
                putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}