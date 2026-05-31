

#include <stdio.h>

int main(){

    int n;
    double soma, media, val;
    soma = 0.0;

    if (scanf("%d", &n)!=1 || n<=0) return 2;

    for(int i = 1; i <= n; i++){
        scanf("%lf", &val);
        soma += val;
    }
    
    media = (soma / n);
    printf("%.2f\n", media);
    return 0;
}