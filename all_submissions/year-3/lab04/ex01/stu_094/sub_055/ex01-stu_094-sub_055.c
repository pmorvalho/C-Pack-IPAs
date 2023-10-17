

#include <stdio.h>

#define VECMAX 100

int main () {

    int n, j, tab[VECMAX], i = 0;

    scanf("%d", &n);

    j = n;
    while (j != 0) {
        scanf("%d", &tab[i]);
        i++;
        j--;
    }

    for (i = 0; i < n; i++) {
        while (tab[i] != 0) {
            printf("*");
            tab[i]--;
        }
        printf("\n");
    }
    return 0;
}