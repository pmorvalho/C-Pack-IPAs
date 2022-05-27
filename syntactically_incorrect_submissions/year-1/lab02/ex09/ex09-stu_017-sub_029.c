#include <stdio.h>



#define segundos_hora 3600
#define segundos_minuto 60

int main() {

    int tempo, aux, horas, minutos, segundos;

    scanf("%d", &tempo);
    aux = tempo % segundos_hora;
    horas = (tempo - aux) / 3600;
    tempo = aux;
    aux = tempo % segundos_minuto;
    minutos = (tempo - aux9 / 60;
    tempo = aux;
    segundos = tempo;
    printf("%2d:%2d:%2d", horas, minutos, segundos);
    return 0;

}