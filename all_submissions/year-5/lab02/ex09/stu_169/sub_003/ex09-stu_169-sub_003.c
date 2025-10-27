

#include <stdio.h>

int main() {
    int N, horas, minutos, segundos;
    scanf("%d", &N);

    horas = N / 3600; 
    minutos = (N % 3600) / 60; 
    segundos = N % 60;

    printf("%02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}