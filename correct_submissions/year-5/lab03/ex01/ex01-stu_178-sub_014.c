
#include <stdio.h>

void quadrado(int N){

    int cont, looper;
    cont = 1;
    while (cont <= N){
        for (looper=cont; looper < N+cont; looper++){
            if (looper != N+cont-1){
                printf("%d\t", looper);
            }
            else{
                printf("%d", looper);
            }
        }
        printf("\n");
        cont++;
    }

}

int main(){
    int N;
    N = 0;
    while (N<2){
        scanf("%d", &N);
    }
    quadrado(N);
    return 0;
}
