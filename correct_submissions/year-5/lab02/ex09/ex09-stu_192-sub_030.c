
#include <stdio.h>
#define MINUTO 60
#define HORA 3600

int main() {
    int n, horas, minutos, segundos;
    int h1, h2, m1, m2, s1, s2;
    scanf("%d", &n );
    horas = n/HORA;
    n = n%HORA;
    minutos = n/MINUTO;
    n = n%MINUTO;
    segundos = n;
    h1 = horas/10;
    h2 = horas%10;
    m1 = minutos/10;
    m2 = minutos%10;
    s1 = segundos/10;
    s2 = segundos%10;
    printf("%d%d:%d%d:%d%d\n", h1, h2, m1, m2, s1, s2);
    return 0;
}