
#include<stdio.h>
int main(){
    int N, M, maior, menor;

    scanf("%d%d", &N, &M);

    maior = (N>M)?N:M;
    menor = (maior == N)?M:N;
    
    printf("%d\n%d\n", menor, maior);

    return 0;
}