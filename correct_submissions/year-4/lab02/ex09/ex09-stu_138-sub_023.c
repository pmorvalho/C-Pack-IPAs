
#include <stdio.h>
int main()
{
    int valor, horas, minutos, segundos;
    scanf("%d", &valor);
    horas = valor / 3600; 
    minutos = (valor % 3600) / 60; 
    segundos = valor % 60;
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
    return 0;
}
