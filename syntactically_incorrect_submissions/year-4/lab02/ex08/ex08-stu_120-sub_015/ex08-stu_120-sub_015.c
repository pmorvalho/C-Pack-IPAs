
#include <stdio.h>
int main() {
    int N;
    float numero, soma = 0.0, media;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%f", &numero);
        soma += numero;
    }
    
    media = soma / N;
    
    printf("%.2f\n", media);
    return 0;
}
