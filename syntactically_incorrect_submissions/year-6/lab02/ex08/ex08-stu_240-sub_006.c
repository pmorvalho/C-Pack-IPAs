
#include <stdio.h>

int main(){
    int N;
    float media, soma = 0, num;

    scanf("%d", &N);

    for (int i = 0; i < N; i++){
        scanf("%f", &num);
        soma += num;
    }

    media = soma/N;
    printf("%.2f\n", media);

    return 0;
}