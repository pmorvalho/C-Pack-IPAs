

#include <stdio.h>

int main(){
    int segundos, minutos, horas;
    scanf("%d", &segundos);
    horas = segundos/3600;
    segundos = segundos%3600;
    minutos = segundos/60;
    segundos=segundos%60;
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
    
    return 0;
}