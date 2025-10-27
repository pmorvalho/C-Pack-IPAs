
#include <stdio.h>
void quadrado(int N);
int main(){
    int N;
    scanf("%d",&N);
    quadrado(N);
    return 0;
}
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