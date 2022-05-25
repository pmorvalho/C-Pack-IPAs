#include <stdio.h>

#define VECMAX 100
int main(){
    int graf[VECMAX], n, i, j;
    
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &graf[i]);
        
    for(i = 0; i < n; i++){
        for(j = 0; j < graf[i]; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}