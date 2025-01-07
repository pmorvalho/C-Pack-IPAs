
#include <stdio.h>

int main(){
    int N;
    int counter = 0;                                                                                                                                                                                                                                                  
    float num;
    float soma = 0.0;
    float media;
    scanf("%d", &N);

    while(counter < N){
        scanf("%f", &num);
        soma += num;
        counter++;
    }

    media = soma / N;
    printf("%.2f\n", media);
    return 0;

}