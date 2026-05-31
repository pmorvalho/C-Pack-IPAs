

#include <stdio.h>

int main() {
    int N, i;
    double val, soma, media = soma/N;
    scanf("%d", &N);
    
    for(i = 0; i < N; i++){
        scanf("%lf", &val);
        soma += val;
    }
    printf("%2f\n", media);
    return 0;
}