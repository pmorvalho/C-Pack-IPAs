#include <stdio.h>



#define segundos_hora 3600
#define segundos_minuto 60

int main() {

    int tempo, horas, minutos, segundos;

    scanf("%d", &tempo);
    horas = tempo / segundos_hora;
    tempo = tempo % segundos_hora;
    minutos = tempo / segundos_minuto;
    segundos = tempo % segundos_minuto;
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
    return 0;

}