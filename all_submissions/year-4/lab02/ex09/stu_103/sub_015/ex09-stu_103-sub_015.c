

#include <stdio.h>

void hora(int segundos)
{
    int horas;
    int minutos;
    int segundos_restantes;

    horas = segundos / 3600;
    segundos_restantes = segundos % 3600;
    minutos = segundos_restantes / 60;
    segundos_restantes = segundos_restantes % 60;
    printf("%02d:%02d:%02d\n", horas, minutos, segundos_restantes);
}


int main() {
    int segundos;
    scanf("%d", &segundos);

    hora(segundos);
  
    return 0;
}
