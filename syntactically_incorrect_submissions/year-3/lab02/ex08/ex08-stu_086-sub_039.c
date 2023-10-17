

#include <stdio.h>

int main()
{
    int N;
    printf("Introduza um número inteiro: \n");
    scanf("%d\n", &N);

    int i;
    float sum = 0, val, media;

    printf("Introduza os números que deseja calcular a média: \n");

    for (i=0; i<N; i++){
        scanf("%f", &val);
        sum += val;
    }
    media = sum/N;

    printf("%.2f\n", media);

    return 0;
}