#include <stdio.h>
#define VECMAX 100

int main(){
    
    int n;
    int i=0,k=0,j=0;
    int numero;
    int vetor[VECMAX];

    scanf("%d",&n);
    for(j=0;j<VECMAX;j++){
        vetor[j]=0;
    }
    
    for(i=0;i<n;i++){
        scanf("%d",&numero);
        vetor[i]=numero;
    }

    for(i=0;i<n;i++){
        
        for (k = 0; k < vetor[i]; k++){
            printf("*");
        }
        printf("\n");
    }


return 0;
}


