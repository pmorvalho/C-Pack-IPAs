
#include <stdio.h>

#define SEGUNDOS_EM_MINUTOS 60
#define MINUTOS_EM_HORA 60

int main() {
    int horas, minutos, segundos;
    
    scanf("%d", &segundos);

    minutos = segundos / SEGUNDOS_EM_MINUTOS;
    segundos = segundos % SEGUNDOS_EM_MINUTOS;

    horas = minutos / MINUTOS_EM_HORA;
    minutos = minutos % MINUTOS_EM_HORA;

    printf("%02d:%02d:%02d\n", horas, minutos, segundos);    
    return 0;
}