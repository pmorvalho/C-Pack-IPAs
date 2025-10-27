
#include <stdio.h>
#define MINUTO 60
#define HORA 3600

int main() {
    int n, horas, minutos, segundos;
    scanf("%d", &n );
    horas = n/HORA;
    n = n%HORA;
    minutos = n/MINUTO;
    n = n%MINUTO;
    segundos = n;
    printf("%2c:%2c:%2c\n", horas, minutos, segundos);
    return 0;
}