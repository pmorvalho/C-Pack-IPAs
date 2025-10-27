
#include <stdio.h>


void quadrado(int n){
    int linhas=0,colunas= 1;
    for (linhas;linhas < n;linhas++){
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