
#include <stdio.h>
int main(){
    int N, M, menor, maior;
    scanf("%d%d", &N, &M);
    if (N>M){
        menor = M;
        maior= N;
    }
    else {
        menor = N;
        maior = M;
    }
    printf("%d\n%d\n", menor, maior);
}