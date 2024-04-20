#include <stdio.h>

int N, horas, minutos, segundos;
int resto_h, resto_m;

int main(){

    scanf("%d", &N);

    horas = N / 3600;
    resto_h = N % 3600;
    minutos = resto_h / 60;
    resto_m = resto_h % 60;
    segundos = resto_m;

    printf("%02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}

