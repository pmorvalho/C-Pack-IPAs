

#include <stdio.h>
#define VECMAX 100

int main(){

    int n, i, j, numero[VECMAX];

    n = 0;
    
    scanf("%d", &n);


    for (i = 0; i < n; i++)
        scanf("%d", &numero[i]);

    for (i = 0; i < n; i++){
        for(j = 0; j < numero[i];j++)
            printf("*");
        printf("\n");
    }

    return 0;
}