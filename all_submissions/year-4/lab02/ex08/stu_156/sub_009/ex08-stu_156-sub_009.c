
#include <stdio.h>

int main(void){
    int n,elem;
    float reais, sum, media;
    scanf("%d",&n);
    elem = n;
    while(n--){
        scanf("%f",&reais);
        sum += reais;
    }
    media = sum / elem;
    printf("%.2f\n", media);
    return 0;
}