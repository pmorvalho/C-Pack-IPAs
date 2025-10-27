
#include <stdio.h>
void quadrado(int N){
    int n, ncopia, ncontador=1,repetiçoes;
    scanf("%d",&n);
    ncopia=n;
    while (ncontador<=n)
    {
        ncopia=ncontador;
        repetiçoes=n;
        while (repetiçoes--)
        {
            printf("%d\t",ncopia);
            ncopia++;
        }
        printf("\n");
        ncontador++;
        
    }
    
}