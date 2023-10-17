
#include <stdio.h>
#define VECMAX 100

int main(){
    int linhas, colunas, n,nmax = 0;
    int tab[VECMAX];
    scanf("%d",&n);
    for(linhas = 0; linhas < n; linhas++){
        scanf("%d", &tab[linhas]);
        nmax = tab[linhas] > nmax ? tab[linhas] : nmax;
    } 
    for(linhas = 0; linhas < nmax; linhas++){
        for(colunas = 0; colunas < n; colunas++){
            if(tab[colunas] > linhas)
                putchar('*');
            else
                putchar('\n');
        }
        putchar('\n');
    }
    return 0;
}