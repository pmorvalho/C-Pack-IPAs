
#include <stdio.h>
#define VECMAX 101

int main(){
    int i, j, n, vetor[VECMAX];

    scanf("%d\n", &n);

    for(i = 0; i < n; i++ ){
        if(i)
            scanf(" %d", &vetor[i]);
        else
            scanf("%d", &vetor[i]);
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < vetor[i]; j++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}