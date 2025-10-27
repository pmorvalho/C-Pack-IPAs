
#include <stdio.h>
void quadrado(int N){
    int ncopia, ncontador=1,repetiçoes;
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
int main (){return 0;}