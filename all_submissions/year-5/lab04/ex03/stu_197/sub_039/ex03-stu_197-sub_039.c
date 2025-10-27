

#include <stdio.h>

#define VECMAX 100

int main(){
    int i , n,vec[VECMAX]={0},max=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&vec[i]);
        if(vec[i]>max) max=vec[i];
    }
    for(i=max;i>0;i--){
        for(j=0;j<n;j++){
            if(vec[j]>=i){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}