
#include <stdio.h>
#define VECMAX 100

int main(){
    int n, vetor[VECMAX], i, j;
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
        scanf("%d", &vetor[i]);
    for (i = 0; i < n; i++){
        for (j = 0; j < vetor[i]; j++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}