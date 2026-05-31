
#include <stdio.h>

int main(){
    int N;
    float maior = 0;
    float menor = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++){
        float num;
        scanf("%f", &num);

        if (num > maior){
            maior = num;
        }
        else if (num < menor){
            menor = num;
        }

        if (i == 0){
            maior = num;
            menor = num;
        }
    }

    printf("min: %f, max: %f\n", menor, maior);

    return 0;
}