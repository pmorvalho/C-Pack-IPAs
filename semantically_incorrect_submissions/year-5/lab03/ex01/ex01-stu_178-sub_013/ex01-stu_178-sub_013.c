
#include <stdio.h>

void quadrado(int N){

    int cont, looper;
    cont = 1;
    while (cont <= N){
        for (looper=cont; looper < N+cont; looper++){
            printf("%d\t", looper);
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
