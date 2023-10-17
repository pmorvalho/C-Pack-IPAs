

#include <stdio.h>

#define VECMAX 100

int main () {

    int i, j, n, tab[VECMAX], max = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
        if (tab[i] > max)
            max = tab[i];
    }
    
    for (i = 0; i < max; i++) {
        for (j = 0; j < n; j++) 
            putchar(tab[j] > i ? '*' : ' ');
        putchar('\n');
    }
    return 0;
}