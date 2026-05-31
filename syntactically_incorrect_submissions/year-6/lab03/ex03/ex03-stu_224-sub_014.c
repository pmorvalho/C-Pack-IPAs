
#include <stdio.h>

int main () {
    int n, l, r, j;
    scanf("%d", &n);
    r = n;

    for (l = 1; l <= n; l++, r--) { 
        for (j = 1; j <= n; j++)
            printf("%c%c", j == l || j == r?'*':'-', j == n?'\n':' ');
    }
}