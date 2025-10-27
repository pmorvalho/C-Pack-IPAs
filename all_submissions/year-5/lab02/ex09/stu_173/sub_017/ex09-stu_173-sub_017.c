

#include <stdio.h>

int main() {
    int horas, minutos, segundos;
    
    horas = minutos = segundos = 0;
    scanf("%d", &segundos);
    
    horas = segundos / 3600;
    minutos = (segundos - (horas * 3600)) / 60;
    segundos = segundos - (horas * 3600 + minutos * 60);

    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
    
    return 0;
}