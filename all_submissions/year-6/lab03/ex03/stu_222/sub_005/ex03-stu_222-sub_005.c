
#include <stdio.h>


int main() {
    int n, r, l, j;
    scanf("%d", &n);
    if (n <= 0)
        return 0;
    l = 1;
    r = n;
    while (l <= r) {
        for (j = 1; j < n; j++)
            printf("%c", j == l || j == r ? '*' : '-');
        printf("%c\n", j == l || j == r ? '*' : '-');
        l++;
        r--;
    }
    return 0;
}

