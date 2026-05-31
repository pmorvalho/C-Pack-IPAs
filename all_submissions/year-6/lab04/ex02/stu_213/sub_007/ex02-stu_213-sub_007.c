
#include <stdio.h>
#define VECMAX 100

int maxVector(int v[], int n) {
    int max = v[0], i;
    for (i = 0; i < n; i++)
        if (v[i] > max)
            max = v[i];
    return max;
}

int main() {
    int maior, i, vec[VECMAX], n, j;

    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &vec[i]);
    }
    
    maior = maxVector(vec, n);
    for (i = 0; i < maior; i++) {
        for (j = 0; j < n; j++)
            if (vec[j] > i)
                putchar('*');
            else
                putchar(' ');
        putchar('\n');  
    }
    return 0;
}