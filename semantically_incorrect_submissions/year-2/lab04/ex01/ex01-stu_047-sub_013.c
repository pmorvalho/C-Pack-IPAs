#include <stdio.h>

#define VECMAX 100
int main(){
    int graf[VECMAX], n, i, j;
    
    printf("Introduza um inteiro positivo menor que 100.\n");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Introduza um inteiro positivo. %d/%d\n", i + 1, n);
        scanf("%d", &graf[i]);
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < graf[i]; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}