
#include <stdio.h>

#define VECMAX 100

int main(){
    int n,j,k, vec[VECMAX]={0},i;
    scanf("%d\n",&n);

    for(i=0;i<n;i++){
        scanf("%d",&j);
        vec[i]=j;
    }
    for(i=0;i<n;i++){
        for(k=0;k<vec[i];k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}