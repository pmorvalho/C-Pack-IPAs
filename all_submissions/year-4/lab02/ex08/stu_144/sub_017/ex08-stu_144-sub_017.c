
#include <stdio.h>

int main(){
    int N;
    int counter = 0:
    int num;
    float soma = 0;
    scanf("%d", &N);

    while(counter < N){
        scanf("%f", &num);
        soma += num;
        counter++;
    }

    media = soma / N;
    printf("%.2f", media);
    return 0;
}