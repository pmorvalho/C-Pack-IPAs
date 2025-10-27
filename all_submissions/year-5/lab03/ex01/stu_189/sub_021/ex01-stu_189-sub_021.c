
#include <stdio.h>
void quadrado(int N){
    int N, ncopia, ncontador=1,repetiçoes;
    scanf("%d",&N);
    ncopia=N;
    while (ncontador<=N)
    {
        ncopia=ncontador;
        repetiçoes=N;
        while (repetiçoes--)
        {
            printf("%d\t",ncopia);
            ncopia++;
        }
        printf("\n");
        ncontador++;
        
    }
    
}