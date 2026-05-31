
#include <stdio.h>

#define VECMAX 100

void ex03(){
    int n, m = -1, vec[VECMAX];
    sacanf("%d", &n);
    for(int i=0, i < n, i++){
        sacanf("%d", &v[i]);
        m = m < v[i] ? v[i] : m;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            putchar(v[j]++ >= m ? '*' : ' ');
        }
        putchar('\n');
    }
}