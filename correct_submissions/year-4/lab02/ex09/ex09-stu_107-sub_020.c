
#include <stdio.h>

int main()
{
    int N, horas, minutos, segundos;

    
    scanf("%d", &N);

    horas = N / 3600;
    N = N % 3600;

    minutos = N / 60;
    N = N % 60;

    segundos = N;


    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
    return 0;
}