#include <stdio.h>
#define VECMAX 100

int main(){

int n,vetor[VECMAX],i,j,max,numero;

scanf("%d",&n);
max=-1;

for(i=0;i<n;i++){
    scanf("%d",&numero);
    vetor[i]=numero;
    if(numero>max){
        max=numero;
    }
}
for (i=0;i<max;i++){
    for(j=0;j<n;j++){
        if (vetor[j]>=(max-i)){
            printf("*");
        }
        else{
            printf(" ");
        }
    }
        printf("\n");
}


return 0;
    
}

