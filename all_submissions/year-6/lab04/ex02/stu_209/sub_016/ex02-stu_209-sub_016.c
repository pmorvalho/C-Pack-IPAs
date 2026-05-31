
#include <stdio.h>

#define VECMAX 100

int main(){
    
    int n,i,j,temp,linha,v[VECMAX],maximo=0;
    
    if (scanf("%d",&n)!=1) {return 1;}
    
    if(n>VECMAX) {return 1;}

    for(i=0;i<n;i++){
        scanf("%d",&temp);
        v[i]=temp;
        if(temp>=maximo){
            maximo=temp;
        }
    }

    for(linha=1;linha<=maximo;linha++){
        for(j=0;j<n;j++) {
            if (v[j]>=linha) {printf("*");}
            else {printf(" ");}
        }
        printf("\n");
    }
     return 0;
    }

  
       