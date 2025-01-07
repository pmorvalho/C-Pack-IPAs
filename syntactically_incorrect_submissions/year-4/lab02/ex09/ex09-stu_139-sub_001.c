

#include <stdio.h>

int main()
{

    int segundos, minutos = 0, horas = 0;

    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundos = segundos % 60;

    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
}