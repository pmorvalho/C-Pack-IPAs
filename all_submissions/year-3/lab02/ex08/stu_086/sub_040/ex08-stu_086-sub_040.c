

#include <stdio.h>

int main()
{
    int N;

    printf("%s\n", "Introduza a quantidade de valores:"); 
    scanf("%d\n", &N);

    int i;
    float sum = 0, val, media;

    printf("%s\n", "Introduza os valores que deseja calcular a média: "); 

    for (i=0; i<N; i++){
        scanf("%f", &val);
        sum+=val;
    }
    media = sum/N;

    printf("%.2f\n", media);

    return 0;
}