

#include <stdio.h>
#define CONVERSAO 60

int main(){

    int segundos, minutos, horas;
    scanf("%d", &segundos);

    minutos = segundos/CONVERSAO;
    segundos = segundos % CONVERSAO;
    horas = minutos/CONVERSAO;
    minutos = minutos % CONVERSAO;

    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
    return 0;
}