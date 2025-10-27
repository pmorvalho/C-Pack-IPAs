
#include <stdio.h>
#define VECMAX 100
int main(){
    int colunas,numeros[VECMAX],i,j,max=0;
    scanf("%d",&colunas);

    if (colunas>VECMAX){
        return 1;
    }
    else{
        for (i=0;i<colunas;i++){
            scanf("%d",&numeros[i]);
            if (numeros[i]>max){
                max=numeros[i];
            }
        }
        for (i=max-1;i>=0;i--){ 
            for (j=0;j<colunas;j++){
                if (numeros[j]>i){
                    putchar('*');
                }
                else{
                    putchar(' ');
                }
            }
            printf("\n");
        } 
    }
    return 0;
}