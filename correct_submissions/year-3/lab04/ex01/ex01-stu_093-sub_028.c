
#include <stdio.h>
#define DIM 100

int main(){

    int n;
    int i, j, k;
    int numbers[DIM];

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d", &numbers[i]);
    }

    for(j = 0; j < n; j++){
        for(k = 0; k < numbers[j]; k++)
            printf("*");
        
        printf("\n");
    }

    return 0;
}