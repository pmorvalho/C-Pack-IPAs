
#include <stdio.h>
#define VECMAX 100

int main(){
    int n,grafico[VECMAX],i,j,max=0;
    scanf("%d",&n);
    if(n>=VECMAX)
        return 1;
    for(i=0;i<n;i++){
        scanf("%d",&grafico[i]);
        if(grafico[i]>max)
            max=grafico[i];
    }
    for(i=0;i<max;i++){
        for(j=0;j<n;j++){
            if(grafico[j]==0)
                printf(" ");
            else
                printf("*");
            if(grafico[j]!=0)
                grafico[j]--;
        }
        printf("\n");
    }
    return 0;
}