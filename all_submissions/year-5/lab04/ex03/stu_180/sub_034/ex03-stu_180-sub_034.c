

#include <stdio.h>
#define VECMAX 100


int main(){
    int n, i, linha=0;
    int valores[VECMAX];

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &valores[i]);
    }

    int max=0;
    for(i=0;i<n;i++){
        if(valores[i]>max){
            max=valores[i];
        }
    }

    for(linha=max; linha>=1; linha--){
        for(i=0; i<n; i++){
            if (valores[i]>=linha){
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
