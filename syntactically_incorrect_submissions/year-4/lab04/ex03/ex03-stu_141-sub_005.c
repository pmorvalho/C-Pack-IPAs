
#include <stdio.h>

#define VECMAX 100
int main(){
    int N, vetor[VECMAX], max = 0;

    scanf("%d", &N);

    while (N >= VECMAX && N <= 0){
        printf("Escolha um inteiro positivo menor que %d.\n", VECMAX);
        scanf("%d", &N);
    }

    for (int i = 0; i < N; i++){
        scanf("%d", &vetor[i]);
        
        while (vetor[i] < 0){
            scanf("%d", &vetor[i]);
        }

        if (vetor[i] > max){
            max = vetor[i];
        }
    }

    for (int i = 0; i < max; i++){
        for (int j = 0; j < N; j++){
            if ((max - i) - vetor[j] <= 0){
                printf("*");
                vetor[j]--;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}