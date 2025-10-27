
#include <stdio.h>
#define VECMAX 100

int main() {
    int i, n, vals[VECMAX], row, atual, max = -1;
    scanf("%d", &n);
    getchar(); 
    for (i = 0; i < n; i++) {
        atual = getchar() - '0';
        if (atual > max) max = atual;
        vals[i] = atual;
        if (i != n - 1)
            getchar(); 
    }

    for (row = 0; row < max; row++) {
        for (i = 0; i < n; i++) {
            
            if (max - row > vals[i])
                putchar(' ');
            else
                putchar('*');
        }
        putchar('\n');
    }

    return 0;
}