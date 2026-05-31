

#include <stdio.h>

int main () {
    int N, horas, minutos, segundos;
    
    scanf("%d", &N);
    horas= N/3600;
    minutos = (N - horas*3600)/60;
    segundos = (N-minutos*60)/60;
    printf("%.2d:%.2d:%.2d\n",horas, minutos, segundos);
    return 0;
}