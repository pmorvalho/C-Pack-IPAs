
#include<stdio.h>
#define VECMAX 100

int main(){
    int n,i,j,max=0;
    int v[VECMAX]={0};
    scanf("%d", &n);

    if(n>0 && n<VECMAX){
        for(i=0; i<n; i++){
            scanf("%d", &v[i]);
            if(i==0 || v[i]>max){
                max = v[i];
            }
          
        } 
    }  
    for(i=0; i<max; i++){
        for(j=0; j<n; j++){
            if(i+1 > v[j])
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
        
    return 0;
}
 