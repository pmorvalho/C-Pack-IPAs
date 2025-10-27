
#include <stdio.h>
int main() {
    int N;
    float num, media, soma = 0;
    
    scanf("%d", &N);    

    for(int i = 0; i < N; i++) {
        scanf("%f", &num);
        soma += num;
    }

    media = soma / N;

    printf("%.2f\n", media);

    return 0;
}

