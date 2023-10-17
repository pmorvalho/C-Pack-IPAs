

#include <stdio.h>

#define VECMAX 100

int main () {

    int n, i, l, tab[VECMAX];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
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