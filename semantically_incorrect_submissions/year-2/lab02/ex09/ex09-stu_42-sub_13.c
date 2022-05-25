#include <stdio.h>

int main() {
    
    int tempo, segundos, minutos, horas;

    printf("Insira tempo em segundos: ");
    

    scanf("%d", &tempo);

    horas = tempo / 3600;
    minutos = tempo % 3600 / 60;
    segundos = tempo % 3600 % 60;

    printf("%02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;

}