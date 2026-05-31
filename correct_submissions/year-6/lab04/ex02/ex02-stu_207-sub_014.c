
#include <stdio.h>
#define VECMAX 100

int maxVector(int v[], int n){
    int max = v[0], i;
    for (i = 1; i < n; i++)
        if (v[i] > max)
        max = v[i];
    return max;
}

int main(){
    int n, vetor[VECMAX], i, j, max;
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
        scanf("%d", &vetor[i]);
    max = maxVector(vetor, n);
    for (i = 0; i < max; i++){
        for (j = 0; j < n; j++){
            if (i < vetor[j])
                putchar('*');
            else
                putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}