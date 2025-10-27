

#include <stdio.h>

# define VECMAX 100

int main(){
    int n, i, C, contador=0;
    scanf("%d", &n);
    if (n<VECMAX){
        while(contador<n){
            scanf("%d", &C);
            for(i=1;i<=C;i++){
                printf("*");
            }
            printf("\n");
            contador++;
        }
    }
}