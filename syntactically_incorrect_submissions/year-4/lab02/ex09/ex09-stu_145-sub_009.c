

#include <stdio.h>

int main() {
    int t;
    int horas = 0, minutos = 0, segundos = 0;
    scanf("%d", &t);
    if (t < 60)
        segundos = t;
    else if (t < 3600) {
        minutos = t/60;
        segundos = t % 60;
    }  
    else {
        horas = t / 3600;
        minutos = (t % 3600) / 60;
        segundos = (t % 3600) % 60;
    } 
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
}
