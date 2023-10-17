

#include <stdio.h>

int main() {
    int n, horas = 0, minutos = 0, segundos = 0;
    scanf("%d", &n);
    
    horas = n / 3600;
    n = n % 3600;
    minutos = n / 60;
    segundos = n % 60;

    printf("%02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}