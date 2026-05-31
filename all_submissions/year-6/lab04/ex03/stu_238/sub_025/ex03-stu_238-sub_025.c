    
    #include <stdio.h>

    #define VECMAX 100

    int main () {
        int n, i, j, m = -1, v[VECMAX];

        scanf("%d", &n);
        for(i = 0; i < n; i++) {
            scanf("%d", &v[i]);
            m = m < v[i] ? v[i] : m;
        }

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            putchar(v[j]-- > 0 ? '*': ' ');
        }
        putchar('\n');
    }
    return 0;
    }