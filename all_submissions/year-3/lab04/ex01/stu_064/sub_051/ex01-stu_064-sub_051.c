

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
    int n, i, j, max, vetor[VECMAX];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &vetor[i]);
    max = maximo(vetor, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < max; j++)           
            putchar(vetor[i] > j ? '*' : ' ');
        putchar('\n');
    }
    return 0;
}