
#include <stdio.h>

#define VECMAX 100

int main () {
    int n,i,j,k,vec[VECMAX];
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &vec[i]);
    }
    for(j = 0; j < n; j++){
        for(k = 0; k < vec[j]; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}