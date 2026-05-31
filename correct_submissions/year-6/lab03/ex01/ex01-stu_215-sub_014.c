


#include <stdio.h>  

void quadrado(int n){   
    int linha, coluna;
    for (linha = 0; linha < n; linha++){
        for (coluna = linha + 1; coluna <= n + linha; coluna++){ 
            printf("%d",coluna);
            if (coluna != n + linha)    
                printf("\t");   
            
        }
        printf("\n");   
    }
}    

int main(){
    int n;
    scanf("%d",&n);
    quadrado(n);
    return 0;
}