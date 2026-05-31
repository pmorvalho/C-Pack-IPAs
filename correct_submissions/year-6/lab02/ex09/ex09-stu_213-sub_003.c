

#include <stdio.h>

int main()
{
    int intervalo, horas, minutos, segundos;

    scanf("%d", &intervalo);
    horas = intervalo / (60 * 60);
    minutos = (intervalo % (60 * 60)) / 60;
    segundos = intervalo % (60 * 60) % 60;
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
    return 0;    
}