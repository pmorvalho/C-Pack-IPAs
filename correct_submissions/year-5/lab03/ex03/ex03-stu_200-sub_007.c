
#include <stdio.h>


void cruz(int n){
    int contador, linhas = 0;
    while (linhas<n){
        contador = 0;
        while (contador<n){
            if (contador == linhas || contador == (n-1)-linhas )
                printf("*");
            else
                printf("-");
            if (contador != n-1)
                printf(" ");
            contador++;
        }
        printf("\n");
        linhas++;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    cruz(n);
    return 0;
}