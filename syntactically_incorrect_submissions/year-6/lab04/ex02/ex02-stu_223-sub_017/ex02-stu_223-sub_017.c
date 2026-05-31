
#include <stdio.h>
#define VECMAX 100
int main() {
    int n, i, j, v[VECMAX], m=0;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &v[i]);
        if (v[i] >m)
            m = v[i];
    }
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++)
            putchar(i < v[j] ? '*': ' ');
        putchar('\n');
    }
}