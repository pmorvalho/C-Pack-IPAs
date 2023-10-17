

#include <stdio.h>

#define VECMAX 100

int main() {

    int i, j, n, max = 0;
    int val[VECMAX-1];
    char tab[VECMAX+1][VECMAX+1];

    scanf("%d\n", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &val[i]);
        if (val[i] > max)
            max = val[i];
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < max; j++) {
            if (j >= max - val[i])
                tab[i][j] = '*';
            else
                tab[i][j] = ' ';
        }
        tab[i][j++] = '\n';
        tab[i][j] = '\0';
    }

    for (i = 0; i < n; i++)
        printf("%s", tab[i]);

    return 0;
}