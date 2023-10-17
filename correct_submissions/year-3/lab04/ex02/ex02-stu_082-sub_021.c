

#include <stdio.h>

#define VECMAX 100

int main() {
    int i, j, n, nmax = 0, vec[VECMAX];
    do {
        scanf("%d", &n);
    } while (n > VECMAX && n <= 0);
    for (i = 0; i < n; i++) {
        scanf("%d", &vec[i]);
        nmax = (vec[i] > nmax ? vec[i] : nmax);
    }
    for (i = 0; i < nmax; i++) {
        for (j = 0; j < n; j++) {
            if (i < vec[j]) 
                putchar('*');
            else
                putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}