
#include <stdio.h>
int main(){
    int N, M, menor, maior;
    scanf("%d%d", N, M);
    if (N>M){
        menor = M;
        maior= N;
    }
    else {
        menor = M;
        maior = N;
    }
    printf("%d\n%d\n", menor, maior);
}