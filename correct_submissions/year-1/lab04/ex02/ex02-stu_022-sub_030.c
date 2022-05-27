#include <stdio.h>

#define VECMAX 100

int main(){

    int n,i,k,max = 0;
    int tab[VECMAX];
    
    scanf("%d",&n);

    for (i = 0; i < n; ++i){
        scanf("%d", &tab[i]);
        if (tab[i] > max)
            max = tab[i];
    }

    for(k=1; k <= max;k++){
        for(i=0; i < n; i++){
            if(k <= tab[i]){
                if(i == n-1)
                    printf("*\n");
                else
                    printf("*");
            }
            else{
                if(i == n-1)
                    printf(" \n");
                else
                    printf(" ");
            }
        }
    }
    
    return 0;
}