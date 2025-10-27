
#include <stdio.h>
void quadrado(int N);
int main(){
    int N;
    scanf("%d",&N);
    quadrado(N);
    return 0;
}
void quadrado(int N){
    int ncopia, ncontador=1,repeticoes;
    ncopia=N;
    while (ncontador<=N)
    {
        ncopia=ncontador;
        repeticoes=N;
        while (repeticoes--)
        {
            if (repeticoes==1){
                printf("%d\t",ncopia);
            }
            else{
                printf("%d\t",ncopia);
            }
            ncopia++;
        }
        printf("\n");
        ncontador++;
    }
    
}