#include <stdio.h>
int main()
{
    int n, horas, minutos, seg;
    scanf("%d", &n);
    horas = n / 3600;
    minutos = (n % 3600) / 60;
    seg = (n % 3600) % 60;
    printf("%02d:%02d:%02d\n", horas, minutos, seg);
    return 0;
}