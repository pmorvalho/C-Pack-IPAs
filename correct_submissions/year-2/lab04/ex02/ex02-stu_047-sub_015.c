#include <stdio.h>

#define VECMAX 100
int main(){
    int graf[VECMAX], n, i, j, maior = 0;
    
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &graf[i]);
        if(graf[i]> maior)
            maior = graf[i];
    }
    for(i = 0; i < maior; i++){
        for(j = 0; j < n; j++){
            if(graf[j] != 0){
                printf("*");
                graf[j]--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}