

#include <stdio.h>
#define VECMAX 100

int maximo(int v[], int n) {
    int i, max = 0;
    for (i = 0; i < n; i++) 
        if (v[i] > max) 
            max = v[i];
    return max;
}

int main() {
    int n, i, j, max, vector[VECMAX];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &vector[i]);
    max = maximo(vector, n);
    for (i = 0; i < max; i++) {
        for (j = 0; j < n; j++)
            putchar(vector[j] > i ? '*' : ' ');
        putchar('\n');
    }
    return 0;
}