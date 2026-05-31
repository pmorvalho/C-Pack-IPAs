
#include <stdio.h>

void cruz (int n){
    int linha, coluna;
    for(linha = 1; linha <= n; linha++)     
        for (coluna = 1; coluna <= n; coluna++) 
            if (coluna != n){
                if (linha == coluna || linha + coluna == n + 1)
                    printf("* ");
                else
                    printf("- ");
            }
            else{
                if (linha == coluna || linha + coluna == n + 1)
                    printf("* \n");
                else
                    printf("- \n");
            }
}

int main(){
    int n;
    scanf("%d", &n);
    cruz(n);
    return 0;
}