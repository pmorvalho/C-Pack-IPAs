

#include <stdio.h>

int main() {
    int n;
    int var = 1;
    float number, soma, media;
    scanf("%d", &n);
    while(var <= n){
        scanf("%f", &number);
        soma += number;
        ++var;
    }
    media = soma/n;
    printf("%.2f\n", media);

}