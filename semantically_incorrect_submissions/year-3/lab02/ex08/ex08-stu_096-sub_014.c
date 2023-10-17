
#include <stdio.h>
int main () {
    int N, i = 1;
    float num, media, soma = 0;
    scanf("%d", &N);
    while (i <= N){
        scanf("%f", &num);
        soma = soma + num;
        i++;
    }
    media = soma/(i-1);
    printf("%.2f", media);
    return 0;
}