
#include <stdio.h>

int main() {
    int Num,numAUX;
    float aux,mediaAUX,media;
    scanf("%d",&Num);
    numAUX=Num;
    while (Num--) {
        scanf("%f", &aux);
        mediaAUX+=aux;
    } 
    media=mediaAUX/numAUX;
    printf("%.2f\n", media);
    return 0;
}