

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
    for (i = max - 1; i >= 0; i--) {
        for (j = 0; j < n; j++)           
            putchar(vetor[j] > i ? '*' : ' ');
        putchar('\n');
    }
    return 0;
}