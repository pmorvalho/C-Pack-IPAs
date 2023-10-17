

#include <stdio.h>

int main(void) {

    int num1, segundos, minutos, horas;

    scanf("%d", &num1);
    segundos = num1 % 60;
    minutos = num1 / 60;
    horas = minutos / 60;
    if (minutos >= 60)
        minutos -= 60;
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
    return 0;
}