
#include <stdio.h>
int main(){
    int n, i; 
    float media, valor;
    i = 1;
    media = 0.0;
    scanf("%d", &n);
    while(i<=n){
        scanf("%f", &valor);
        media +=valor;
        i ++;
    }
    media = media/n;
    printf("%.2f\n", media);
    return 0;
}