

#include <stdio.h>

int main(){

    int comprimento,i;
    float nota, media = 0;
    scanf("%d", &comprimento);


    for( i = 0; i < comprimento; i++){
        scanf("%f", &nota);
        media += nota;
    }
    
    media /= comprimento;

    printf("%.2f", media);


    return 0;
}