

#include <stdio.h>

#define VECMAX 100

int main() {

    int n, i, j;
    char tab[VECMAX+1][VECMAX+1];
    int val[VECMAX-1];

    scanf("%d\n", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &val[i]);

    for (i = 0; i < n; i++) {
        for (j = 0; j < val[i]; j++)
            tab[i][j] = '*';
            
        tab[i][j++] = '\n';
        tab[i][j] = '\0';
    }

    for (i = 0; i < n; i++)
    printf("%s", tab[i]);

    return 0;
}