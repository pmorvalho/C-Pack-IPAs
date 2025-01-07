
#include <stdio.h>

int main()
{
    int horas, minutos, segundos;
    int n;
    scanf("%d", &n);
    horas = n / 3600;
    minutos = (n / 60) - horas * 60;
    segundos = n % 60;

    printf("%02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}