
#include <stdio.h>

#define VECMAX 100

int main() {
    int i, n, vals[VECMAX], col;
    scanf("%d", &n);
    getchar(); 
    for (i = 0; i < n; i++) {
        vals[i] = getchar() - '0';
        if (i != n - 1)  getchar(); 
    }


    for (i = 0; i < n; i++) {
        for (col = 0; col < vals[i]; col++) {
            putchar('*');
        }
        putchar('\n');
    }


    return 0;
}