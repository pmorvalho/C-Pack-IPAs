#include <stdio.h>

#define VECMAX 100

int main(){

    int n,i,k, tab[VECMAX];
    
    scanf("%d",&n);
    
    if(n<VECMAX){
        for(i=0;i < n; i++){
            scanf("%d", &k);
            tab[i] = k;
        }
    }
    
    for(i=0; i< n;i++){
        for(k = tab[i]; k > 1; k--)
            printf("*");
        if (k == 1)
            printf("*\n"); 
    }
    
    return 0;
}