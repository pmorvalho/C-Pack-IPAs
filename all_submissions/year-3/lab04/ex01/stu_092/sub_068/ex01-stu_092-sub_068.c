
#include <stdio.h>

#define VECMAX 100

int main(){
    int n, num, vetor[VECMAX], i, j;
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &num);
        vetor[i] = num;
    }
    for (i = 0; i < n; i++){
    num = vetor[i];
        for (j = 0; j < num; j++)
            printf("*");
    printf("\n");
    }
    return 0;
}