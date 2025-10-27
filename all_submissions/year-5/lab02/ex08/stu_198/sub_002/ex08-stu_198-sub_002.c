
#include <stdio.h>


int main() {
    int n, i; 
    float media;
    float soma = 0;
    scanf("%d", &n);
    float list[n];
    for(i = 0; i < n; i++){
        scanf("%f", &list[i]);
    }
    for(i = 0; i < n; i++){
        soma += list[i];
    }

    media = soma/n;

    printf("%.2f\n", media);
    
    return 0;
}