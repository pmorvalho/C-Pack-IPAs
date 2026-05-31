
#include <stdio.h>
#define VECMAX 100
int main() {
    int n, i, j, max = 0, v[VECMAX];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        max = max < v[i] ? v[i] : max;  
    }
    for (i = 0; i < max; i++) {
        for (j = 0; j < n; j++) {
            putchar(v[j] --> 0 ? '*' : ' ');
        }
        putchar('\n');
    }
    return 0;
}