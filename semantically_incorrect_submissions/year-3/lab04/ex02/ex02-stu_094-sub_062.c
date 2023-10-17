

#include <stdio.h>

#define VECMAX 100

int main () {

    int n, i, j, l, tab[VECMAX];

    scanf("%d", &n);

    j = n;
    while (j != 0) {
        scanf("%d", &tab[i]);
        i++;
        j--;
    }
    
    while (l < n) {
        l = 0;
        for (i = 0; i < n; i++) {
            putchar(tab[i] ? '*' : ' ');
            if (tab[i])
                tab[i]--;
            else
                l++;
        }
        printf("\n");
    }
    return 0;
}

