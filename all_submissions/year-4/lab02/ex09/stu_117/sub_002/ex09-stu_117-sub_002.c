
#include <stdio.h>

int main()
{
    int segundos;
    scanf("%d", &segundos);

    int minutos = segundos / 60;
    segundos = segundos % 60;

    int horas = minutos / 60;
    minutos = minutos % 60;
    
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}