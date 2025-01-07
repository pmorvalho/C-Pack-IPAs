
#include <stdio.h>

#define VECMAX 100
int main(){
    int N, vetor[VECMAX];

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

        for (int j = 0; j < vetor[i]; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}