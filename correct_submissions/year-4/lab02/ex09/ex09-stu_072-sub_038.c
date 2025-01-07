

#include <stdio.h>

int main() {

    int segundos, minutos, horas;

    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;

    printf("%.2d:%.2d:%.2d\n", horas, minutos, segundos % 60);

    return 0;
}