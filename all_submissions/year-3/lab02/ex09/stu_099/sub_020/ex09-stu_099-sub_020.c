
#include <stdio.h>

int main()
{
    int segundo_totais, horas = 0, minutos = 0, segundos = 0;

    scanf("%d", &segundo_totais);

    horas = segundo_totais / 3600;
    segundo_totais %= 3600;

    minutos = segundo_totais / 60;
    segundo_totais %= 60;

    segundos = segundo_totais;

    printf("%02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}
