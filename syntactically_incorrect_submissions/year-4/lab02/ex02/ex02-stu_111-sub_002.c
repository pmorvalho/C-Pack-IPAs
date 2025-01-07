

#include <stdio.h>

int main() {
    int N, M, maior, menor;
    scanf("%d %d",&N,&M);
    
    maior = (M>N) ? (M) : (N);
    menor = (M>N) ? (N) : (M);
    
    printf("\n%d\n%d",maior,menor);
    
    return 0;
