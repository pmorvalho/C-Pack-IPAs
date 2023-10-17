

#include <stdio.h>

#define VECMAX 100

int main() {
    int n, v[VECMAX], i, j, max = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        if (v[i] > max)
            max = v[i];
    }

    for (i = 0; i < max; i++) {
        for (j = 0; j < n; j++)
            putchar(v[j] > i ? '*' : ' ');
        putchar('\n');
    }

    return 0;

    

}