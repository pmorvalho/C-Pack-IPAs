
#include<stdio.h>
#define VECMAX 100

int main(){
    int i, j, n;
    int v[VECMAX]={0};

    scanf("%d",&n);

    if(n>0 && n<VECMAX){
        for(i=0; i<n; i++)
            scanf("%d", &v[i]);
    }

    for(i=0; i<n; i++){
         for(j=0; j<v[i]; j++) 
            printf("*");
        printf("\n");
    }
    return 0;
}