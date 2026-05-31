

#include <stdio.h>

#define VECMAX 100

int main(){
    
    int n,i,j,temp;
    
    if (scanf("%d",&n)!=1) {return 1;}
    
    if(n>VECMAX) {return 1;}

    for(i=0;i<n;i++){
        scanf("%d",&temp);
        for(j=0;j<temp;j++) { 
            printf("*");}
        printf("\n");
        }
    return 0;
}
