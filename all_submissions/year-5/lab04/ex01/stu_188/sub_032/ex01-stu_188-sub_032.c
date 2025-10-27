
#include <stdio.h>
#define VECMAX 100  

int main(){
    int linhas, numeros[VECMAX],i,j;
    scanf("%d",&linhas);
    if (linhas>VECMAX){
        return 1; 
    }
    else{
        for(i=0;i<linhas;i++){
            scanf("%d",&numeros[i]); 
        }
        for(i=0;i<linhas;i++){
            for(j=0;j<numeros[i];j++){
                putchar('*');
            }
            putchar('\n');
        }
    }
    return 0;
}