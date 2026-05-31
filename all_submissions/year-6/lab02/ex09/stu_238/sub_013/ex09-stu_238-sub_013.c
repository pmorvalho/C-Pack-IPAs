
#include <stdio.h>

int main() {
    int N, horas, minutos, segundos;

    if (scanf("%d", &N) == 1) {
        
        horas = N / 3600;
        minutos = (N % 3600) / 60;
        segundos = N % 60;
        
        printf("%02d:%02d:%02d\n", horas, minutos, segundos);
    }

    return 0;
}