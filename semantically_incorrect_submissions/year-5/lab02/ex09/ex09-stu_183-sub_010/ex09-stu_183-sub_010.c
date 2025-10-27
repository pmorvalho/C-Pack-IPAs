
#include <stdio.h>

int main() {
    int segundos, horas, minutos, resto;
    scanf("%d", &resto);
    horas = resto / 3600;
    resto = resto % 3600;
    minutos = resto / 60;
    segundos = resto % 60;
    printf("%.2d:%.2d:%.2d", horas, minutos, segundos);
    return 0;
}