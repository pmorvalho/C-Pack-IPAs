#include <stdio.h>

#define VECMAX 100

int max(int n, int v[]) {
    int i, m=0;
    for(i =0; i<n; i++)
        if(v[i] > m)
            m = v[i];
    return m;
}

int main() {
    int n, v[VECMAX], i, j, m;
    scanf("%d", &n);

    for(i = 0; i < n; i++) 
        scanf("%d", &v[i]);
    m = max(n, v);
    
    for(i = 1; i <=m ; i++) {
        for(j = 0; j < n; j++)
            putchar(v[j] >=i ? '*':' ');
        putchar('\n');
    }
    return 0;
}