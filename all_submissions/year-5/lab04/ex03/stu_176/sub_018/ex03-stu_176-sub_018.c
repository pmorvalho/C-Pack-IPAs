
#include <stdio.h>
#define VECMAX 100

int max(int vetor[], int lim)
{
    int idx, maior;
    maior = vetor[0];
    for (idx = 1; idx <= lim; idx++){
        if (vetor[idx] > maior){
            maior = vetor[idx];
        }
    }
    return maior;
}

int main()
{
    int n, i, linha, maiorNum, vec[VECMAX];

    
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf("%d", &vec[i]);
    }
    maiorNum = max(vec, n);
    
    for (linha = maiorNum; linha > 0; linha--){
        for (i = 0; i < n; i++){
            if (vec[i] >= linha) printf("*");
            else printf(" ");
        }
        printf("\n");
    }   

    return 0;
}