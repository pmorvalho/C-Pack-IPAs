
#include <stdio.h>

int main(){
    int N, i;
    float Soma = 0, Num;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%f", &Num);

        Soma += Num;
    }

    printf("%f\n", Soma/N);

    return 0;
}