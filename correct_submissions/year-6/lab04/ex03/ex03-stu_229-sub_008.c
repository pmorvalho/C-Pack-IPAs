
#include <stdio.h>

#define VECMAX 100

int main(){
    int n, i, j, max = 0, lista[VECMAX];
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &lista[i]);
        if(lista[i] > max){
            max = lista[i];
        }
    }
    for(i = max; i >= 1; i--){
        for(j = 0; j < n; j++){
            if(lista[j] >= i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;

}