
#include <stdio.h>

int main(){
    int N, i;
    float media = 0, valor;

    scanf("%d", &N);

    for(i = 0; i < N; i++){
        scanf("%f", &valor);
        media += valor;
    }
    media = media / N;
    
    printf("%.2f\n", media);
    
    return 0;
}