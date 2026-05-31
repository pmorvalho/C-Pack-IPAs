
#include <stdio.h>
int main(){
    int n, i=0;
    double soma=0.0, new, media;
    scanf("%d", &n);
    while (i!=n){
        scanf("%lf", &new);
        soma+=new;
        i++;
    }
    media=soma/n;
    printf("%.2f\n", media);
    return 0;
}