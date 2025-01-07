
#include <stdio.h>

int main() {

    int N;
    float inteiro,media;
    float inteiros = 0;

    scanf("%d",&N);
    
    while (scanf("%f",&inteiro) == 1) {

        inteiros += inteiro;
    }

    media = inteiros / N;


    printf("%.2f\n", media);
    
    return 0;
}