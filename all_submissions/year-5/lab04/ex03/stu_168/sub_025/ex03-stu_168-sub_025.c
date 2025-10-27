
#include <stdio.h>
#define VECMAX 100

int main(){
    int n,graf[VECMAX],i,j,max=0;
    scanf("%d",&n);
    if(n>=VECMAX)
        return 1;
    for(i=0;i<n;i++){
        scanf("%d",&graf[i]);
        if(graf[i]>max)
            max=graf[i];
    }
    for(i=max;i>0;i--){
        for(j=0;j<n;j++){
            if(graf[j]==i){
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