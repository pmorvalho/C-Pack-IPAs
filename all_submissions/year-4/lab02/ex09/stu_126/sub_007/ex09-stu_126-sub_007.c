
#include <stdio.h>

int main(){

    int SEG, MIN, HORA;

    scanf("%d", &SEG);

    HORA = SEG / 3600;
    MIN = (SEG % 3600) / 60;
    SEG = SEG % 60;

    printf("%02d:%02d:%02d\n", HORA, MIN, SEG);

    return 0;
}