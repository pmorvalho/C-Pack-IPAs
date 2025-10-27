
#include <stdio.h>


void quadrado(int n){
    int linhas,colunas= 1;
    for (linhas = 0;linhas < n;linhas++){
        colunas = 1;
        for (colunas = 1;colunas < n;colunas++){
            printf("%d\t",colunas+linhas);
        }
        printf("%d\n",colunas+linhas);
    } 
}
int main(){
    int n;
    scanf("%d",&n);
    quadrado(n);
    return 0;
}