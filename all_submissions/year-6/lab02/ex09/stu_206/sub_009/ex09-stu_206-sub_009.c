

#include <stdio.h>

#define SEGUNDOS_POR_HORA 3600
#define SEGUNDOS_POR_MINUTO 60
int main() {
    int n, hh, mm, ss, resto;
    if (scanf("%d", &n) != 1) return 0;
    hh = n / SEGUNDOS_POR_HORA;
    resto = n % SEGUNDOS_POR_HORA;
    mm = resto / SEGUNDOS_POR_MINUTO;
    ss = resto % SEGUNDOS_POR_MINUTO;
    printf("%02d:%02d:%02d\n", hh, mm, ss);
    return 0;
}