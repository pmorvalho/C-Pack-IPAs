
#include <stdio.h>

int main()
{
    
    int total, horas, minutos, segundos;

    scanf("%d", &total);

    
    horas = total / 3600;
    minutos = (total % 3600) / 60;
    segundos = total % 60;

    printf("%02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}