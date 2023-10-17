

#include <stdio.h>

int main()
{
    int N;

    printf("%s\n", "Introduza a quantidade de valores: \n"); 
    scanf("%d\n", &N);

    int i;
    float sum = 0, val, media;

    for (i=0; i<N; i++){
        printf("%s\n", "Introduza os números que deseja calcular a média: \n"); 
        scanf("%f", &val);
        sum += val;
    }
    media = sum/N;

    printf("%.2f\n", media);

    return 0;
}