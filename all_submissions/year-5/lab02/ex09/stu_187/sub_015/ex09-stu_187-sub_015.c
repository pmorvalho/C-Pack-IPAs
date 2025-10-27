

#include <stdio.h>

#define SEG_EM_1_HORA 3600
#define SEG_EM_1_MIN 60

int main() {
    int n, horas, minutos, segundos;

    scanf("%d", &n);
    horas = n / SEG_EM_1_HORA;
    minutos = (n- horas*3600) / SEG_EM_1_MIN;
    segundos = n - horas*3600 - minutos*60;
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
    return 0;
}