
#include <stdio.h>

int main(){
    int N, horas, minutos, segundos;

    printf("Introduza o numero de segundos:\n");
    scanf("%d", &N);

    horas = N/3600;
    minutos = (N%3600)/60;
    segundos = (N%3600)%60;

    printf("%d:%d:%d\n", horas, minutos, segundos);
    return 0;
}