
#include <stdio.h>
#define VECMAX 100

int main() {
    int i, n, vals[VECMAX], row, current, max = -1;
    scanf("%d", &n);
    getchar(); 
    for (i = 0; i < n; i++) {
        current = getchar() - '0';
        if (current > max) max = current;
        vals[i] = current;
        if (i != n - 1)
            getchar(); 
    }

    for (row = 1; row <= max; row++) {
        for (i = 0; i < n; i++)
        {
            
            if (row > vals[i])
                putchar(' ');
            else
                putchar('*');
        }
        putchar('\n');
    }

    return 0;
}