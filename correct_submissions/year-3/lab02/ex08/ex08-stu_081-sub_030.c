

#include <stdio.h>

int main(){
    int n, i;
    float x, soma=0.0;

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%f", &x);
        soma+=x;
    }
    printf("%.2f\n", (soma/n));
    
    return 0;
}